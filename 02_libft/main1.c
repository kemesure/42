/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:04:32 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/14 14:05:33 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf(" __________________________________________________\n");
	printf("|                     PARTIE 1                     |\n");
	printf("|__________________________________________________|\n\n\n");
	/*
		ATOI
	*/
	printf("------------------------------------------ATOI\n");
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = (char *)malloc(42);
	strcpy(s1, " \t \n \v \r 2147483647 ");
	s2 = (char *)malloc(42);
	strcpy(s2, " \t \n \v \r +42 ");
	s3 = (char *)malloc(42);
	strcpy(s3, " \t \n \v \r -2147483648 ");
	s4 = (char *)malloc(42);
	strcpy(s4, " \t \n \v \r -+42 ");
	if (atoi(s1) != ft_atoi(s1))
	{
		printf("   atoi(\" \\t \\n \\v \\r 2147483647 \") : %d\n",    atoi(s1));
		printf("ft_atoi(\" \\t \\n \\v \\r 2147483647 \") : %d\n", ft_atoi(s1));
		printf("\n");
	}
	if (atoi(s2) != ft_atoi(s2))
	{
		printf("   atoi(\" \\t \\n \\v \\r +42 \") : %d\n",    atoi(s2));
		printf("ft_atoi(\" \\t \\n \\v \\r +42 \") : %d\n", ft_atoi(s2));
		printf("\n");
	}
	if (atoi(s3) != ft_atoi(s3))
	{
		printf("   atoi(\" \\t \\n \\v \\r -2147483648 \") : %d\n",    atoi(s3));
		printf("ft_atoi(\" \\t \\n \\v \\r -2147483648 \") : %d\n", ft_atoi(s3));
		printf("\n");
	}
	if (atoi(s4) != ft_atoi(s4))
	{
		printf("   atoi(\" \\t \\n \\v \\r -+42 \") : %d\n",    atoi(s4));
		printf("ft_atoi(\" \\t \\n \\v \\r -+42 \") : %d\n", ft_atoi(s4));
		printf("\n");
	}
	/*
		BZERO
	*/
	printf("------------------------------------------BZERO\n");
	char	*s5;
	char	*s6;
	size_t	n;

	s5 = (char *)malloc(42);
	s6 = (char *)malloc(42);
	n = 3;
	strcpy(s5, "bonjour");
	strcpy(s6, "bonjour");
	bzero(s5, n);
	ft_bzero(s6, n);
	if (s5 == s6 && s5 + n == s6 + n)
	{
		printf("s(   bzero) = \"%s\"\n", s5 + n);
		printf("s(ft_bzero) = \"%s\"\n", s6 + n);
	}
	/*
		ISALNUM
	*/
	printf("------------------------------------------ISALNUM\n");
	int		c;

	c = 0;
	while (c <= 127)
	{
		if (isalnum(c) != ft_isalnum(c))
		{
			printf("   isalnum(%c) : %d\n", c,    isalnum(c));
			printf("ft_isalnum(%c) : %d\n", c, ft_isalnum(c));
		}
		c++;
	}
	/*
		ISALPHA
	*/
	printf("------------------------------------------ISALPHA\n");
	c = 0;
	while (c <= 127)
	{
		if (isalpha(c) != ft_isalpha(c))
		{
			printf("   isalpha(%c) : %d\n", c,    isalpha(c));
			printf("ft_isalpha(%c) : %d\n", c, ft_isalpha(c));
		}
		c++;
	}
	/*
		ISASCII
	*/
	printf("------------------------------------------ISASCII\n");
	c = 0;
	while (c <= 127)
	{
		if (isascii(c) != ft_isascii(c))
		{
			printf("   isascii(%c) : %d\n", c,    isascii(c));
			printf("ft_isascii(%c) : %d\n", c, ft_isascii(c));
		}
		c++;
	}
	/*
		ISDIGIT
	*/
	printf("------------------------------------------ISDIGIT\n");
	c = 0;
	while (c <= 127)
	{
		if (isdigit(c) != ft_isdigit(c))
		{
			printf("   isdigit(%c) : %d\n", c,    isdigit(c));
			printf("ft_isdigit(%c) : %d\n", c, ft_isdigit(c));
		}
		c++;
	}
	/*
		ISPRINT
	*/
	printf("------------------------------------------ISPRINT\n");
	c = 0;
	while (c <= 127)
	{
		if (isprint(c) != ft_isprint(c))
		{
			printf("   isprint(%c) : %d\n", c,    isprint(c));
			printf("ft_isprint(%c) : %d\n", c, ft_isprint(c));
		}
		c++;
	}
	/*
		MEMCCPY
	*/
	printf("------------------------------------------MEMCCPY\n");
	char	*dest1;
	char	*dest2;
	char	*dest3;
	char	*dest4;
	char	*dest5;
	char	*dest6;
	char	*src1;

	src1  = malloc(42);
	dest1 = (char *)malloc(42);
	dest2 = (char *)malloc(42);
	dest3 = (char *)malloc(42);
	dest4 = (char *)malloc(42);
	dest5 = (char *)malloc(42);
	dest6 = (char *)malloc(42);
	strcpy(src1, "bonjour");
	n = 7;
	printf("dest1 \"%s\", dest2 \"%s\"\n", dest1, dest2);
	if (memccpy(dest1, src1, 110, n) != ft_memccpy(dest2, src1, 110, n))
	{
		printf("   memccpy(\"%s\", \"%s\", 110, %zu) : \"%s\"\n", dest1, src1, n, (char *)   memccpy(dest1, src1, 110, n));
		printf("dest1 = \"%s\"\n", dest1);
		printf("ft_memccpy(\"%s\", \"%s\", 110, %zu) : \"%s\"\n", dest2, src1, n, (char *)ft_memccpy(dest2, src1, 110, n));
		printf("dest2 = \"%s\"\n", dest2);
		printf("\n");
	}
	if (memccpy(dest3, src1,   0, n) != ft_memccpy(dest4, src1,   0, n))
	{
		strcpy(dest3, "");
		strcpy(dest4, "");
		printf("   memccpy(\"%s\", \"%s\",   0, %zu) : \"%s\"\n", dest3, src1, n, (char *)   memccpy(dest3, src1,   0, n));
		printf("dest3 = \"%s\"\n", dest3);
		printf("ft_memccpy(\"%s\", \"%s\",   0, %zu) : \"%s\"\n", dest4, src1, n, (char *)ft_memccpy(dest4, src1,   0, n));
		printf("dest4 = \"%s\"\n", dest4);
		printf("\n");
	}
	n = 4;
	if (memccpy(dest5, src1, 110, n) != ft_memccpy(dest6, src1, 110, n))
	{
		strcpy(dest5, "");
		strcpy(dest6, "");
		printf("   memccpy(\"%s\", \"%s\", 110, %zu) : \"%s\"\n", dest5, src1, n, (char *)   memccpy(dest5, src1, 110, n));
		printf("dest5 = \"%s\"\n", dest5);
		printf("ft_memccpy(\"%s\", \"%s\", 110, %zu) : \"%s\"\n", dest6, src1, n, (char *)ft_memccpy(dest6, src1, 110, n));
		printf("dest6 = \"%s\"\n", dest6);
		printf("\n");
	}
	/*
		MEMCHR
	*/
	printf("------------------------------------------MEMCHR\n");
	char	*s7;
	char	*s8;

	s7 = (char *)malloc(42);
	s8 = (char *)malloc(42);
	c = '\0';
	n = 12;
	strcpy(s7, "/|\x12\xff\x09\0\x42\042\0\42|\\");
	strcpy(s8, "/|\x12\xff\x09\0\x42\042\0\42|\\");
	if (memchr(s7, c, n) != ft_memchr(s8, c, n))
	{
		printf("   memchr : \"%s\"\n", (char *)   memchr(s7, c, n));
		printf("        s = \"%s\"\n", s7);
		printf("ft_memchr : \"%s\"\n", (char *)ft_memchr(s8, c, n));
		printf("        s = \"%s\"\n", s8);
	}
	/*
		MEMCMP
	*/
	printf("------------------------------------------MEMCMP\n");
	char	*s9;
	char	*s10;
	char	*s31;
	char	*s32;
	char	*s33;
	char	*s34;

	s9 = (char *)malloc(42);
	s10 = (char *)malloc(42);
	s31 = (char *)malloc(42);
	s32 = (char *)malloc(42);
	s33 = (char *)malloc(42);
	s34 = (char *)malloc(42);
	strcpy(s9, "\xff\xaa\xde\xffMACOSX\xff");
	strcpy(s10, "\xff\xaa\xde\x02");
	strcpy(s31, "\xff\xaa\xde\200");
	strcpy(s32, "\xff\xaa\xde\0");
	strcpy(s33, "\xff\0\0\xaa\0\xde\xffMACOSX\xff");
	strcpy(s34, "\xff\0\0\xaa\0\xde\x00MBS");
	n = 8;
	if (memcmp(s9, s10, n) != ft_memcmp(s9, s10, n))
	{
		printf("   memcmp : \"%d\"\n",    memcmp(s9, s10, n));
		printf("ft_memcmp : \"%d\"\n", ft_memcmp(s9, s10, n));
		printf("\n");
	}
	if (memcmp(s31, s32, n) != ft_memcmp(s31, s32, n))
	{
		printf("   memcmp : \"%d\"\n",    memcmp(s31, s32, n));
		printf("ft_memcmp : \"%d\"\n", ft_memcmp(s31, s32, n));
		printf("\n");
	}
	n = 9;
	if (memcmp(s33, s34, n) != ft_memcmp(s33, s34, n))
	{
		printf("   memcmp : \"%d\"\n",    memcmp(s33, s34, n));
		printf("ft_memcmp : \"%d\"\n", ft_memcmp(s33, s34, n));
		printf("\n");
	}
	/*
		MEMCPY
	*/
	printf("------------------------------------------MEMCPY\n");
	char	*dest7;
	char	*src2;
	size_t	n0;
	size_t	n1;
	size_t	n2;
	size_t	n3;
	size_t	n4;
	size_t	n5;
	size_t	n6;
	size_t	n7;
	size_t	n8;
	size_t	n9;

	dest7 = (char *)malloc(8);
	src2  = "bonjour";
	n0 = 0;
	n1 = 1;
	n2 = 2;
	n3 = 3;
	n4 = 4;
	n5 = 5;
	n6 = 6;
	n7 = 7;
	n8 = 8;
	n9 = 9;
	if (memcpy(dest7, src2, n0) != ft_memcpy(dest7, src2, n0))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n0, (char *)   memcpy(dest7, src2, n0));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n0, (char *)ft_memcpy(dest7, src2, n0));
		printf("\n");
	}
	if (memcpy(dest7, src2, n1) != ft_memcpy(dest7, src2, n1))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n1, (char *)   memcpy(dest7, src2, n1));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n1, (char *)ft_memcpy(dest7, src2, n1));
		printf("\n");
	}
	if (memcpy(dest7, src2, n2) != ft_memcpy(dest7, src2, n2))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n2, (char *)   memcpy(dest7, src2, n2));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n2, (char *)ft_memcpy(dest7, src2, n2));
		printf("\n");
	}
	if (memcpy(dest7, src2, n3) != ft_memcpy(dest7, src2, n3))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n3, (char *)   memcpy(dest7, src2, n3));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n3, (char *)ft_memcpy(dest7, src2, n3));
		printf("\n");
	}
	if (memcpy(dest7, src2, n4) != ft_memcpy(dest7, src2, n4))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n4, (char *)   memcpy(dest7, src2, n4));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n4, (char *)ft_memcpy(dest7, src2, n4));
		printf("\n");
	}
	if (memcpy(dest7, src2, n5) != ft_memcpy(dest7, src2, n5))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n5, (char *)   memcpy(dest7, src2, n5));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n5, (char *)ft_memcpy(dest7, src2, n5));
		printf("\n");
	}
	if (memcpy(dest7, src2, n6) != ft_memcpy(dest7, src2, n6))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n6, (char *)   memcpy(dest7, src2, n6));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n6, (char *)ft_memcpy(dest7, src2, n6));
		printf("\n");
	}
	if (memcpy(dest7, src2, n7) != ft_memcpy(dest7, src2, n7))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n7, (char *)   memcpy(dest7, src2, n7));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n7, (char *)ft_memcpy(dest7, src2, n7));
		printf("\n");
	}
	if (memcpy(dest7, src2, n8) != ft_memcpy(dest7, src2, n8))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n8, (char *)   memcpy(dest7, src2, n8));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n8, (char *)ft_memcpy(dest7, src2, n8));
		printf("\n");
	}
	if (memcpy(dest7, src2, n9) != ft_memcpy(dest7, src2, n9))
	{
		printf("   memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n9, (char *)   memcpy(dest7, src2, n9));
		printf("ft_memcpy(dest, \"%s\", %zu) : \"%s\"\n", src2, n9, (char *)ft_memcpy(dest7, src2, n9));
		printf("\n");
	}
	/*
		MEMMOVE
	*/
	printf("------------------------------------------MEMMOVE\n");
//	char	*dest8;
//	char	*dest9;
	char	*src3;
	char	*src30;
	size_t	len;

//	dest8 = (char *)malloc(42);
//	dest9 = (char *)malloc(42);
	src3  = malloc(42);
	src30 = malloc(42);
	strcpy(src3, "123456789");
	strcpy(src30, "123456789");
	len = 4;
	if (memmove(src3 + 2, src3 + 4, len) != ft_memmove(src30 + 2, src30 + 4, len))
	{
		printf("   memmove : \"%s\"\n", (char *)   memmove(src3 + 2, src3 + 4, len));
		printf("      dest = \"%s\"\n", src3);
		printf("ft_memmove : \"%s\"\n", (char *)ft_memmove(src30 + 2, src30 + 4, len));
		printf("      dest = \"%s\"\n", src30);
	}
	/*
		MEMSET
	*/
	printf("------------------------------------------MEMSET\n");
	char	*b1;
	char	*b2;

	b1 = (char *)malloc(42);
	b2 = (char *)malloc(42);
	c = 'b';
	len = 3;
	strcpy(b1, "bonjour");
	strcpy(b2, "bonjour");
	if (memset(b1, c, len) != ft_memset(b2, c, len))
	{
		printf("   memset(\"%s\", 110, 4) : \"%s\"\n", b1, (char *)   memset(b1, c, len));
		printf("ft_memset(\"%s\", 110, 4) : \"%s\"\n", b2, (char *)ft_memset(b2, c, len));
	}
	/*
		STRCAT
	*/
	printf("------------------------------------------STRCAT\n");
	char	*dst1;
	char	*dst2;
	char	*src4;

	dst1 = malloc(42);
	dst2 = malloc(42);
	src4 = (char *)malloc(42);
	strcpy(src4, "Bonjour");
	strcpy(dst1, "Salut");
	strcpy(dst2, "Salut");
	if (strcat(dst1, src4) != ft_strcat(dst2, src4))
	{
		printf("   strcat : \"%s\"\n",    strcat(dst1, src4));
		printf("      dst = \"%s\"\n", dst1);
		printf("ft_strcat : \"%s\"\n", ft_strcat(dst2, src4));
		printf("      dst = \"%s\"\n", dst2);
	}
	/*
		STRCHR
	*/
	printf("------------------------------------------STRCHR\n");
	char	*s11;
	char	c1;

	s11 = (char *)malloc(42);
	c1 = '\0';
	strcpy(s11, "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0");
	if (strchr(s11, c1) != ft_strchr(s11, c1))
	{
		printf("   strchr : %s\n",    strchr(s11, c1));
		printf("ft_strchr : %s\n", ft_strchr(s11, c1));
	}
	/*
		STRCMP
	*/
	printf("------------------------------------------STRCMP\n");
	char	*s12;
	char	*s13;
	char	*s14;
	char	*s15;

	s12 = "bonjour";
	s13 = "bonbon";
	s14 = "42";
	s15 = "bonbons";
	if (strcmp(s12, s13) != ft_strcmp(s12, s13))
	{
		printf("   strcmp de %s et %s = %d\n",   s12, s13,    strcmp(s12, s13));
		printf("ft_strcmp de %s et %s = %d\n\n", s12, s13, ft_strcmp(s12, s13));
	}
	if (strcmp(s14, s14) != ft_strcmp(s14, s14))
	{
		printf("   strcmp de %s et %s = %d\n",   s14, s14,    strcmp(s14, s14));
		printf("ft_strcmp de %s et %s = %d\n\n", s14, s14, ft_strcmp(s14, s14));
	}
	if (strcmp(s13, s15) != ft_strcmp(s13, s15))
	{
		printf("   strcmp de %s et %s = %d\n",   s13, s15,    strcmp(s13, s15));
		printf("ft_strcmp de %s et %s = %d\n",   s13, s15, ft_strcmp(s13, s15));
	}
	/*
		STRCPY
	*/
	printf("------------------------------------------STRCPY\n");
	char	*dst3;
	char	*dst4;
	char	*src5;

	dst3 = malloc(42);
	dst4 = malloc(42);
	src5 = (char *)malloc(42);
	strcpy(src5, "bonjour");
	if (strcpy(dst3, src5) != ft_strcpy(dst4, src5))
	{
		printf("   strcpy : \"%s\"\n",    strcpy(dst3, src5));
		printf("      dst = \"%s\"\n", dst3);
		printf("ft_strcpy : \"%s\"\n", ft_strcpy(dst4, src5));
		printf("      dst = \"%s\"\n", dst4);
	}
	/*
		STRDUP
	*/
	printf("------------------------------------------STRDUP\n");
	if (strdup("Bonjour") != ft_strdup("Bonjour"))
	{
		printf("   strdup : %s\n",    strdup("Bonjour"));
		printf("ft_strdup : %s\n", ft_strdup("Bonjour"));
	}
	/*
		STRLCAT
	*/
	printf("------------------------------------------STRLCAT\n");
	char	*dst5;
	char	*dst6;
	char	*dst42;
	char	*dst43;
	char	*src6;
	size_t	size;

	dst5 = malloc(42);
	dst6 = malloc(42);
	dst42 = malloc(42);
	dst43 = malloc(42);
	src6 = (char *)malloc(42);
	size = 3;
	strcpy(src6, "Bonjour");
	strcpy(dst5, "Salut");
	strcpy(dst6, "Salut");
	if (strlcat(dst5, src6, size) != ft_strlcat(dst6, src6, size))
	{
		printf("   strlcat : \"%zu\"\n",    strlcat(dst5, src6, size));
		printf("       dst = \"%s\"\n", dst5);
		printf("ft_strlcat : \"%zu\"\n", ft_strlcat(dst6, src6, size));
		printf("       dst = \"%s\"\n", dst6);
	}
	size = 4;
	if (ft_strlcat(dst42, "thx to ntoniolo for this test !", size) != ft_strlcat(dst43, "thx to ntoniolo for this test !", size))
	{
		printf("   strlcat : \"%zu\"\n",    strlcat(dst42, "thx to ntoniolo for this test !", size));
		printf("       dst = \"%s\"\n", dst42);
		printf("ft_strlcat : \"%zu\"\n", ft_strlcat(dst43, "thx to ntoniolo for this test !", size));
		printf("       dst = \"%s\"\n", dst43);
	}
	/*
		STRLEN
	*/
	printf("------------------------------------------STRLEN\n");
	if (strlen("bonjour\n") != ft_strlen("bonjour\n"))
	{
		printf("   strlen : %zu\n",    strlen("bonjour\n"));
		printf("ft_strlen : %zu\n", ft_strlen("bonjour\n"));
	}
	/*
		STRNCAT
	*/
	printf("------------------------------------------STRNCAT\n");
	char	*dst7;
	char	*dst8;
	char	*src7;

	dst7 = malloc(42);
	dst8 = malloc(42);
	src7 = (char *)malloc(42);
	n = 5;
	strcpy(src7, "Bonjour");
	strcpy(dst7, "Salut");
	strcpy(dst8, "Salut");
	if (strncat(dst7, src7, n) != ft_strncat(dst8, src7, n))
	{
		printf("   strncat : \"%s\"\n",    strncat(dst7, src7, n));
		printf("       dst = \"%s\"\n", dst7);
		printf("ft_strncat : \"%s\"\n", ft_strncat(dst8, src7, n));
		printf("       dst = \"%s\"\n", dst8);
	}
	/*
		STRNCMP
	*/
	printf("------------------------------------------STRNCMP\n");
	char	*s16;
	char	*s17;
	char	*s18;
	char	*s19;

	s16 = "bonjour";
	s17 = "bonbon";
	s18 = "42";
	s19 = "bonbons";
	n = 6;
	if (strncmp(s16, s17, n) != ft_strncmp(s16, s17, n))
	{
		printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s16, s17, n,    strncmp(s16, s17, n));
		printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s16, s17, n, ft_strncmp(s16, s17, n));
	}
	if (strncmp(s18, s18, n) != ft_strncmp(s18, s18, n))
	{
		printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s18, s18, n,    strncmp(s18, s18, n));
		printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s18, s18, n, ft_strncmp(s18, s18, n));
	}
	if (strncmp(s17, s19, n) != ft_strncmp(s17, s19, n))
	{
		printf("   strncmp(\"%s\", \"%s\", %zu) = %d\n",   s17, s19, n,    strncmp(s17, s19, n));
		printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n",   s17, s19, n, ft_strncmp(s17, s19, n));
	}
	/*
		STRNCPY
	*/
	printf("------------------------------------------STRNCPY\n");
	char	*dst9;
	char	*dst10;
	char	*src8;

	dst9 = malloc(30);
	dst10 = malloc(30);
	src8 = (char *)malloc(30);
	strcpy(src8, "stars");
	len = 29;
	if (strncpy(dst9, src8, len) != ft_strncpy(dst10, src8, len))
	{
		printf("   strncpy : \"%s\"\n",    strncpy(dst9, src8, len));
		printf("       dst = \"%s\"\n", dst9);
		printf("ft_strncpy : \"%s\"\n", ft_strncpy(dst10, src8, len));
		printf("       dst = \"%s\"\n", dst10);
	}
	/*
		STRNSTR
	*/
	printf("------------------------------------------STRNSTR\n");
	char	*s20;
	char	*s21;
	char	*s22;
	char	*s23;
	char	*s24;
	char	*s35;
	char	*s36;

	n = 4;
	s20 = (char *)malloc(42);
	s21 = (char *)malloc(42);
	s22 = (char *)malloc(42);
	s23 = (char *)malloc(0);
	s24 = (char *)malloc(42);
	s35 = (char *)malloc(42);
	s36 = (char *)malloc(42);
	strcpy(s20, "bonjour");
	strcpy(s21, "bon");
	strcpy(s22, "nj");
	strcpy(s24, "o");
	strcpy(s35, "oh no not the empty string !");
	strcpy(s36, "");
	if (strnstr(s20, s21, n) != ft_strnstr(s20, s21, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s21, n,    strnstr(s20, s21, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s21, n, ft_strnstr(s20, s21, n));
		printf("\n");
	}
	if (strnstr(s20, s22, n) != ft_strnstr(s20, s22, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s22, n,    strnstr(s20, s22, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s22, n, ft_strnstr(s20, s22, n));
		printf("\n");
	}
	if (strnstr(s20, s24, n) != ft_strnstr(s20, s24, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s24, n,    strnstr(s20, s24, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s20, s24, n, ft_strnstr(s20, s24, n));
		printf("\n");
	}
	if (strnstr(s21, s24, n) != ft_strnstr(s21, s24, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s21, s24, n,    strnstr(s21, s24, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s21, s24, n, ft_strnstr(s21, s24, n));
		printf("\n");
	}
	if (strnstr(s22, s23, n) != ft_strnstr(s22, s23, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s22, s23, n,    strnstr(s22, s23, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s22, s23, n, ft_strnstr(s22, s23, n));
		printf("\n");
	}
	if (strnstr(s24, s23, n) != ft_strnstr(s24, s23, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s24, s23, n,    strnstr(s24, s23, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s24, s23, n, ft_strnstr(s24, s23, n));
		printf("\n");
	}
	n = strlen(s35);
	if (strnstr(s35, s36, n) != ft_strnstr(s35, s36, n))
	{
		printf("   strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s35, s36, n,    strnstr(s35, s36, n));
		printf("ft_strnstr(\"%s\", \"%s\", %zu) : \"%s\"\n", s35, s36, n, ft_strnstr(s35, s36, n));
		printf("\n");
	}
	/*
		STRRCHR
	*/
	printf("------------------------------------------STRRCHR\n");
	char	*s25;

	s25 = (char *)malloc(42);
	c1 = 'm';
	strcpy(s25, "abcdefghijklmnopqrstuvwxyz mmm ...");
	if (strrchr(s25, c1) != ft_strrchr(s25, c1))
	{
		printf("   strrchr : %s\n",    strrchr(s25, c1));
		printf("ft_strrchr : %s\n", ft_strrchr(s25, c1));
		printf("\n");
	}
	/*
		STRSTR
	*/
	printf("------------------------------------------STRSTR\n");
	char	*s26;
	char	*s27;
	char	*s28;
	char	*s29;
	char	*s30;

	s26 = (char *)malloc(42);
	s27 = (char *)malloc(42);
	s28 = (char *)malloc(42);
	s29 = (char *)malloc(0);
	s30 = (char *)malloc(42);
	strcpy(s26, "bonjour");
	strcpy(s27, "bonbon");
	strcpy(s28, "bon");
	strcpy(s30, "nb");
	if (strstr(s26, s27) != ft_strstr(s26, s27))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s26, s27,    strstr(s26, s27));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s26, s27, ft_strstr(s26, s27));
		printf("\n");
	}
	if (strstr(s27, s26) != ft_strstr(s27, s26))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s26,    strstr(s27, s26));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s26, ft_strstr(s27, s26));
		printf("\n");
	}
	if (strstr(s27, s28) != ft_strstr(s27, s28))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s28,    strstr(s27, s28));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s28, ft_strstr(s27, s28));
		printf("\n");
	}
	if (strstr(s28, s27) != ft_strstr(s28, s27))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s28, s27,    strstr(s28, s27));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s28, s27, ft_strstr(s28, s27));
		printf("\n");
	}
	if (strstr(s27, s30) != ft_strstr(s27, s30))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s30,    strstr(s27, s30));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s27, s30, ft_strstr(s27, s30));
		printf("\n");
	}
	if (strstr(s26, s29) != ft_strstr(s26, s29))
	{
		printf("   strstr(\"%s\", \"%s\") : \"%s\"\n", s26, s29,    strstr(s26, s29));
		printf("ft_strstr(\"%s\", \"%s\") : \"%s\"\n", s26, s29, ft_strstr(s26, s29));
		printf("\n");
	}
	/*
		TOLOWER
	*/
	printf("------------------------------------------TOLOWER\n");
	c = 0;
	while (c <= 127)
	{
		if (tolower(c) != ft_tolower(c))
		{
			printf("   tolower(%c) : %d\n", c,    tolower(c));
			printf("ft_tolower(%c) : %d\n", c, ft_tolower(c));
		}
		c++;
	}
	/*
		TOUPPER
	*/
	printf("------------------------------------------TOUPPER\n");
	c = 0;
	while (c <= 127)
	{
		if (toupper(c) != ft_toupper(c))
		{
			printf("   toupper(%c) : %d\n", c,    toupper(c));
			printf("ft_toupper(%c) : %d\n", c, ft_toupper(c));
		}
		c++;
	}
	return (0);
}
