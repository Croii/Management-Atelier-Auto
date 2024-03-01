CC := g++
CFLAGS := -Wall -Iinclude
LDFLAGS :=

SRCDIR := src
OBJDIR := obj
BINDIR := bin

# Source files
SOURCES := $(wildcard $(SRCDIR)/**/*.cpp $(SRCDIR)/*.cpp) utils/date.cpp
# Object files
OBJECTS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(filter-out utils/date.cpp, $(SOURCES))) $(OBJDIR)/date.o

# Executable
EXECUTABLE := $(BINDIR)/main

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR)/date.o: utils/date.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: all clean
