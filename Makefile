


CFOLD =. ./day1/ ./day2/

CC = gcc
OPT = -O2 
DEPT = 
WARNING = -Wall -Wextra 
SILENT = -Wno-sign-compare -Wno-unused-result
STD = -std=c2x
CFLAGS =  $(WARNING)  $(STD) $(OPT) $(SILENT) $(DEPT) -lm

CFILE  = $(foreach D,$(CFOLD),$(wildcard $(D)/*.c ))

BIN = $(patsubst %.c,% ,$(CFILE))

all: $(BIN)
	  
%:%.c 
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(BIN)