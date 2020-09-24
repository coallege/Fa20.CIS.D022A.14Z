artifacts := name.exe circlearea.exe stringchar.exe

all: $(artifacts)

%.exe: %.cpp
	clang++ $< -o $@

run~%: %.exe
	./$<

rdl~%: %.exe
	./$<
	del $<

del~%: %.exe
	del $<

clean: $(artifacts)
	del $^

.PHONY: all clean
