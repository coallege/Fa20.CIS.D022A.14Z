cpp_files = $(wildcard *.cpp) # -_- .cpp
src_names = $(cpp_files:%.cpp=%)
artifacts = $(cpp_files:%.cpp=%.exe)

all: $(artifacts)
	

run-all: $(src_names:%=run~%)
	

clean: $(artifacts:%=del~%)
	

%.exe: %.cpp
	@echo ----- MAK $< -----
	@clang++ $< -o $@

run~%: %.exe
	@echo ----- RUN $< -----
	@./$<
	@echo ----- END $< -----

rdl~%: run~% del~%
	

del~%:
	@echo ----- DEL $* -----
	-@del $*

cls:
	cls

.PHONY: all run-all cls
.PRECIOUS: %.exe
