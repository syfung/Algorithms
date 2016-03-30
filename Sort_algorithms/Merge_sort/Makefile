CC=gcc
CFLAG=-Wall -W

ODIR=bin

DEPS=merge_sort.h

_OBJS=merge_sort_a.o
OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

_B_OBJS=merge_sort_b.o
B_OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

all: sort_test merge_test sort_b

sort_b: test.c $(B_OBJS)
	$(CC)  -o $@ $< $(B_OBJS) $(CFLAG)

sort_test: test.c $(OBJS)
	$(CC)  -o $@ $< $(OBJS) $(CFLAG)

merge_test: merge_test.c $(OBJS)
	$(CC)  -o $@ $< $(OBJS) $(CFLAG)

$(ODIR)/%.o: %.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) -c -o $@ $< $(CFLAG)
