CC=gcc
CFLAG=-Wall -W

ODIR=bin

DEPS=merge_sort.h

_OBJS=merge_sort_a.o
OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

# Wrong here!!
_B_OBJS=merge_sort_b.o
B_OBJS =$(patsubst %,$(ODIR)/%,$(_OBJS))

ODIR_V1=$(ODIR)/v1

DEPS_V1=merge_sort_v1.h

_OBJS_V1=merge_sort_v1_a.o
OBJS_V1=$(patsubst %,$(ODIR_V1)/%,$(_OBJS_V1))

all: sort_test merge_test sort_b merge_sort_v1

merge_sort_v1: test.c $(OBJS_V1)
	$(CC)  -o $@ $< $(OBJS_V1) $(CFLAG)

sort_b: test.c $(B_OBJS)
	$(CC)  -o $@ $< $(B_OBJS) $(CFLAG)

sort_test: test.c $(OBJS)
	$(CC)  -o $@ $< $(OBJS) $(CFLAG)

merge_test: merge_test.c $(OBJS)
	$(CC)  -o $@ $< $(OBJS) $(CFLAG)

$(ODIR)/%.o: %.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) -c -o $@ $< $(CFLAG)

$(ODIR_V1)/%.o: %.c $(DEPS_V1)
	mkdir -p $(ODIR_V1)
	$(CC) -c -o $@ $< $(CFLAG)

.PHONY: clean

clean:
	rm -Rvf bin
	rm sort_test
	rm merge_test
	rm sort_b
	rm merge_sort_v1
