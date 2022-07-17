CC=clang
LIBS=$(shell pkg-config --libs --cflags gtk4)
SOURCES=./src/*.c
TARGET=./bin/clickcounter

all:
	$(CC) $(LIBS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)