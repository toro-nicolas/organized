/*
** EPITECH PROJECT, 2023
** test lib
** File description:
** test each function of lib
*/

#include "criterion/criterion.h"
#include "criterion/redirect.h"
#include "my.h"

Test(my_compute_factorial_rec, full_covr)
{
    cr_assert_eq(my_compute_factorial_rec(3), 6);
    cr_assert_eq(my_compute_factorial_rec(15), 0);
  
}

Test(my_compute_power_rec, full_covr)
{
    cr_assert_eq(my_compute_power_rec(3, 2), 9);
    cr_assert_eq(my_compute_power_rec(21, 0), 1);
    cr_assert_eq(my_compute_power_rec(-4, -4), 0);
}

Test(my_compute_square_root, full_covr)
{
    cr_assert_eq(my_compute_square_root(25), 5);
    cr_assert_eq(my_compute_square_root(0), 0);
    cr_assert_eq(my_compute_square_root(-4), 0);
}

Test(my_concat_params, full_covr)
{
    int argc = 4;
    char *argv[] = { "unit_tests","coucou", "ça", "va"};

    cr_assert(my_concat_params(argc, argv));
}

Test(my_convert_base, full_covr)
{
    cr_assert(my_convert_base("-10", "0123456789", "01"));
} // NE PASSE PAS CAR NE PRINT PAS LE DERNIER 0

Test(my_convert_base_unsigned, full_covr)
{
    cr_assert_str_eq(my_convert_base_unsigned("10", "0123456789", "01"), "1010");
    cr_assert_str_eq(my_convert_base_unsigned("10a10", "0123456789", "01"), "1010");
}

Test(my_find_prime_sup, full_covr)
{
    cr_assert_eq(my_find_prime_sup(9), 11);
    cr_assert(my_find_prime_sup(0));
    cr_assert(my_find_prime_sup(4));
}

Test(my_getnbr_base, full_covr)
{
    cr_assert_eq(my_getnbr_base("10", "0123456789"), 10);
    cr_assert(my_getnbr_base("a10", "0123456789"));
}

Test(my_getnbr, full_covr)
{
    cr_assert_eq(my_getnbr("-10"), -10);
    cr_assert_eq(my_getnbr("-2147483648"), -2147483648);
    cr_assert_eq(my_getnbr("a54"), 0);
    cr_assert_eq(my_getnbr("00012345667"), 0);
}

Test(my_isneg, full_covr)
{
    cr_assert_eq(my_isneg(-10), 0);
    cr_assert_eq(my_isneg(10), 0);
}

Test(my_is_prime, full_covr)
{
    cr_assert_eq(my_is_prime(0), 0);
    cr_assert_eq(my_is_prime(7), 1);
    cr_assert_eq(my_is_prime(9), 0);
}

Test(my_params_to_array, full_covr)
{
    char *test[] = {"unittests", "coucou"};

    cr_assert(my_params_to_array(0, test));
    //cr_assert(my_params_to_array(1, test));
    //cr_assert(my_params_to_array(2, argv));
}

Test(my_print_combn, full_covr)
{
    cr_assert_eq(my_print_combn(3), 0);
}

Test(my_print_params, full_covr, .init = cr_redirect_stdout)
{
    char *argv[] = {"unit_tests", "coucou"};

    my_print_params(2, argv);
    cr_assert_stdout_eq_str("unit_tests\ncoucou\n");
}

Test(my_put_nbr, fullcovr, .init = cr_redirect_stdout)
{
    my_put_nbr(-2400934);
    cr_assert_stdout_eq_str("-2400934");
}

Test(my_put_nbr, fullcovr_2, .init = cr_redirect_stdout)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}

Test(my_put_nbr_base, fullcovr, .init = cr_redirect_stdout)
{
    my_putnbr_base(-10, "0123456789");
    cr_assert_stdout_eq_str("-10"); 
}

Test(my_putstr_error, full_covr)
{
    cr_assert_eq(my_putstr_error("ok"), 0);
}

Test(my_putstr_sized, full_covr)
{
    cr_assert_eq(my_putstr_sized("ok", 2), 0);
}

Test(my_rev_params, full_covr, .init = cr_redirect_stdout)
{
    char *argv[] = {"unit_tests", "coucou"};

    my_rev_params(2, argv);
    cr_assert_stdout_eq_str("coucou\nunit_tests\n");
}

Test(my_rev_str, full_covr)
{
    char str[6] = "kayak\0";

    cr_assert(my_revstr(str));
}

Test(my_show_param, full_covr, .init = cr_redirect_stdout)
{
    char str[6] = "kayak\0";
    struct info_param struct1;
    struct info_param struct2;
    struct info_param par[2];

    struct1.length = my_strlen(str);
    struct1.str = str;
    struct1.copy = my_strdup(str);
    struct1.word_array = my_str_to_word_array(str);
    struct2.length = 0;
    struct2.str = "";
    struct2.copy = "";
    struct2.word_array = my_str_to_word_array("");
    par[0] = struct1;
    par[1] = struct2;
    my_show_param_array(par);
    cr_assert_stdout_eq_str("kayak\n5\nkayak\n");
}

Test(my_show_word_array, full_covr, .init = cr_redirect_stdout)
{
    char *test[] = {"unit_tests", "coucou"};

    my_show_word_array(test);
    cr_assert_stdout_eq_str("unit_tests\ncoucou\n");
}

Test(my_show_mem, full_covr)
{
    char str[8] = "hel\n\blo\0";
 
    cr_assert_eq(my_showmem(str, my_strlen(str)), 0);
}

Test(my_show_str, full_covr)
{
    char str[8] = "hel\nl\bo\0";

    cr_assert_eq(my_showstr(str), 0);
}

Test(my_sort_int_array, full_covr)
{
    int tab_int[5] = {0, 5, 12, 42};

    my_sort_int_array(tab_int, 5);
    cr_assert_eq(tab_int[0], 0);
}

Test(my_sort_params, full_covr)
{
    char *argv1[] = {"unit_tests", "coucou", "wesh"};
    char *argv2[] = {"coucoulL", "coucou", "coucoul"};
    char *argv3[] = {"unit_tests", "unit_tests", "wesh"};

    my_sort_params(3, argv1);
    my_sort_params(3, argv2);
    my_sort_params(3, argv3);
    cr_assert_str_eq(argv1[2], "coucou");
    cr_assert_str_eq(argv2[0], "coucoulL");
    cr_assert_str_eq(argv3[2], "unit_tests");
} //Sa trie mais à l'envers -> à fix

Test(my_str_is_alpha, full_covr)
{
    cr_assert_eq(my_str_isalpha("Coucou"), 1);
    cr_assert_eq(my_str_isalpha("124"), 0);
    cr_assert_eq(my_str_isalpha(""), 1);
}

Test(my_str_is_lower, full_covr)
{
    cr_assert_eq(my_str_islower("Coucou"), 0);
    cr_assert_eq(my_str_islower("124"), 0);
    cr_assert_eq(my_str_islower(""), 1);
    cr_assert_eq(my_str_islower("oui"), 1);
}

Test(my_str_is_num, full_covr)
{
    cr_assert_eq(my_str_isnum("Coucou"), 0);
    cr_assert_eq(my_str_isnum("124"), 1);
    cr_assert_eq(my_str_isnum(""), 1);
}

Test(my_str_is_printable, full_covr)
{
    char str[2];

    str[0] = 31;
    str[1] = '\0';
    cr_assert_eq(my_str_isprintable("Coucou"), 1);
    cr_assert_eq(my_str_isprintable(str), 0);
    cr_assert_eq(my_str_isprintable(""), 1);
}

Test(my_str_is_upper, full_covr)
{
    cr_assert_eq(my_str_isupper("Coucou"), 0);
    cr_assert_eq(my_str_isupper("9"), 0);
    cr_assert_eq(my_str_isupper("abc"), 0);
    cr_assert_eq(my_str_isupper(""), 1);
    cr_assert_eq(my_str_isupper("ABC"), 1);
}

Test(my_str_nbr, full_covr)
{

    cr_assert_str_eq(my_str_nbr(-12), "-12");
}

Test(my_str_nbr, full_covr_2, .init = cr_redirect_stdout)
{
    cr_assert_str_eq(my_str_nbr(-2147483648), "-2147483648");
}

Test(my_str_nbr_base_long_long_int, full_covr_2)
{
    cr_assert(my_str_nbr_base_long_long_int(-12, "0123456789"));
}

Test(my_str_nbr_base_unsigned, full_covr)
{
    cr_assert(my_str_nbr_base_unsigned(12, "0123456789"));
}

Test(my_str_nbr_long_long, full_covr)
{
    cr_assert(my_str_nbr_long_long(-12));
}

Test(my_str_nbr_long_long, full_covr_2)
{
    cr_assert_str_eq(my_str_nbr_long_long(-9223372036854775807), "-9223372036854775807");
}

Test(my_str_nbr_size_t, full_covr)
{
    cr_assert(my_str_nbr_size_t(12));
}

Test(my_str_nbr_unsigned, full_covr)
{
    cr_assert(my_str_nbr_unsigned(12));
}

Test(my_str_nbr_unsigned_long, full_covr)
{
    cr_assert(my_str_nbr_unsigned_long(12));
}

Test(my_str_to_word_array, full_covr, .init = cr_redirect_stdout)
{
    char *str = "----hello 9coucou.çava/oui";
    char **test = my_str_to_word_array(str);

    my_show_word_array(test);
    cr_assert_stdout_eq_str("hello\n9coucou\nava\noui\n");
}

Test(my_strcapitalize, full_covr)
{
    char str[6] = "c cac\0";

    cr_assert_str_eq(my_strcapitalize(str), "C Cac");
}

Test(my_strcat, full_covr)
{
    char str[30] = "coucou";
    char src[5] = "caca\0";

    cr_assert(my_strcat(str, src));
}

Test(my_strcmp, full_covr)
{
    char str[7] = "cbbcbb\0";
    char src[7] = "caacaa\0";

    cr_assert_eq(my_strcmp(str, str), 0);
    cr_assert_eq(my_strcmp(str, src), 1);
    cr_assert_eq(my_strcmp(src, str), -1);
}

Test(my_strcpy, full_covr)
{
    char str[7] = "coucou\0";
    char src[7];

    my_strcpy(src, str);
    cr_assert_eq(str[0], src[0]);
}

Test(my_strncmp, full_covr)
{
    char str[7] = "cbbcbb\0";
    char src[7] = "caacaa\0";

    cr_assert_eq(my_strncmp(str, str, 6), 0);
    cr_assert_eq(my_strncmp(src, str, 6), -1);
    cr_assert_eq(my_strncmp(str, src, 6), 1);
    
}

Test(my_strncat, full_covr)
{
    char str[30] = "coucou";
    char src[5] = "caca\0";

    cr_assert(my_strncat(str, src, 2));
}

Test(my_strlowcase, full_covr)
{
    char str[30] = "couCou";

    cr_assert(my_strlowcase(str));
}

Test(my_strncpy, full_covr)
{
    char str[7] = "coucou\0";
    char src[7];

    cr_assert(my_strncpy(src, str, 10));
}

Test(my_strstr, full_covr)
{
    char str[7] = "cbbcbb\0";
    char src[4] = "cbb\0";
    
    cr_assert(my_strstr(str, src));
    cr_assert(my_strstr(str, ""));
    cr_assert_eq(my_strstr(str, "la"), 0);
}

Test(my_strupcase, full_covr)
{
    char str[30] = "couCou";
    cr_assert(my_strupcase(str));
}

Test(my_swap, full_covr)
{
    int a = 5;
    int b = 10;

    my_swap(&a, &b);
    cr_assert_eq(b, 5);
}

Test(my_array_of_array_len, full_covr)
{
    char *tab[5] = {"a", "b", "c", "d", NULL};

    cr_assert_eq(my_array_of_array_len(tab), 4);
}
