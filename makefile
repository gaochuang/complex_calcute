
test.out:test.o complex.o
	g++ -o test.out test.o complex.o
test.o:test.cpp
	g++ -o test.o -c test.cpp
complex.o:complex.cpp
	g++ -o complex.o -c complex.cpp


all:test.out

clean:
	rm -r -f test.out *.o