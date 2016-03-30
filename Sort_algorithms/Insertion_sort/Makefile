CC=gcc
CFLAG=-Wall -W

ODIR=bin

DEPS=insertion_sort.h

_OBJS=insertion_sort_a.o
OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

all: sort_test

sort_test: test.c $(OBJS)
	$(CC)  -o $@ $< $(OBJS) $(CFLAG)

$(ODIR)/%.o: %.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) -c -o $@ $< $(CFLAG)
