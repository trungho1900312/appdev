OBJ = screen.o testscreen.o comm.o sound.o
APPNAME = srceentest

#linking rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lcurl
#copiling rule
%.o : %.c
	gcc -c -o $@ $<
#cleaning rule
clean:
	rm $(APPNAME) $(OBJ)
#archiving rule
zip :
	tar cf screen.tar *.c *.h makefile
