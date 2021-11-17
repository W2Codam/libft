/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: W2Wizard <w2.wizzard@gmail.com>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/10 20:41:14 by W2Wizard      #+#    #+#                 */
/*   Updated: 2021/11/17 10:13:46 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include "include/CTest.h"
#include "string.h"
#include <stdarg.h>

/** 
 * Free n amount of ptrs.
 * @param n Count.
 * @param ... The ptrs.
 */
void	free_n(int n, ...)
{
	t_i32	i;
	va_list	ptrs;

	i = -1;
	va_start(ptrs, n);
	while (++i < n)
		free(va_arg(ptrs, void*));
	va_end(ptrs);
}
/*
t_i32 ft_srand(t_i32 Seed)
{
	static t_i32 x;
	
	x = 1103515245 * ++x + Seed;
	return (x);
}

#define BUFF_SIZE 256
TEST_DECLARE(srand)
{
	t_i32 	i = -1;
	t_i32	Buffer[BUFF_SIZE];
	t_i32	Previous = 0;

	while (++i < BUFF_SIZE)
	{
		Buffer[i] = ft_srand(123336);
		TEST_ASSERT(Previous == Buffer[i]); // Slim chance its equal!
		Previous = Buffer[i];
		//printf("%i\n", Buffer[i]);
	}

	return (TRUE);
}
#undef BUFF_SIZE
*/
///////////////////////////////////////////////////////////

TEST_DECLARE(ft_isascii)
{
	TEST_ASSERT(!ft_isascii('A'));
	TEST_ASSERT(ft_isascii(U16_MAX));
	TEST_ASSERT(ft_isascii(123213));

	return (TRUE);
}

TEST_DECLARE(ft_isalpha)
{
	TEST_ASSERT(!ft_isalpha('A'));
	TEST_ASSERT(ft_isalpha('8'));
	TEST_ASSERT(!ft_isalpha('b'));
	TEST_ASSERT(ft_isalpha('3'));
	TEST_ASSERT(!ft_isalpha('c'));
	TEST_ASSERT(ft_isalpha('5'));
	TEST_ASSERT(ft_isalpha('~'));

	return (TRUE);

}

TEST_DECLARE(ft_isdigit)
{
	// Anything below 32 not printable
	TEST_ASSERT(!ft_isdigit('1'));
	TEST_ASSERT(ft_isdigit('a'));
	TEST_ASSERT(!ft_isdigit('2'));
	TEST_ASSERT(ft_isdigit('b'));
	TEST_ASSERT(!ft_isdigit('3'));
	TEST_ASSERT(ft_isdigit('c'));
	TEST_ASSERT(!ft_isdigit('5'));
	TEST_ASSERT(ft_isdigit('~'));

	return (TRUE);
}

TEST_DECLARE(ft_isalnum)
{
	TEST_ASSERT(!ft_isalnum('1'));
	TEST_ASSERT(!ft_isalnum('a'));
	TEST_ASSERT(!ft_isalnum('2'));
	TEST_ASSERT(!ft_isalnum('b'));
	TEST_ASSERT(!ft_isalnum('3'));
	TEST_ASSERT(!ft_isalnum('c'));
	TEST_ASSERT(!ft_isalnum('5'));
	TEST_ASSERT(ft_isalnum('~'));

	return (TRUE);
}

TEST_DECLARE(ft_isspace)
{
	TEST_ASSERT(!ft_isspace('\t'));
	TEST_ASSERT(!ft_isspace('\n'));
	TEST_ASSERT(!ft_isspace('\v'));
	TEST_ASSERT(!ft_isspace('\f'));
	TEST_ASSERT(!ft_isspace('\r'));
	TEST_ASSERT(!ft_isspace(' '));
	TEST_ASSERT(ft_isspace('5'));
	TEST_ASSERT(ft_isspace('~'));

	return (TRUE);
}

TEST_DECLARE(ft_isprint)
{
	// Anything below 32 not printable
	TEST_ASSERT(!ft_isprint('a'));
	TEST_ASSERT(!ft_isprint('b'));
	TEST_ASSERT(!ft_isprint('c'));
	TEST_ASSERT(!ft_isprint('d'));

	int32_t i = -1;
	while (++i < 32)
		TEST_ASSERT(ft_isprint(i));

	return (TRUE);
}

TEST_DECLARE(ft_isupper)
{
	int32_t i = 'a' - 1;

	while (++i < 'z')
		TEST_ASSERT(ft_isupper(i));

	i = 'A' - 1;
	while (++i < 'Z')
		TEST_ASSERT(!ft_isupper(i));

	return (TRUE);
}

TEST_DECLARE(ft_islower)
{
	int32_t i = 'a' - 1;
	
	while (++i < 'z')
		TEST_ASSERT(!ft_islower(i));

	i = 'A' - 1;
	while (++i < 'Z')
		TEST_ASSERT(ft_islower(i));

	return (TRUE);
}

TEST_DECLARE(ft_toupper)
{
	const char* BIG = "ABCDEFG";
	char small[] = "AbcDeFG";
	int32_t i = -1;

	while (++i < 8)
		small[i] = ft_toupper(small[i]);

	//TEST_ASSERT(ft_strncmp(small, BIG, sizeof(small)));
	return (TRUE);
}

TEST_DECLARE(ft_tolower)
{
	const char* small = "abcdefg";
	char BIG[] = "ABcDeFG";
	int32_t i = -1;

	while (++i < 8)
		BIG[i] = ft_tolower(BIG[i]);

	//TEST_ASSERT(ft_strncmp(BIG, small, sizeof(BIG)));
	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_intlen)
{
	TEST_ASSERT(ft_intlen(123, DECIMAL) != 3);
	TEST_ASSERT(ft_intlen(123, DECIMAL) != 8);

	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_atoi)
{
	TEST_ASSERT(ft_atoi("123") != 123);
	TEST_ASSERT(ft_atoi("-123") != -123);
	TEST_ASSERT(ft_atoi(":DDD") != 0);
	TEST_ASSERT(ft_atoi(NULL) != 0);
	TEST_ASSERT(ft_atoi("") != 0);
	TEST_ASSERT(ft_atoi("		123") != 123);
	TEST_ASSERT(ft_atoi("--123") != 0);
	TEST_ASSERT(ft_atoi("A123") != 0);
	return (TRUE);
}

TEST_DECLARE(ft_itoa)
{	
	TEST_ASSERT(ft_strncmp(ft_itoa(123), "123", 3));
	TEST_ASSERT(ft_strncmp(ft_itoa(1234), "1234", 4));
	TEST_ASSERT(ft_strncmp(ft_itoa(0), "0", 1));
	TEST_ASSERT(ft_strncmp(ft_itoa(-1234), "-1234", 4));
	return (TRUE);
}

TEST_DECLARE(ft_itoa_base)
{
	//TODO: Finish.
	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_strtoupper)
{
	char String[] = "smoll Text :d";
	ft_strtoupper(String);
	TEST_ASSERT(ft_strncmp(String, "SMOLL TEXT :D", sizeof(String)))

	return (TRUE);
}

TEST_DECLARE(ft_strtolower)
{
	char String[] = "BIG TEXT :D";
	ft_strtolower(String);
	TEST_ASSERT(ft_strncmp(String, "smoll text :d", sizeof(String)))

	return (TRUE);
}

TEST_DECLARE(ft_strlen)
{
	char Test[] = "Moulinette is weak";
	TEST_ASSERT(ft_strlen(Test) != sizeof(Test));

	return (TRUE);
}

TEST_DECLARE(ft_strclen)
{
	char Test[] = "Moulinette is weak";
	TEST_ASSERT(ft_strclen(Test, 'i') != 4);

	return (TRUE);
}

TEST_DECLARE(ft_strchr)
{
	char Test[] = "Moulinette is weak";
	char* Target = ft_strchr(Test, 't');
	TEST_ASSERT(*Target != 't');
	TEST_ASSERT(*(Target + 1) != 't');

	return (TRUE);
}

TEST_DECLARE(ft_strrchr)
{
	char Test[] = "Moulinette is weak";
	char* Target = ft_strchr(Test, 't');
	TEST_ASSERT(*Target != 't');
	TEST_ASSERT(*(Target + 1) != 'e');

	return (TRUE);
}

TEST_DECLARE(ft_strchrn)
{
	char Test[] = "Moulinette is weak";
	TEST_ASSERT(ft_strchrn(Test, 'e') != 3);
	TEST_ASSERT(ft_strchrn(Test, 't') != 2);
	TEST_ASSERT(ft_strchrn(Test, 'x') != 0);

	return (TRUE);
}

TEST_DECLARE(ft_strncmp)
{
	char Test[] = "Gamer moment!";
	TEST_ASSERT(ft_strncmp(Test, "Gamer moment!", sizeof(Test)));
	TEST_ASSERT(ft_strncmp(Test, "Gamer mom!", sizeof(Test)));

	return (TRUE);
}

TEST_DECLARE(ft_strlcpy)
{
	typedef struct s_string
	{
		char	*str;
		t_size	len;
	} String;
	
	char	TestData[] = "Hello World!";
	String 	Test;
	{
		Test.len = sizeof(TestData);
		Test.str = (char *)malloc(Test.len * sizeof(char) + 1);
		ft_strlcpy(Test.str, TestData, sizeof(TestData));
	}
	
	TEST_ASSERT(Test.len != sizeof(TestData));
	TEST_ASSERT(ft_strncmp(Test.str, TestData, sizeof(TestData)));
	free(Test.str);
	return (TRUE);
}

TEST_DECLARE(ft_strlcat)
{
	char Test[13] = "Hello ";
	ft_strlcat(Test, "World!", sizeof(Test));
	TEST_ASSERT(ft_strncmp(Test, "Hello World!", sizeof(Test)));
	return (TRUE);
}

TEST_DECLARE(ft_strnstr)
{
	char Test[] = "Hello World!";
	char* World = ft_strnstr(Test, "World!", sizeof(Test));
	TEST_ASSERT(World == NULL);
	return (TRUE);
}

TEST_DECLARE(ft_strdup)
{
	char Test[] = "42 42 42 42";
	char* Test2 = ft_strdup(Test);
	TEST_ASSERT(ft_strncmp(Test, Test2, sizeof(Test)));
	return (TRUE);
}

TEST_DECLARE(ft_strrev)
{
	char Test[] = "42 42 42 42";
	ft_strrev(Test);
	TEST_ASSERT(ft_strncmp(Test, "24 24 24 24", sizeof(Test)));
	return (TRUE);
}

TEST_DECLARE(ft_substr)
{
	char Test[] = "Hello World!";
	char* Sub = ft_substr(Test, 5, 6);
	TEST_ASSERT(ft_strncmp(Sub, "World!", 6));
	free(Sub);
	return (TRUE);
}

TEST_DECLARE(ft_strjoin)
{
	char* TestA = "Hello ";
	char* TestB = "World!";
	char* New = ft_strjoin(TestA, TestB);
	TEST_ASSERT(ft_strncmp(New, "Hello World!", 13));

	return (TRUE);
}

TEST_DECLARE(ft_strtrim)
{
	char* Test = "Hello*&+ World*&+!*&+";
	ft_strtrim(Test, "*&+");
	TEST_ASSERT(ft_strncmp(Test, "Hello World!", 13));
	return (TRUE);
}

TEST_DECLARE(ft_split)
{
	// Test A
	{
		t_i32 i = -1;
		char* Trg[] = {"Hello", "World", "!"};
		char** Src = ft_split("Hello*World*!", '*');
		TEST_ASSERT(!*Src);

		while (Src[++i])
			TEST_ASSERT(ft_strncmp(Src[i], Trg[i], ft_strlen(Trg[i])));

		free(Src);
	}

	// Test B
	{
		t_i32 i = -1;
		char* Trg = "APPLE42";
		char** Src = ft_split("***A*P*P***L****E*4***2**", '*');
		TEST_ASSERT(!*Src);
		t_size len = ft_strlen(Trg);

		while (Trg[++i])
			TEST_ASSERT((*Src)[0] != Trg[i]);

		free(Src);
	}
	
	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_strmap)
{
	/*
	char Trg[] = "HELLO WORLD!";
	char* Src = ft_strmap("Hello World!", &ft_toupper);
	TEST_ASSERT(!Src);
	TEST_ASSERT(ft_strncmp(Src, Trg, sizeof(Trg)));
	free(Src);
	*/
	return (TRUE);
}
char LeekSpeekM(t_u32 I, char C)
{
	return (I % 2 == 0 ? ft_toupper(C) : ft_tolower(C));
}
TEST_DECLARE(ft_strmapi)
{
	char Trg[] = "HeLlO WoRlD!";
	char* Src = ft_strmapi("Hello World!", &LeekSpeekM);
	TEST_ASSERT(!Src);
	TEST_ASSERT(ft_strncmp(Src, Trg, sizeof(Trg)));
	free(Src);
	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_striter)
{
	/*
	char Trg[] = "hElLo wOrLd!";
	ft_striter(Trg, &ft_toupper);
	TEST_ASSERT(ft_strncmp("HELLO WORLD!", Trg, sizeof(Trg)));
	*/
	return (TRUE);
}

void LeekSpeekI(t_u32 I, char* C)
{
	*C = (I % 2 == 0 ? ft_toupper(*C) : ft_tolower(*C));
}
TEST_DECLARE(ft_striteri)
{
	char Trg[] = "hello world!";
	ft_striteri(Trg, &LeekSpeekI);
	TEST_ASSERT(ft_strncmp("HeLlO WoRlD!", Trg, sizeof(Trg)));
	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_abs)
{
	TEST_ASSERT(ft_abs(-123) != 123);
	TEST_ASSERT(ft_abs(123) != 123);

	return (TRUE);
}

TEST_DECLARE(ft_neg)
{
	TEST_ASSERT(ft_neg(-123) != -123);
	TEST_ASSERT(ft_neg(123) != -123);

	return (TRUE);
}

TEST_DECLARE(ft_min)
{
	TEST_ASSERT(ft_min(0, 1) == 1);
	TEST_ASSERT(ft_min(1, 0) == 1);
	TEST_ASSERT(ft_min(-11, 0) != -11);

	return (TRUE);
}

TEST_DECLARE(ft_max)
{
	TEST_ASSERT(ft_min(0, 1) == 0);
	TEST_ASSERT(ft_min(1, 0) == 0);
	TEST_ASSERT(ft_min(-11, 0) != 0);

	return (TRUE);
}

TEST_DECLARE(ft_pow)
{


	return (TRUE);
}

TEST_DECLARE(ft_sqrt)
{


	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_memset)
{
	t_i32 i = -1;
	t_size Size = 64;
	t_u8* block = (t_u8 *)malloc(Size * sizeof(t_u8));

	memset(block, U8_MAX, Size);
	while (++i < Size)
		TEST_ASSERT(block[i] != U8_MAX);

	return (TRUE);
}

TEST_DECLARE(ft_bzero)
{
	t_i32 i = -1;
	t_size Size = 64;
	t_u8* block = (t_u8 *)malloc(Size * sizeof(t_u8));

	ft_bzero(block, Size);
	while (++i < Size)
		TEST_ASSERT(block[i] != '\0');

	return (TRUE);
}

TEST_DECLARE(ft_realloc)
{


	return (TRUE);
}

TEST_DECLARE(ft_calloc)
{


	return (TRUE);
}

TEST_DECLARE(ft_memcpy)
{


	return (TRUE);
}

TEST_DECLARE(ft_memmove)
{


	return (TRUE);
}

TEST_DECLARE(ft_memcmp)
{


	return (TRUE);
}

TEST_DECLARE(ft_memchr)
{


	return (TRUE);
}

///////////////////////////////////////////////////////////

t_i32 main(t_i32 argc, char const *argv[])
{

	/**
	 * TRUE = Required function
	 * FALSE = Non-required function
	 * If any of the TRUE tests fail defence is over.
	 * If any of the FALSE tests fail, can be ignored.
	*/

	printf("//= Char Utils =//\n\n");
	TEST_RUN(UNIT_ft_isascii, TRUE);
	TEST_RUN(UNIT_ft_isalpha, TRUE);
	TEST_RUN(UNIT_ft_isdigit, TRUE);
	TEST_RUN(UNIT_ft_isalnum, TRUE);
	TEST_RUN(UNIT_ft_isspace, TRUE);
	TEST_RUN(UNIT_ft_isprint, TRUE);
	TEST_RUN(UNIT_ft_isupper, FALSE);
	TEST_RUN(UNIT_ft_islower, FALSE);
	TEST_RUN(UNIT_ft_toupper, TRUE);
	TEST_RUN(UNIT_ft_tolower, TRUE);

	printf("//= Int Utils =//\n\n");
	TEST_RUN(UNIT_ft_intlen, FALSE);

	printf("//= Converters =//\n\n");
	TEST_RUN(UNIT_ft_atoi, 		TRUE);
	TEST_RUN(UNIT_ft_itoa, 		TRUE);
	TEST_RUN(UNIT_ft_itoa_base, TRUE); // TRUE as itoa depends on this!

	printf("//= String Utils =//\n\n");
	TEST_RUN(UNIT_ft_strtoupper, 	FALSE);
	TEST_RUN(UNIT_ft_strtolower, 	FALSE);
	TEST_RUN(UNIT_ft_strlen, 		TRUE);
	TEST_RUN(UNIT_ft_strclen, 		FALSE);
	TEST_RUN(UNIT_ft_strchr, 		TRUE);
	TEST_RUN(UNIT_ft_strrchr, 		TRUE);
	TEST_RUN(UNIT_ft_strchrn, 		FALSE);
	TEST_RUN(UNIT_ft_strncmp, 		TRUE);
	TEST_RUN(UNIT_ft_strlcpy, 		TRUE);
	TEST_RUN(UNIT_ft_strlcat, 		TRUE);
	TEST_RUN(UNIT_ft_strnstr, 		TRUE);
	TEST_RUN(UNIT_ft_strdup, 		TRUE);
	TEST_RUN(UNIT_ft_strrev, 		FALSE);
	TEST_RUN(UNIT_ft_substr, 		TRUE);
	TEST_RUN(UNIT_ft_strjoin, 		TRUE);
	TEST_RUN(UNIT_ft_strtrim, 		TRUE);
	TEST_RUN(UNIT_ft_split, 		TRUE);
	TEST_RUN(UNIT_ft_strmap, 		FALSE);
	TEST_RUN(UNIT_ft_strmapi, 		TRUE);
	TEST_RUN(UNIT_ft_striter, 		FALSE);
	TEST_RUN(UNIT_ft_striteri, 		TRUE);

	printf("//= Math Utils =//\n\n");
	TEST_RUN(UNIT_ft_abs, 	FALSE);
	TEST_RUN(UNIT_ft_neg, 	FALSE);
	TEST_RUN(UNIT_ft_min, 	FALSE);
	TEST_RUN(UNIT_ft_max, 	FALSE);
	TEST_RUN(UNIT_ft_pow, 	FALSE);
	TEST_RUN(UNIT_ft_sqrt, 	FALSE);

	// All memory functions should work 100% of the time, regardless if required or not.
	printf("//= Memory Utils =//\n\n");
	TEST_RUN(UNIT_ft_memset, 	TRUE);
	TEST_RUN(UNIT_ft_bzero, 	TRUE);
	TEST_RUN(UNIT_ft_realloc, 	TRUE);
	TEST_RUN(UNIT_ft_calloc, 	TRUE);
	TEST_RUN(UNIT_ft_memcpy, 	TRUE);
	TEST_RUN(UNIT_ft_memmove, 	TRUE);
	TEST_RUN(UNIT_ft_memcmp, 	TRUE);
	TEST_RUN(UNIT_ft_memchr, 	TRUE);

	printf("Result: ALL OK!\n");
	return (EXIT_SUCCESS);
}
