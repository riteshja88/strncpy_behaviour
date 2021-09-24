all:
	gcc strncpy_behaviour.c
	./a.out

clean:
	rm -f ./a.out
