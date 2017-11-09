CC = gcc
SRC = src
LIB = `pkg-config --libs ncurses`
all: clean game
game:
	@echo "Build project"
	@$(CC) -o $@ $(SRC)/game.c $(LIB)
	@echo "End build"
clean:
	@echo "Clean project"
	@rm -f *.o game