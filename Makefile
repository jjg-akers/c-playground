# define variables
CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
TARGET = helloworld
SRC = $(TARGET).c
OBJS = $(TARGET).o

.PHONY: clean

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $@

# this is the same as runing
# helloworld: helloworld.o
#	gcc -Wall - pedantic -std=c11 -ggdb helloworld.c -o helloworld

clean:
	$(RM) $(TARGET) $(OBJS)