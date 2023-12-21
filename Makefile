CC = g++
CCFLAGS = -g -Wall -Wshadow -O2
LFLAGS = -lm
RM = rm -f

CURDIR = .

all: test

test: main.cpp	
	$(CC) -c -Wall -Wshadow -O2 main.cpp -I$(CURDIR)/inc -o main.o
	$(CC) -Wall -Wshadow -O2 -o test main.o -lm

clean:
	$(RM) *.o test
