/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:34:33 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/17 21:21:41 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	printf(" _________________________________________________\n");
	printf("|                      TESTS                      |\n");
	printf("|_________________________________________________|\n\n\n");
	/*
	**	STRLCAT
	*/
	printf("--------------------------------------------STRLCAT\n");
	char	dst1[4] = "";
	char	dst2[4] = "";
	char	sd1[42] = "012345";
	char	sd2[42] = "012345";
	char	sd3[42] = "012345";
	char	sd4[42] = "012345";
	size_t	r1;
	size_t	r2;
	size_t	r3;
	size_t	r4;
	size_t	r5;
	size_t	r6;

	r1 =    strlcat(dst1, "thx to ntoniolo for this test !", 4);
	r2 = ft_strlcat(dst2, "thx to ntoniolo for this test !", 4);
	r3 =    strlcat(sd1 + 2, sd1 + 4, 4);
	r4 = ft_strlcat(sd2 + 2, sd2 + 4, 4);
	r5 =    strlcat(sd3 + 4, sd3 + 2, 4);
	r6 = ft_strlcat(sd4 + 4, sd4 + 2, 4);
	printf("   strlcat(\"%s\", \"%s\", %d) = %zu\n", "", "thx to ntoniolo for this test !", 4, r1);
	printf("ft_strlcat(\"%s\", \"%s\", %d) = %zu\n", "", "thx to ntoniolo for this test !", 4, r2);
	printf("   strlcat(\"%s\", \"%s\", %d) = %zu\n", "2345", "45", 4, r3);
	printf("ft_strlcat(\"%s\", \"%s\", %d) = %zu\n", "2345", "45", 4, r4);
	printf("   strlcat(\"%s\", \"%s\", %d) = %zu\n", "45", "2345", 4, r5);
	printf("ft_strlcat(\"%s\", \"%s\", %d) = %zu\n", "45", "2345", 4, r6);
	/*
	**	STRNSTR
	*/
	printf("--------------------------------------------STRNSTR\n");

/*
	void			test_ft_strnstr_zero_len2(void *ptr) {
	typeof(strnstr)	*ft_strnstr = ptr;
	SET_EXPLANATION("your strnstr does not work with empty strings 2");

	SANDBOX_RAISE(
			char	*s1 = "oh no not the empty string !";
			char	*s2 = "";
			size_t	max = strlen(s1);

			char	*i1 = strnstr(s1, s2, max);
			char	*i2 = ft_strnstr(s1, s2, max);
			if (i1 == i2)
				exit(TEST_SUCCESS);
			SET_DIFF(i1, i2);
			exit(TEST_FAILED);
			);
	}
*/
	char	*s1 = "oh no not the empty string !";
	char	*s2 = "";
	size_t	max = strlen(s1);
	char	*i1 = strnstr(s1, s2, max);
	char	*i2 = ft_strnstr(s1, s2, max);

	if (i1 == i2)
		printf(":)\n");
	else
		printf(":(\n");
	printf("   strnstr(\"oh no not the empty string !\", \"\", %zu) = \"%s\"\n", max, i1);
	printf("ft_strnstr(\"oh no not the empty string !\", \"\", %zu) = \"%s\"\n", max, i2);
	printf("s1(\"oh no not the empty string !\") = \"%s\"\n", s1);
	printf("s2(\"\") = \"%s\"\n", s2);

	/*
	**	STRCMP
	*/
	printf("---------------------------------------------STRCMP\n");

/*
**	void			test_ft_strcmp_unsigned(void *ptr) {
**	typeof(strcmp)	*ft_strcmp = ptr;
**	SET_EXPLANATION("your strcmp does not cast in unsigned the diff");
**
**	SANDBOX_RAISE(
**			char	*s1 = "\0";
**			char	*s2 = "\200";
**
**			int		i1 = REG(strcmp(s1, s2));
**			int		i2 = REG(ft_strcmp(s1, s2));
**			if (i1 == i2)
**				exit(TEST_SUCCESS);
**			SET_DIFF_INT(i1, i2);
**			exit(TEST_FAILED);
**			);
**	}
*/

/*
**	void			test_ft_strcmp_ascii(void *ptr) {
**	typeof(strcmp)	*ft_strcmp = ptr;
**	SET_EXPLANATION("your strcmp does not work with non ascii chars");
**
**	SANDBOX_RAISE(
**			char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
**			char	*s2 = "\x12\x02";
**
**			int		i1 = REG(strcmp(s1, s2));
**			int		i2 = REG(ft_strcmp(s1, s2));
**			if (i1 == i2)
**				exit(TEST_SUCCESS);
**			SET_DIFF_INT(i1, i2);
**			exit(TEST_FAILED);
**			);
**	}
*/

	/*
	**	STRNCMP
	*/
	printf("--------------------------------------------STRNCMP\n");

/*
**	void			test_ft_strncmp_cast(void *ptr) {
**	typeof(strncmp)	*ft_strncmp = ptr;
**	SET_EXPLANATION("your strncmp does not cast in unsigned char the diff");
**
**	SANDBOX_RAISE(
**			char	*s1 = "\200";
**			char	*s2 = "\0";
**
**			int		i1 = REG(strncmp(s1, s2, 1));
**			int		i2 = REG(ft_strncmp(s1, s2, 1));
**			if (i1 == i2)
**				exit(TEST_SUCCESS);
**			SET_DIFF_INT(i1, i2);
**			exit(TEST_FAILED);
**			);
**	}
*/

/*
**	void			test_ft_strncmp_ascii(void *ptr) {
**	typeof(strncmp)	*ft_strncmp = ptr;
**	SET_EXPLANATION("your strncmp does not work with non ascii chars");
**
**	SANDBOX_RAISE(
**			char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
**			char	*s2 = "\x12\x02";
**			size_t	size = 6;
**
**			int		i1 = REG(strncmp(s1, s2, size));
**			int		i2 = REG(ft_strncmp(s1, s2, size));
**			if (i1 == i2)
**				exit(TEST_SUCCESS);
**			SET_DIFF_INT(i1, i2);
**			exit(TEST_FAILED);
**			);
**	}
*/

	/*
	**	ATOI
	*/
	printf("-----------------------------------------------ATOI\n");

/*
	void			test_ft_atoi_blank1(void *ptr) {
	typeof(atoi)	*ft_atoi = ptr;
	SET_EXPLANATION("your atoi is not working with blanks 1");

	SANDBOX_RAISE(
			char	*n = "\t\v\f\r\n \f-06050";

			int		i1 = atoi(n);
			int		i2 = ft_atoi(n);
			if (i1 == i2)
				exit(TEST_SUCCESS);
			SET_DIFF_INT(i1, i2);
			exit(TEST_FAILED);
			);
	}
*/
	char	*n1 = "\t\v\f\r\n \f-06050";
	int		i3 = atoi(n1);
	int		i4 = ft_atoi(n1);

	if (i3 == i4)
		printf(":)\natoi(\"-06050\") = ft_atoi(\"-06050\") = %d\n\n", ft_atoi(n1));
	else
		printf(":(\n   atoi(\"-06050\") = %d\nft_atoi(\"-06050\") = %d\n\n", atoi(n1), ft_atoi(n1));

/*
	void			test_ft_atoi_over_max_long(void *ptr) {
	typeof(atoi)	*ft_atoi = ptr;
	SET_EXPLANATION("your atoi does not work with over long max value");

	SANDBOX_RAISE(
			char	n[40] = "99999999999999999999999999";

			int		i1 = atoi(n);
			int		i2 = ft_atoi(n);
			if (i1 == i2)
				exit(TEST_SUCCESS);
			SET_DIFF_INT(i1, i2);
			exit(TEST_KO);
			);
	}
*/
	char	n2[40] = "99999999999999999999999999";
	int		i5 = atoi(n2);
	int		i6 = ft_atoi(n2);
	if (i5 == i6)
		printf(":)\natoi(\"99999999999999999999999999\") = ft_atoi(\"99999999999999999999999999\") = %d\n\n", ft_atoi(n2));
	else
		printf(":(\n   atoi(\"99999999999999999999999999\") = %d\nft_atoi(\"99999999999999999999999999\") = %d\n\n", atoi(n2), ft_atoi(n2));

/*
	void			test_ft_atoi_over_min_long(void *ptr) {
	typeof(atoi)	*ft_atoi = ptr;
	SET_EXPLANATION("your atoi does not work with over long min value");

	SANDBOX_RAISE(
			char	n[40] = "-99999999999999999999999999";

			int		i1 = atoi(n);
			int		i2 = ft_atoi(n);
			if (i1 == i2)
				exit(TEST_SUCCESS);
			SET_DIFF_INT(i1, i2);
			exit(TEST_KO);
			);
	}
*/
	char	n3[40] = "-99999999999999999999999999";
	int		i7 = atoi(n3);
	int		i8 = ft_atoi(n3);
	if (i7 == i8)
		printf(":)\natoi(\"-99999999999999999999999999\") = ft_atoi(\"-99999999999999999999999999\") = %d\n", ft_atoi(n3));
	else
		printf(":(\n   atoi(\"-99999999999999999999999999\") = %d\nft_atoi(\"-99999999999999999999999999\") = %d\n", atoi(n3), ft_atoi(n3));

/*
	void			test_ft_atoi_string(void *ptr) {
	typeof(atoi)	*ft_atoi = ptr;
	SET_EXPLANATION("your atoi is not working with blanks 3");

	SANDBOX_RAISE(
			char	*n = "-123THERE IS A NYANCAT UNDER YOUR BED";

			int		i1 = atoi(n);
			int		i2 = ft_atoi(n);
			if (i1 == i2)
				exit(TEST_SUCCESS);
			SET_DIFF_INT(i1, i2);
			exit(TEST_FAILED);
			);
	}
*/
	char	n4[40] = "-123THERE IS A NYANCAT UNDER YOUR BED";
	int		i9 = atoi(n4);
	int		i10 = ft_atoi(n4);
	if (i9 == i10)
		printf(":)\natoi(\"-123THERE IS A NYANCAT UNDER YOUR BED\") = ft_atoi(\"-123THERE IS A NYANCAT UNDER YOUR BED\") = %d\n", ft_atoi(n4));
	else
		printf(":(\n   atoi(\"-123THERE IS A NYANCAT UNDER YOUR BED\") = %d\nft_atoi(\"-123THERE IS A NYANCAT UNDER YOUR BED\") = %d\n", atoi(n4), ft_atoi(n4));

/*
	TESTS
*/
	char	n5[40] = "9223372036854775806";
	int		i11 = atoi(n5);
	int		i12 = ft_atoi(n5);
	if (i11 == i12)
		printf(":)\natoi(\"9223372036854775806\") = ft_atoi(\"9223372036854775806\") = %d\n", ft_atoi(n5));
	else
		printf(":(\n   atoi(\"9223372036854775806\") = %d\nft_atoi(\"9223372036854775806\") = %d\n", atoi(n5), ft_atoi(n5));

	char	n6[40] = "-9223372036854775807";
	int		i13 = atoi(n6);
	int		i14 = ft_atoi(n6);
	if (i13 == i14)
		printf(":)\natoi(\"-9223372036854775807\") = ft_atoi(\"-9223372036854775807\") = %d\n", ft_atoi(n6));
	else
		printf(":(\n   atoi(\"-9223372036854775807\") = %d\nft_atoi(\"-9223372036854775807\") = %d\n", atoi(n6), ft_atoi(n6));

	/*
	**	MEMALLOC
	*/
	printf("-------------------------------------------MEMALLOC\n");

/*
	void			test_ft_memalloc_zero(void *ptr) {
	void *	(*ft_memalloc)(size_t) = ptr;
	SET_EXPLANATION("your memalloc does not set allocated mem to 0 (1)");

	SANDBOX_RAISE(
			size_t	size = 514;
			char	*cmp = malloc(size);
			int		diff;

			MALLOC_MEMSET;
			char	*ret = ft_memalloc(size);
			MALLOC_RESET;

			bzero(cmp, size);
			if ((diff = memcmp(cmp, ret, size))) {
				SET_DIFF_INT(0, diff);
				exit(TEST_FAILED);
			}
			free(ret);
			exit(TEST_SUCCESS);
			);
	}
*/

	/*
	**	STRNEW
	*/
	printf("---------------------------------------------STRNEW\n");

/*
	void			test_ft_strnew_free(void *ptr) {
	void *	(*ft_strnew)(size_t) = ptr;
	SET_EXPLANATION("your strnew don't allocate memory");

	SANDBOX_RAISE(
			free(ft_strnew(42));
			);
	}
*/

/*
	void			test_ft_strnew_zero(void *ptr) {
	void *	(*ft_strnew)(size_t) = ptr;
	SET_EXPLANATION("your strnew does not set allocated mem to 0");

	SANDBOX_RAISE(
			size_t	size = 514;
			MALLOC_MEMSET;
			char	*ret = ft_strnew(size);
			MALLOC_RESET;

			for (size_t i = 0;i < size + 1;i++)
				if (ret[i] != 0) {
					SET_DIFF_INT(0, ret[i]);
					exit(TEST_FAILED);
				}
			free(ret);
			exit(TEST_SUCCESS);
			);
	}
*/

/*
	void			test_ft_strnew_size(void *ptr) {
	void *	(*ft_strnew)(size_t) = ptr;
	SET_EXPLANATION("your strnew did not allocate the good size so the \\0 test can be false");

	SANDBOX_RAISE(
			size_t	size = 514;
			int		ret_size;

			MALLOC_SIZE;
			char	*ret = ft_strnew(size);
			MALLOC_RESET;

			ret_size = get_last_malloc_size();
			if (ret_size == (int)size + 1)
				exit(TEST_SUCCESS);
			free(ret);
			SET_DIFF_INT((int)size + 1, ret_size);
			exit(TEST_FAILED);
			);
	}
*/

	/*
	**	STRCLR
	*/
	printf("---------------------------------------------STRCLR\n");

/*
	void			test_ft_strclr_basic(void *ptr) {
	void	(*ft_strclr)(char *) = ptr;
	SET_EXPLANATION("your strclr does not set to 0 the string");

	SANDBOX_RAISE(
			char	b[] = "strclr test !\r\n";
			char	n[0xF0];
			size_t	size = strlen(b);

			memset(n, 0, size);
			ft_strclr(b);
			if (!memcmp(b, n, size))
				exit(TEST_SUCCESS);
			SET_DIFF_INT(0, memcmp(b, n, size));
			exit(TEST_FAILED);
			);

	}
*/

	/*
	**	STRSUB
	*/
	printf("---------------------------------------------STRSUB\n");



	/*
	**	STRTRIM
	*/
	printf("--------------------------------------------STRTRIM\n");



	/*
	**	STRSPLIT
	*/
	printf("-------------------------------------------STRSPLIT\n");



	/*
	**	ITOA
	*/
	printf("-----------------------------------------------ITOA\n");

/*
	void			test_ft_itoa_basic(void *ptr) {
	char	*(*ft_itoa)(int) = ptr;
	SET_EXPLANATION("your itoa does not work with basic input");

	SANDBOX_RAISE(
			char	*i1 = ft_itoa(-623);
			char	*i2 = ft_itoa(156);
			char	*i3 = ft_itoa(-0);

			if (strcmp(i1, "-623")) {
				SET_DIFF("-623", i1);
				exit(TEST_FAILED);
			}
			if (strcmp(i2, "156")) {
				SET_DIFF("156", i2);
				exit(TEST_FAILED);
			}
			if (strcmp("0", i3)) {
				SET_DIFF("0", i3);
				exit(TEST_FAILED);
			}
			exit(TEST_SUCCESS);
			);
	}
*/

/*
	void			test_ft_itoa_malloc_null(void *ptr) {
	char	*(*ft_itoa)(int) = ptr;
	SET_EXPLANATION("you did not protect your malloc 2");

	SANDBOX_RAISE(
			MALLOC_NULL;
			char	*i1 = ft_itoa(-1234);
			MALLOC_RESET;

			if (!i1)
				exit(TEST_SUCCESS);
			SET_DIFF(NULL, i1);
			exit(TEST_FAILED);
			);
	}
*/

/*
	void			test_ft_itoa_size2(void *ptr) {
	char	*(*ft_itoa)(int) = ptr;
	SET_EXPLANATION("your itoa does not allocate the good size so the \\0 test may be false 2");

	SANDBOX_RAISE(
			int		size;
			char	*i1;

			MALLOC_SIZE;
			i1 = ft_itoa(0);
			MALLOC_RESET;
			size = get_last_malloc_size();

			if (size == 2)
				exit(TEST_SUCCESS);
			SET_DIFF_INT(2, size);
			exit(TEST_KO);
			);
	}
*/

	/*
	**	TESTS
	*/
	printf("\n\n          END          END          END\n\n\n");

	return (0);
}
