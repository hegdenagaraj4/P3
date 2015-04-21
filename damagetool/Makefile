
CFLAGS=-lcurses 
DEBUG=-g
#DEBUG=

all: g7damage


g7damage:	mydamage.c mylink.c myunlink.c 
	gcc $(CFLAGS) $(DEBUG) mydamage.c mylink.c myunlink.c -o ../g7damage 
clean:
	rm -f ../g7damage *~

