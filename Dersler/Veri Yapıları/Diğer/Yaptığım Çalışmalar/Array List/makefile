all: compile run

compile:
	g++ -I ./include/ -o ./lib/ArrayList.o -c ./src/ArrayList.cpp
	g++ -I ./include/ -o ./bin/main ./src/main.cpp ./lib/ArrayList.o
    
run:
	./bin/main
