all:robot.o robot

robot.o:robot.c
	cc -c robot.c

robot:robot.o
	cc -o robot robot.o