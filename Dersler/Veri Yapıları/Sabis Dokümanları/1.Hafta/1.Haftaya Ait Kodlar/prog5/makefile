all:compile run
compile:
	g++ -I ./include -c ./src/Sebze.cpp -o ./lib/Sebze.o
	g++ -I ./include -c ./src/Meyve.cpp -o ./lib/Meyve.o
	g++ -I ./include -c ./src/Ogrenci.cpp -o ./lib/Ogrenci.o
	g++ -I ./include -o ./bin/prog2 ./src/prog2.cpp ./lib/Ogrenci.o ./lib/Sebze.o ./lib/Meyve.o
run:
	./bin/prog2