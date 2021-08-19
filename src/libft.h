/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                          	:+:    :+:            */
/*                                                     +:+                    */
/*   By: W2Wizard <w2.wizzard@gmail.com>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/08 17:38:51 by W2Wizard      #+#    #+#                 */
/*   Updated: 2021/08/08 17:38:51 by W2Wizard      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//= Function count: 45 =//
//= NOTE: Only malloc(), free() & write() are allowed/necessary!!! =//

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE	1
# define FALSE	0
# define U8_MAX 0xFF
# define I8_MAX 0x7F
# define U16_MAX 0xFFFF
# define I16_MAX 0x7FFF
# define U32_MAX 0xFFFFFFFF
# define I32_MAX 0x7FFFFFFF
# define U64_MAX 0xFFFFFFFFFFFFFFFF
# define I64_MAX 0x7FFFFFFFFFFFFFFF
// # define SWAP(type, a, b) ({type tmp; tmp = a; a = b; b = tmp;})

//= Types =//

typedef int					t_bool;

typedef signed char 		t_i8;
typedef unsigned char 		t_u8;

typedef signed short		t_i16;
typedef unsigned short		t_u16;

typedef signed int			t_i32;
typedef unsigned int		t_u32;

typedef signed long long	t_i64;
typedef unsigned long long	t_u64;

typedef size_t				t_size;

//= Character Utils =//

/** 
 * Checks whether a given char is a valid ASCII character.
 * @param c The character to test.
 * @returns Whether c is a valid ASCII character or not.
 */
t_bool	ft_isascii(t_i32 c);

/** 
 * Checks whether a given char is a valid upper or lowercase alphabetical character.
 * @param c The character to test.
 * @returns Whether c is an alphabetical character or not.
 */
t_bool	ft_isalpha(t_i32 c);

/** 
 * Checks whether a given char is a valid digit.
 * @param c The character to test.
 * @returns Whether c is a digit character or not.
 */
t_bool	ft_isdigit(t_i32 c);

/** 
 * Checks whether a given character is a valid alphanumeric character.
 * @param c The character to test.
 * @returns Whether c is an alphanumeric character or not.
 */
t_bool	ft_isalnum(t_i32 c);

/** 
 * Checks whether a given character is any whitespace character.
 * @param c The character to test.
 * @returns Whether c is a whitespace character.
 */
t_bool	ft_isspace(t_i32 c);

/** 
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character.
 */
t_bool	ft_isprint(t_i32 c);

/** 
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character.
 */
t_bool	ft_isupper(t_i32 c);

/** 
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character.
 */
t_bool	ft_islower(t_i32 c);

/** 
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character.
 */
t_i32	ft_toupper(t_i32 c);

/** 
 * Checks whether a given character is a valid, printable character.
 * @param c The character to test.
 * @returns Whether c is a valid, printable character.
 */
t_i32	ft_tolower(t_i32 c);

//= Converters =//

/** 
 * Converts a given string to an integer, any failure will return 0.
 * @param str The string to convert.
 * @returns The string converted to an int, or 0.
 */
t_i32	ft_atoi(const char *str);

/** 
 * Converts a given integer to a string, any failure will return Null.
 * @param str The int to convert.
 * @returns The int converted to a string, or Null.
 */
char	*ft_itoa(t_i32 n);

//= String Utils =//

/** 
 * Iterates over the string and makes every possible uppers every char.
 * @param str The string.
 * @returns The string itself.
 */
char	*ft_strtoupper(char *str);

/** 
 * Iterates over the string and makes every possible lowers every char.
 * @param str The string.
 * @returns The string itself.
 */
char	*ft_strtolower(const char *str);

/** 
 * Retrieves the length of a given string.
 * @param str The string.
 * @returns The size of the given string.
 */
t_size	ft_strlen(const char *str);

/** 
 * Retrieves the length of a given string up to a given character.
 * @param str The string.
 * @param c The char to count up until to.
 * @returns The size of the given string.
 */
t_size	ft_strclen(const char *str, char c);

/** 
 * Returns ptr to the first occurence of the given char. Starting from the front.
 * @param s The string.
 * @param c The character to look for.
 * @returns Pointer to the first occurence of the given char.
 */
char	*ft_strchr(const char *s, t_i32 c);

/** 
 * Returns ptr to the first occurence of the given char. Starting from the back.
 * @param s The string.
 * @param c The character to look for.
 * @returns Pointer to the first occurence of the given char.
 */
char	*ft_strrchr(const char *s, t_i32 c);

t_i32	ft_strncmp(const char *s1, const char *s2, t_size n);

t_size	strlcpy(char *dst, const char *src, t_size size);

t_size	strlcat(char *dst, const char *src, t_size size);

char	*ft_strnstr(const char *big, const char *little, t_size ln);

char	*ft_strdup(const char *s1);

char	*ft_strrev(const char *str);

char	*ft_substr(char const *s, t_u32 start, t_size len);

/** 
 * Counts the number of occurences of a given char in a string.
 * @param str The string
 * @param c The char to count for.
 * @returns The number of occurences of the given delimiter.
 */
t_i32	ft_strchrn(const char *str, char c);


/** 
 * @returns The string result of the concatenation of the two strings.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/** 
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @returns 
 */
char	*ft_strtrim(char const *s1, char const *set);

/** 
 * Splits a given string at every delimiter and bundles them into an array.
 * @param s The string to be split.
 * @param c The char delimiter.
 * @returns A string array.
 */
char 	**ft_split(char const *s, char c);

/** 
 * Executes a function on each char of the given string.
 * @returns 
 */
char	*ft_strmapi(char const *s, char (*f)(t_u32, char));

//= IO Utils =//

/** 
 * Prints out a given char to standart output.
 * @param c The character to write.
 */
void	ft_putchar(char c);

/** 
 * Prints out a given char to a given file descriptor.
 * @param c The character to write.
 * @param fd The file descriptor.
 */
void	ft_putchar_fd(char c, t_i32 fd);

/** 
 * Prints out a given number to standart output.
 * @param n The character to write.
 */
void	ft_putnbr(t_i32 n);

/** 
 * Prints out a given char to a given file descriptor.
 * @param n The character to write.
 * @param fd The file descriptor.
 */
void	ft_putnbr_fd(t_i32 n, t_i32 fd);

/** 
 * Prints out a given char to a given file descriptor.
 * @param s The character to write.
 */
void	ft_putendl(const char *s);

/** 
 * Prints out a given char to a given file descriptor.
 * @param s The character to write.
 * @param fd The file descriptor.
 */
void	ft_putendl_fd(const char *s, t_i32 fd);

/** 
 * Prints out a given char to a given file descriptor.
 * @param s The character to write.
 */
void	ft_putstr(const char *s);

/** 
 * Prints out a given char to a given file descriptor.
 * @param s The character to write.
 * @param fd The file descriptor.
 */
void	ft_putstr_fd(const char *s, t_i32 fd);

//= Math Utils =//

/** 
 * return ((x < 0) * (-x) + (x >= 0) * (x));
 * Returns the absolute value of a given integer.
 * @param val The value.
 * @returns The value as a positive.
 */
t_i32	ft_abs(t_i32 val);

/** 
 * return ((x < 0) * (x) + (x >= 0) * (-x));
 * Returns the negative value of a given integer.
 * @param val The value.
 * @returns The value as a negative.
 */
t_i32	ft_neg(t_i32 val);

/** 
return (a * (a <= b) + b * (b < a));
 * Returns the absolute value of a given integer.
 * @param valA The left value.
 * @param valB The right value.
 * @returns The smallest value of the two.
 */
t_i32	ft_min(t_i32 valA, t_i32 valB);

/** 
 * return (a * (a >= b) + b * (b > a));
 * Returns the absolute value of a given integer.
 * @param valA The left value.
 * @param valB The right value.
 * @returns The biggest value of the two.
 */
t_i32	ft_max(t_i32 valA, t_i32 valB);

/** 
 * Calculates the base multiplied n times depending on the exponent.
 * @param base The base value to calculate the power.
 * @param exp The exponent.
 * @returns The given base by the power of the exponent.
 */
t_i32	ft_pow(t_i32 base, t_i32 exp);
/*
	if (exp > 0)
		return (base * power(base, exp - 1));
	return (1);
*/

/** 
 * Calculates the square root of an int.
 * WARNING: Operation is quite slow with big numbers, improve in the future.
 * 
 * @param num The number to retrieve the square root from.
 * @returns The square root of num or 0 if irrational.
 */
t_i32	ft_sqrt(t_i32 num);
/*
{
	t_i32 sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) <= num && sqrt <= 46340) // <- Biggest possible square root within int32
	{
		if ((sqrt * sqrt) == num)
			break ;
		sqrt++;
	}
	return (sqrt);
}
*/

//= Memory Magic =//

/** 
 * Sets all bytes in source to a specified value
 * @param s The source.
 * @param n Size of source.
 */
void	*ft_memset(void *b, t_i32 c, t_size len);

/** 
 * Sets all bytes in source to Null.
 * @param s The source.
 * @param n Size of source.
 */
void	ft_bzero(void *s, t_size n);

/** 
 * Allocates memory of num objects of size and initializes all bytes to zero.
 * @param num The count of objects to allocate for.
 * @param size The size of the memory that needs to be allocated.
 * @returns The allocated memory area.
 */
void	*ft_calloc(t_size num, t_size size);

/** 
 * Copies no more than n amount of bytes from src to dst.
 * @param dst The destination buffer to which the bytes are copied to.
 * @param src The source buffer from which the bytes are copied from.
 * @param n   The size of source.
 * @returns Ptr to dst buffer.
 */
void	*ft_memcpy(void *dst, const void *src, t_size n);

/** 
 * Moves/copies bytes from src to dst while avoiding overlapping memory. 
 * It does so by checking wether to copy from front or back.
 * @see: https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c
 * @param dst The destination buffer to which the bytes are copied to.
 * @param src The source buffer from which the bytes are copied from.
 * @param len The size of source.
 * @returns Ptr to dst buffer.
 */
void	*ft_memmove(void *dst, const void *src, t_size len);

/**
 * Compares two memory regions against each other.
 * @param s1 Source.
 * @param s2 Target.
 * @param n Size of s1.
 * @returns Ptr to the first occurence in source,
 */
t_i32	ft_memcmp(const void *s1, const void *s2, t_size n);

/**
 * Searches & returns for the first occurence of a given byte in source.
 * @param s The source.
 * @param c The byte to search for (will be casted to unsigned char).
 * @param n Up to how many bytes can/should be read.
 * @returns Ptr to the first occurence in source.
 */
void	*ft_memchr(const void *s, t_i32 c, t_size n);

#endif
