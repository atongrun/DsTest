test:test.o slist.o
	gcc -o test test.o slist.o
test.o:test.c
	gcc -c -g test.c -o test.o
slist.o:slist.c
	gcc -c -g slist.c -o slist.o
.PHONY:clean
clean:
	rm -f test test.o slist.o

