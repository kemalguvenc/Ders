hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/PointNode.o -c ./src/PointNode.cpp
	g++ -I ./include/ -o ./lib/LineQueue.o -c ./src/LineQueue.cpp
	g++ -I ./include/ -o ./lib/LineNode.o -c ./src/LineNode.cpp
	g++ -I ./include/ -o ./lib/AVLTree.o -c ./src/AVLTree.cpp
	g++ -I ./include/ -o ./bin/main ./src/main.cpp ./lib/PointNode.o ./lib/LineQueue.o ./lib/LineNode.o ./lib/AVLTree.o
    
calistir:
	./bin/main