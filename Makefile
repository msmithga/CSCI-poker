CC = g++
CFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

card_test: card_test.cpp
	$(CC) $(CFLAGS) -o card_test card_test.cpp Card.o

Card.o: 