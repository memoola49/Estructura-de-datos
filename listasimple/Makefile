contigua.o: funcioneslista.c
	gcc funcioneslista.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o funcioneslista.o
	gcc main.o funcioneslista.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o funcioneslista.o
