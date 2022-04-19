
CC = gcc
EXEC = fizzbuzz
SRC = $(shell find ./ -name "*.c")
OBJ = $(SRC:.c=.o)
ECHO = /bin/echo -e
FLAG = -I./include/ -I./include/lib/ -W -Wall -Werror -g -g3

DEFLT	=	"\033[00m"
PINK	=	"\033[0;36m"
GREEN	=	"\033[1;32m"
TEAL	=	"\033[1;36m"
RED		=	"\033[0;31m"
BLINK 	= 	"\033[1;92m"
SBLINK	= 	"\033[0m"

all:$(EXEC)

build :		$(ECHO) $(BLINK) "[SUCCESS]" $(DEFLT)

%.o : %.c
	@ $(CC) -o $@ -c $< $(FLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(PINK) $< $(DEFLT)

compillib:
	@ $(CC) $(OBJ) -o $(EXEC) $(FLAG) $(LIBA) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(PINK) $< $(DEFLT)

$(EXEC):$(OBJ)
	@ $(CC) -o $@ $^ $(FLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO - OBJECT]" $(TEAL) $< $(DEFLT)

clean:
	@ find -name "*.o" -delete && find -name "*~" -delete && \
	$(ECHO) $(BLINK) "[CLEAN SUCCESS]" $(DEFLT)

fclean:
	@ find -name "*.o" -delete && find -name "*~" -delete && rm $(EXEC) && \
	$(ECHO) $(BLINK) "[FCLEAN SUCCESS]" $(DEFLT)

re: 	fclean all

run: $(OUT)
	./$(OUT)