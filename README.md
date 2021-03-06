# Fa20.CIS.D022A.14Z

[**De Anza College Academic Honesty Policy**](ACADEMIC_HONESTY.md)

It's not a good idea to copy my stuff and submit it as your own.
Nearly every file in here is very... unique, shall we say.
Basically, don't steal my code for school purposes because that's super lame.
No harm in looking at it for inspiration, I suppose.

![](misc/footgun.png)

[The Packed Variadic Template of Doom](lab/lab6/convert_money.cpp#L67)

## Rant 1

Against my style, I'm going to use tabs since it's what the prof probably wants
to see. Nobody wants to see my garbage three space indentation except that chill
SQL Professor. Also, I like naming my files `.cxx` but I'll put up with `cpp`.
I know, I'm basically a hero at this point for dealing with that. You can email
me my awards. That being said, let's bikeshed a little harder. Which file ending
is truly the superior one? I would argue that `.cc`, while being very nice looking,
can be easily confused with the shell command `cc`, which compiles C instead
of C++. `.cc` does have the advantage of header files being `.hh`, which is good
since it's like h but twice. `.cpp` is the true neutral of the bunch, rather
unremarkable and plain, you'll have nothing to separate you out from the rest of
your 1xer peers. In my correct opinion, `.cxx` is probably the best choice out of
all of the options since Makefiles tend to use `CXX` for compiling C++. Also it has
two "x"es in it which means that you're a certified hacker or gamer just by
virtue of typing the letter twice in succession. And then you have `.c++`. As a
living being, I'm sure you are aware that nearly everything sits within a grey
area of good vs bad. If you're using `.c++`, I'm happy to report that you are one
of those anomalies, resting entirely within the bad category!

## Rant 2

So I tested it out and I'm pretty sure my prof doesn't read my code.
I don't mind it. Actually, I kinda do and I wanted to see if I could at least
get some aknowledgement, even if it was "wow this is garbage".
I decided to commit absolute curse with macros in
[lab6/travel](lab/lab6/travel.cpp). I was aiming for the verbal/text equivalent
of a concerned or disapproving look but I got nothing. Still got 100 so I can't
complain but I think I'm gonna stop trying to make cool or elegant things
starting with lab7. Since I'm not on tsor, the motivation of also showing other
people these things isn't present so I'm going with the quick and dirty strat.
I'll at least indent stuff properly, though.

## Rant 3

Actually, while I'm writing these, my pride doesn't let me write quick and dirty
stuff without at least learning something.
~~tfw self worth is just program "quality".~~
I'm pretty sure the last two labs, so lab5 and lab6, I completely rewrote the
program and stripped out all the provided boilerplate.
The prof seemed to be okay with it, maybe because it kept the original intent
of the program, even if it was done differently.
That's how I'll be doing these from now on, I think.
If I think there's a better way to do it than what's in the instructions, I'm
ignoring them.

> Annabeth Chase:
> Her fatal flaw is hubris, deadly pride.
> She thinks she can do anything better than everyone, even the gods.

nuh-uh, definitely don't see any parrallels to me. nope. not one bit.

## Rant 4

Well, I think I have finished everything and I have consumed the last of my
lemon bars in celebration. All that I have to do now is wait for the final on
December 11th and maybe retake one quiz.
Overall, quality class.
I learned a lot, and not just on my own.
This class actually taught me things I didn't know and forced me to learn things
that I wouldn't've learned on my own. Thanks, Prof. Eftekhari!

# Learnings

- default param vals
- ifstream and ofstream
- uniform initialization (`var{}`)
- uniform assignment (`var = {}`)
- struct vs class visibility
- templates, kinda but not really
- local static variables
- pass by reference vs pointers
- virtual methods
- virtual method pure specifier `= 0`
- const member functions
- [stream error states](http://www.cplusplus.com/reference/ios/basic_ios/rdstate/)
- [stream formatting flags](http://www.cplusplus.com/reference/ios/ios_base/fmtflags/)
- `cin >>` weirdness and the need for `.clear()` and `.ignore()`
- throw, try, catch
- references (`&`)
- probably much more but these are all the ones that are easily explainable
