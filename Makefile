# build an executable named myprog from myprog.c
all:
	g++ -o main main.cpp factorial.cpp

clean:
	$(RM) main
