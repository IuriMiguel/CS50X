
CC = clang
override CFLAGS += -g -Wno-everything -pthread -lm

# Detecta automaticamente todos os arquivos .c no diretório atual
SOURCES := $(wildcard *.c)
TARGETS := $(SOURCES:.c=)

# Regra padrão - compila o primeiro arquivo .c encontrado
all: $(word 1,$(TARGETS))

# Regra genérica para compilar qualquer arquivo .c
%: %.c
	$(CC) $(CFLAGS) $< -lcs50 -o $@

# Regra genérica para compilar arquivos C em subdiretórios
%/%.o: %/%.c
	$(CC) $(CFLAGS) -c $< -o $@

%/%: %/%.c
	$(CC) $(CFLAGS) $< -lcs50 -o $@

# Regras específicas para compatibilidade
main: main.c
	$(CC) $(CFLAGS) main.c -o "$@"

main-debug: main.c
	$(CC) $(CFLAGS) -O0 main.c -o "$@"

# Compila todos os arquivos .c do diretório atual
build-all: $(TARGETS)

# Lista todos os alvos disponíveis
list:
	@echo "Arquivos disponíveis para compilar:"
	@echo $(TARGETS)

# Limpeza
clean:
	rm -f $(TARGETS) main main-debug *.o
	find . -name "*.o" -delete 2>/dev/null || true
	find . -type f -executable -not -name "*.sh" -not -name "Makefile" -delete 2>/dev/null || true

.PHONY: all build-all list clean
