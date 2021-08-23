CXX  = g++

CXXFLAGS  = -g -Wall -fPIC -Wno-deprecated -O3
CXXFLAGS += -std=c++14

all: libshared.so main

shared.o: shared.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

libshared.so: shared.o	
	$(CXX) -o $@ -shared $^

main: main.cpp
	$(CXX) -c $< -o main.o
	$(CXX) -o $@ main.o -L. -lshared

.PHONY : printmakehelp_and_reminder
printmakehelp_and_reminder: Makefile  README
	$(info  /**********************************************************************/)
	$(info  * task --> printmakehelp_and_reminder: Makefile  README               *)
	$(info  * $$@ ----> $@                                 *)
	$(info  * $$< --------------------------------> $<                       *)
	$(info  * $$^ --------------------------------> $^                *)
	$(info  /**********************************************************************/)

export_LD_LIBRARY_PATH:
	@echo export LD_LIBRARY_PATH=/home/burmist/home2/training/034_Cpp_Shared_Library_with_Templates/s01

print_LD_LIBRATY_PATH:
	@echo LD_LIBRARY_PATH = $(value LD_LIBRARY_PATH)

.PHONY : clean
clean:
	rm -f *~
	rm -f .*~
	rm -f *.o
	rm -f *.so
	rm -f main
