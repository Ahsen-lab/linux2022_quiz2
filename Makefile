CC = gcc
CFLAGS = -g -Wall -Werror
OBJS = quiz2.o test.o

all: quiz2

quiz2: $(OBJS)
	$(CC) $(CFLAGS) -o quiz2 $(OBJS)

clean: 
	rm -f *.o *~ quiz2
