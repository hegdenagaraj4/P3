
CFLAGS=-lcurses 
DEBUG=-g
#DEBUG=

all: myrm mycp



myrm:	mycp.c mylink.c myunlink.c 
	gcc $(CFLAGS) $(DEBUG) mycp.c mylink.c myunlink.c -o myrm 
mycp:	mycp.c mylink.c myunlink.c 
	gcc $(CFLAGS) $(DEBUG) mycp.c mylink.c myunlink.c -o mycp 
clean:
	rm -f myrm *~
	rm -f mycp *~

