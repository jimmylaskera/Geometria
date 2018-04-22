PROG = geometria
CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11
OBJS = main.o geometria.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) maingeo.cpp -c $(CPPFLAGS)

geometria.o: geometria.h
	$(CC) geometria.cpp -c $(CPPFLAGS)

clean:
	rm -f core $(PROG) $(OBJS)
