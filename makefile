CFLAGS=-Wall -g

all: clean build

clean:
	rm -f pomo

build:
	cc $(CFLAGS) pomo.c -o pomo

install:
	cp pomo /usr/bin/
