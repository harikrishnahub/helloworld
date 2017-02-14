#To generate STR_FUNC executable file
all:STR_FUNC
STR_FUNC:*.o 
	@cc -o STR_FUNC src/*.o
	@ar cr lib.a *.o 
	@mv lib.a ../
	@mv *.o ../obj
*.o:
	@cc -c *.c -I ../header

rm:
	@rm -rf STR_FUNC

