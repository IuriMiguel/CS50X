# Define o compilador
CC = gcc

# Define as flags de compilação
CFLAGS = -Wall -Wextra -std=c99 -g

# Define a biblioteca CS50. Se você não a usar, pode remover esta linha
LDFLAGS = -lcs50

# Atribui o nome do arquivo a ser compilado.
SRC_FILE := $(PROGRAM).c
TARGET_EXEC := $(PROGRAM)

# Regra para compilar um programa específico.
# Para usar, digite no terminal: make PROGRAM=caminho/do/arquivo
# Exemplo: make PROGRAM=comp/hello
.PHONY: all
all:
	@if [ "$(PROGRAM)" = "" ]; then \
		echo "ERRO: Por favor, especifique um programa para compilar. Exemplo: make PROGRAM=comp/hello"; \
		exit 1; \
	fi

	@if [ ! -f "$(SRC_FILE)" ]; then \
		echo "ERRO: Arquivo '$(SRC_FILE)' não encontrado."; \
		exit 1; \
	fi

	$(CC) $(CFLAGS) $(SRC_FILE) $(LDFLAGS) -o $(TARGET_EXEC)

# Regra para remover o executável de um programa específico.
# Exemplo: make clean PROGRAM=comp/hello
.PHONY: clean
clean:
	@if [ "$(PROGRAM)" = "" ]; then \
		echo "ERRO: Por favor, especifique um programa para limpar. Exemplo: make clean PROGRAM=comp/hello"; \
		exit 1; \
	fi

	@if [ ! -f "$(TARGET_EXEC)" ]; then \
		echo "AVISO: Executável '$(TARGET_EXEC)' não encontrado."; \
	else \
		rm -f $(TARGET_EXEC); \
		echo "Executável '$(TARGET_EXEC)' removido."; \
	fi
