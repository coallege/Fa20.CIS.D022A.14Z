// void async function ez$() {
// 	const auth_token = JSON.parse(
// 		localStorage["ember_simple_auth-session-5"]
// 	).authenticated.session.auth_token;

// 	const path = location.pathname;

// 	const APIv1 = "https://zyserver.zybooks.com/v1";

// 	const req_url = `${APIv1}${path}?auth_token=${auth_token}`;

// 	const res = await fetch(req_url).then(data => data.json());

// 	window.res = res;

// 	console.clear();
// 	console.log("ez$");
// }();

void function ez$$() {
	const auth_token = JSON.parse(
		localStorage["ember_simple_auth-session-5"]
	).authenticated.session.auth_token;

	const path = location.pathname;

	const APIv1 = "https://zyserver.zybooks.com/v1";

	const req_url = `${APIv1}${path}?auth_token=${auth_token}`;

	const res = await fetch(req_url).then(data => data.json());

	console.clear();
	console.log("ez$");

	const resources = res?.section?.content_resources;

	if (!Array.isArray(resources)) {
		console.log("Something went wrong. Here's the response:");
		console.log(res);
		return;
	}

	const participation = resources.filter(({ activity_type }) => activity_type === "participation");

	for (const part of participation) {
		const content_resource_id = part.id;
		const qs = `div[content_resource_id="${content_resource_id}"]`;

		console.group(qs);
		const ele = document.querySelector(qs);
		if (ele) {
			console.info("OK ELEMENT");
			const payload = ele.children[1];
			const shortAnswerPayload = payload?.children[1];
			if (shortAnswerPayload) {
				const questions = [...shortAnswerPayload.children].map(qsa => qsa.children[0]);
				console.groupCollapsed("OK SHORT ANSWER PAYLOAD");
				for (let i = 0; i < questions.length; ++i) {
					const question = questions[i];
					const title = question.children[0]?.children?.[1];
					if (title) {
						console.info(`OK TITLE ${i}`);
						const questionData = part.payload.questions[i];
						if (questionData.answers) {
							console.info(`OK SHORT ANSWER ${i}`);
							title.innerHTML += ` <i>(${questionData.answers.join(", ")})</i>`;
						} else if (questionData.choices) {
							console.info(`OK MULTI CHOICE ${i}`);
							title.innerHTML += ` <i>(#${
								questionData.choices.findIndex(({ correct }) => correct) + 1
							})</i>`;
						} else {
							console.error(`BAD QUESTION ${i}`);
						}
					} else {
						console.error(`BAD TITLE ${i}`);
					}
				}
				console.groupEnd();
			} else {
				console.error("BAD SHORT ANSWER PAYLOAD");
			}
		} else {
			console.error("BAD ELEMENT");
		}
		console.groupEnd();
	}
}();
