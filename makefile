#ZMAKE; sourced from MRBOOK.ORG
CC=g++
CFLAGS=-c -I. 
LDFLAGS=-lncurses 
SOURCES=main.cpp ship.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=batl

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDFLAGS) 

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o $(EXECUTABLE)
