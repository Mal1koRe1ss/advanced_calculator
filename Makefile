CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -lm
EXE = main
SRC = main.c include/calculations.c include/area_calculations.c include/angle_calculations.c

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	$(RM) $(EXE)

.PHONY: all clean