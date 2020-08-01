run: monocyphermain.o Cypher.o
	g++ monocyphermain.o Cypher.o -o run

monocyphermain.o:	monocyphermain.cpp Cypher.h
	g++ -c monocyphermain.cpp

Cypher.o:	Cypher.h Cypher.cpp
	g++ -c Cypher.cpp

clean:
	rm *.o