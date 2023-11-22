run_preprocessor:
	g++ -E square.cpp -o square_preprocessed.cpp
	g++ -E main.cpp -o main_preprocessed.cpp

run_compile:
	g++ -c square.cpp
	g++ -c main.cpp

run_link:
	g++ square.o main.o -o program

run_build:
	g++ square.cpp main.cpp -o program

rum_assembly:
	g++ -S square.cpp
rum_disassembly:
	c++filt -n _Z6squarei

build_hello:
	g++ hello.cpp -o hello_prog