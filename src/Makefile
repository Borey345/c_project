SRCs=fixed_point_complex.c
OBJS=$(SRCS:.cpp=.o)
CC=gcc
CFLAGS=-Wall -I. -c -x c

all: compile

$(OBJS): %.o : %.h

compile: $(OBJS)
	$(CC) $(CFLAGS) fixed_point_complex.c
