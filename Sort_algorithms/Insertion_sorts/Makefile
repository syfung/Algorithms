CC=gcc
CFLAG=-Wall -W -std=c99

ODIR=bin

DEPS=insertion_sort.h

_OBJS=insertion_sort_a.o
OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

all: sort_test

sort_test: test.c $(OBJS)
	$(CC) $(CFLAG) -o $@ $< $(OBJS)

$(ODIR)/%.o: %.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) $(CFLAG) -c -o $@ $<
