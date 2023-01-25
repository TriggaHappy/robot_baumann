all:Roboter.o Roboter

Roboter.o:Roboter.c
	cc -c Roboter.c

Roboter:Roboter.o
	cc -o Roboter Roboter.o