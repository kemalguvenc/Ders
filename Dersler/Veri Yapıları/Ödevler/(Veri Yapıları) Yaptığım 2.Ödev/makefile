hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/InTreeNode.o -c ./src/InTreeNode.cpp
	g++ -I ./include/ -o ./lib/InTree.o -c ./src/InTree.cpp
	g++ -I ./include/ -o ./lib/OutTreeNode.o -c ./src/OutTreeNode.cpp
	g++ -I ./include/ -o ./lib/OutTree.o -c ./src/OutTree.cpp
	g++ -I ./include/ -o ./bin/main ./src/main.cpp ./lib/InTreeNode.o ./lib/InTree.o ./lib/OutTreeNode.o ./lib/OutTree.o
    
calistir:
	./bin/main
