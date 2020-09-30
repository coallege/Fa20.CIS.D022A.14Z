message:
	@echo This Makefile is not runnable.
	@echo It's just for rules that are used in this repo.

%.exe: %.cpp
	@echo ----- MAK $< -----
	@clang++ $< -o $@

run~%: %.exe
	@echo ----- RUN $< -----
	@./$<
	@echo ----- END $< -----

rdl~%: run~% del~%
	

del~%: %.exe
	@echo ----- DEL $< -----
	@del $<

~cls:
	cls

.PHONY: message
.PRECIOUS: %.exe
