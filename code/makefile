output: $(file).o
	gcc -o $(file) $(file).o
$(file).o: $(file).c
	gcc -Os -S -o $(file).s $(file).c
	as -o $(file).o $(file).s
clean:
	rm *.o $(file)
