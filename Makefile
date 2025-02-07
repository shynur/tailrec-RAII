SHELL = /bin/bash
CXXFLAGS = -std=c++23 -O3

test: test-good.exe test-bad.exe
	@echo ============================ Test ============================
	./test-bad.exe; echo exited\($$?\)
	@echo --------------------------------------------------------------
	./test-good.exe; echo exited\($$?\)
	@echo ============================ End =============================

test-good.exe: main.c good.hpp
	$(CXX) $(CXXFLAGS) -D'TAILREC' $< -o $@

test-bad.exe: main.c bad.hpp
	$(CXX) $(CXXFLAGS)             $< -o $@

.PHONY: clean
clean:
	rm -f *~
	rm -f *.exe
