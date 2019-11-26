listadoble.o: listadoble.c
	gcc listadoble.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o listadoble.o
	gcc main.o listadoble.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o listadoble.o
