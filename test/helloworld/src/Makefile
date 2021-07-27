OBJS = helloworld.o
EXE = helloworld

%.o: %.c
	@echo "Compiling: $< -> $@"
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

all: $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $(EXE)

clean:
	rm -f *.o helloworld
