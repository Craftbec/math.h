CC = 	gcc -Wextra -Werror -Wall

SRC = 	s21_abs.c s21_acos.c s21_asin.c s21_atan.c \
		s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c \
		s21_sin.c s21_sqrt.c s21_tan.c s21_floor.c \
		s21_fmod.c s21_log.c s21_pow.c

OBJ = $(SRC:%.c=%.o)

all: s21_math.a test 

s21_math.a: $(OBJ)
	ar rcs s21_math.a $^ 

%.o: %.c s21_math.h
	$(CC) -c $<

test:
	$(CC) -lgcov -coverage test_math/test_math.c $(SRC) -lcheck -lm -lpthread -o test
	./test

gcov_report: test
	lcov -t "test" -o test.info -c -d .
	genhtml -o test_output test.info
	@cd ./test_output ; open index.html

clean:
	rm -rf $(OBJ)
	rm -rf test
	rm -rf *.gcda *.gcno *.info
	rm -rf ./test_output/ 
	rm -rf s21_math.a
	rm -rf test_leaks
	rm -rf CPPLINT.cfg
	rm -rf RESULT_VALGRIND.txt
	rm -rf test_leaks.dSYM

re: clean all

check:
	cppcheck *.h *.c
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h

valgrind: s21_math.a
	$(CC) test_math/test_math.c s21_math.a -lcheck -o test_leaks
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./test_leaks
