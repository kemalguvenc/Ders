hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/Iterator.o -c ./src/Iterator.cpp
	g++ -I ./include/ -o ./lib/List.o -c ./src/List.cpp
	g++ -I ./include/ -o ./bin/main ./src/main.cpp ./lib/Node.o ./lib/Iterator.o ./lib/List.o
    
calistir:
	./bin/main
