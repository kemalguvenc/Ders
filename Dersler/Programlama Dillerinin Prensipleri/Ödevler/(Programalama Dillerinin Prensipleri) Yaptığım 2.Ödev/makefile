hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Kisi.o -c ./src/Kisi.c
	gcc -I ./include/ -o ./lib/Node.o -c ./src/Node.c
	gcc -I ./include/ -o ./lib/DoublyLinkedList.o -c ./src/DoublyLinkedList.c
	gcc -I ./include/ -o ./lib/Dosya.o -c ./src/Dosya.c
	gcc -I ./include/ -o ./lib/Oyun.o -c ./src/Oyun.c
	gcc -I ./include/ -o ./bin/main ./src/main.c ./lib/Node.o ./lib/DoublyLinkedList.o ./lib/Kisi.o ./lib/Dosya.o ./lib/Oyun.o

calistir:
	./bin/main