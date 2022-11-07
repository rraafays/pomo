CFLAGS=-Wall -g

all: clean build

clean:
	rm -f pomo pomo.gif

build:
	cc $(CFLAGS) pomo.c -o pomo

install:
	cp -f pomo /usr/bin/

demo:
	vhs pomo.tape
