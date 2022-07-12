todo: main.c
	gcc -Wall -Wextra -I . -o run main.c todo.c

clean:
	rm run *.o