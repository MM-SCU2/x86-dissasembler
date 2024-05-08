format:
	find . -iname *.h -o -iname *.c | xargs clang-format -style=llvm -i 
