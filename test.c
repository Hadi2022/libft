#include <libft.h>
#include <ctype.h>

int	main(void)
{
	int	a;
	int	b;
    char    *aa;
    char    *bb;

	a = 'a';
	b = '0';
	printf("isalpha(%c) = %d\n", a, isalpha(a));
	printf("ft_isalpha(%c) = %d\n", a, ft_isalpha(a));
	printf("isalpha(%c) = %d\n", b, isalpha(b));
	printf("ft_isalpha(%c) = %d\n", b, ft_isalpha(b));

    write(1, "\n", 1);
    printf("isdigit(%c) = %d\n", a, isdigit(a));
	printf("ft_isdigit(%c) = %d\n", a, ft_isdigit(a));
	printf("isdigit(%c) = %d\n", b, isdigit(b));
	printf("ft_isdigit(%c) = %d\n", b, ft_isdigit(b));

    write(1, "\n", 1);
    printf("isalnum(%c) = %d\n", a, isalnum(a));
	printf("ft_isalnum(%c) = %d\n", a, ft_isalnum(a));
	printf("isalnum(%c) = %d\n", b, isalnum(b));
	printf("ft_isalnum(%c) = %d\n", b, ft_isalnum(b));

    write(1, "\n", 1);
    printf("isascii(%c) = %d\n", a, isascii(a));
	printf("ft_isascii(%c) = %d\n", a, ft_isascii(a));
	printf("isascii(%c) = %d\n", b, isascii(b));
	printf("ft_isascii(%c) = %d\n", b, ft_isascii(b));

    aa = "123";
    bb = "55";
    write(1, "\n", 1);
    /*
    printf("strlen(%c) = %zu\n", aa, strlen(aa));
	printf("ft_strlen(%c) = %zu\n", aa, ft_strlen(aa));
	printf("strlen(%c) = %zu\n", bb, strlen(bb));
	printf("ft_strlen(%c) = %zu\n", bb, ft_strlen(bb));

    write(1, "\n", 1);
    
    printf("isascii(%c) = %zu\n", aa, atoi(aa));
	printf("ft_isascii(%c) = %zu\n", aa, ft_atoi(aa));
	printf("isascii(%c) = %zu\n", bb, atoi(bb));
	printf("ft_isascii(%c) = %zu\n", bb, ft_atoi(bb));*/
    write(1, "\n", 1);


    char	s1[] = "Ar@#4234";
	char	s2[] = "A";
	size_t n = 2;
	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %i\n", strncmp(s1, s2, n));


    write(1, "\n", 1);
    char	s11[] = "asd";
	char	*ft_ptr;
	ft_ptr = ft_substr(s11, 1, 5000000000);
	printf("El puntero contiene: %s\n", ft_ptr);
	printf("La longitud de ft_ptr es: %zu\n", ft_strlen(ft_ptr));
	

    write(1, "\n", 1);
    char	s12[] = "abcdef";
	ft_ptr = ft_substr(s12, 2, 5000000000);
	printf("El puntero contiene: %s\n", ft_ptr);
	printf("La longitud de ft_ptr es: %zu\n", ft_strlen(ft_ptr));
	
    write(1, "\n", 1);


    // Imprimir numero
    ft_putnbr_fd(5, 1);
    write(1, "\n", 1);


    //Imprimir caracter
    ft_putchar_fd('a', 1);
    write(1, "\n", 1);


    // Imprimir string
    ft_putstr_fd("Hola", 1);
    write(1, "\n", 1);

}