/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: W2Wizard <w2.wizzard@gmail.com>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/10 20:41:14 by W2Wizard      #+#    #+#                 */
/*   Updated: 2021/09/10 20:41:14 by W2Wizard      ########   odam.nl         */
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
void free_n(int n, ...)
{
	va_list ptrs;
	va_start(ptrs, n);

	t_i32 i = -1;
	while (++i < n)
		free(va_arg(ptrs, void*));

	va_end(ptrs);
}

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

// TODO: Write the actual tests.
///////////////////////////////////////////////////////////

TEST_DECLARE(ft_atoi)
{


	return (TRUE);
}

TEST_DECLARE(ft_itoa)
{


	return (TRUE);
}

TEST_DECLARE(ft_itoa_base)
{


	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_strtoupper)
{


	return (TRUE);
}

TEST_DECLARE(ft_strtolower)
{


	return (TRUE);
}

TEST_DECLARE(ft_strlen)
{


	return (TRUE);
}

TEST_DECLARE(ft_strclen)
{


	return (TRUE);
}

TEST_DECLARE(ft_strchr)
{


	return (TRUE);
}

TEST_DECLARE(ft_strrchr)
{


	return (TRUE);
}

TEST_DECLARE(ft_strchrn)
{


	return (TRUE);
}

TEST_DECLARE(ft_strncmp)
{


	return (TRUE);
}

TEST_DECLARE(ft_strlcpy)
{


	return (TRUE);
}

TEST_DECLARE(ft_strlcat)
{


	return (TRUE);
}

TEST_DECLARE(ft_strnstr)
{


	return (TRUE);
}

TEST_DECLARE(ft_strdup)
{


	return (TRUE);
}

TEST_DECLARE(ft_strrev)
{


	return (TRUE);
}

TEST_DECLARE(ft_substr)
{


	return (TRUE);
}

TEST_DECLARE(ft_strjoin)
{


	return (TRUE);
}

TEST_DECLARE(ft_strtrim)
{


	return (TRUE);
}

TEST_DECLARE(ft_split)
{


	return (TRUE);
}

TEST_DECLARE(ft_strmap)
{


	return (TRUE);
}

TEST_DECLARE(ft_strmapi)
{


	return (TRUE);
}

TEST_DECLARE(ft_striter)
{


	return (TRUE);
}

TEST_DECLARE(ft_striteri)
{


	return (TRUE);
}

///////////////////////////////////////////////////////////

TEST_DECLARE(ft_abs)
{


	return (TRUE);
}

TEST_DECLARE(ft_neg)
{


	return (TRUE);
}

TEST_DECLARE(ft_min)
{


	return (TRUE);
}

TEST_DECLARE(ft_max)
{


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


	return (TRUE);
}

TEST_DECLARE(ft_bzero)
{


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
	TEST_RUN(UNIT_ft_atoi, TRUE);
	TEST_RUN(UNIT_ft_itoa, TRUE);
	TEST_RUN(UNIT_ft_itoa_base, TRUE); // TRUE as itoa depends on this!

	printf("//= String Utils =//\n\n");
	return (EXIT_SUCCESS);
}
