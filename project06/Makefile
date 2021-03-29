CC = gcc
CHFLAGS = -ansi -pedantic-errors -Wall -fstack-protector-all -Werror

# Make all
all: public01.x public02.x public03.x public04.x public05.x public06.x \
 public07.x public08.x public09.x public10.x public11.x public12.x

# Executable Files
public01.x: prio-q.o public01.o
	$(CC) public01.o prio-q.o -o public01.x

public02.x: prio-q.o public02.o
	$(CC) public02.o prio-q.o -o public02.x

public03.x: prio-q.o public03.o
	$(CC) public03.o prio-q.o -o public03.x

public04.x: prio-q.o public04.o
	$(CC) public04.o prio-q.o -o public04.x

public05.x: prio-q.o public05.o
	$(CC) public05.o prio-q.o -o public05.x

public06.x: prio-q.o public06.o
	$(CC) public06.o prio-q.o -o public06.x

public07.x: prio-q.o public07.o
	$(CC) public07.o prio-q.o -o public07.x

public08.x: prio-q.o public08.o
	$(CC) public08.o prio-q.o -o public08.x

public09.x: prio-q.o public09.o
	$(CC) public09.o prio-q.o -o public09.x

public10.x: prio-q.o public10.o
	$(CC) public10.o prio-q.o -o public10.x

public11.x: prio-q.o compare-name-lists.o public11.o
	$(CC) public11.o prio-q.o compare-name-lists.o -o public11.x

public12.x: prio-q.o compare-name-lists.o public12.o
	$(CC) public12.o prio-q.o compare-name-lists.o -o public12.x

# Object Files
prio-q.o: prio-q.h prio-q-datastructure.h prio-q.c
	$(CC) $(CHFLAGS) prio-q.c -c

public01.o: prio-q.h prio-q-datastructure.h public01.c
	$(CC) $(CHFLAGS) public01.c -c

public02.o: prio-q.h prio-q-datastructure.h public02.c
	$(CC) $(CHFLAGS) public02.c -c

public03.o: prio-q.h prio-q-datastructure.h public03.c
	$(CC) $(CHFLAGS) public03.c -c

public04.o: prio-q.h prio-q-datastructure.h public04.c
	$(CC) $(CHFLAGS) public04.c -c

public05.o: prio-q.h prio-q-datastructure.h public05.c
	$(CC) $(CHFLAGS) public05.c -c

public06.o: prio-q.h prio-q-datastructure.h public06.c
	$(CC) $(CHFLAGS) public06.c -c

public07.o: prio-q.h prio-q-datastructure.h public07.c
	$(CC) $(CHFLAGS) public07.c -c

public08.o: prio-q.h prio-q-datastructure.h public08.c
	$(CC) $(CHFLAGS) public08.c -c

public09.o: prio-q.h prio-q-datastructure.h public09.c
	$(CC) $(CHFLAGS) public09.c -c

public10.o: prio-q.h prio-q-datastructure.h public10.c
	$(CC) $(CHFLAGS) public10.c -c

public11.o: prio-q.h prio-q-datastructure.h compare-name-lists.h public11.c
	$(CC) $(CHFLAGS) public11.c -c

public12.o: prio-q.h prio-q-datastructure.h compare-name-lists.h public12.c
	$(CC) $(CHFLAGS) public12.c -c

# Make Clean
clean:
	rm -f *.x public01.o public02.o public03.o public04.o public05.o public06.o \
	 public07.o public08.o public09.o public10.o public11.o public12.o prio-q.o
