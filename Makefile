CC = gcc
CFLAGS = -Wall -std=c99
LIBS = 

TARGET = SwipeTerminal
SRC = main.c s_render.c s_physics.c

all:
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LIBS)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
