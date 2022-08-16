all: compile run

compile:
	g++ -I ./include/ -o ./lib/factorial.o -c ./src/factorial.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/factorial.o ./src/Test.cpp
	
run:
	./bin/Test