#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int x;
    int y;
	int num1;
	int num2;


    x = '0' - 1;
    num1 = '0' - 1;
   	while(++x <= '9' && ++num1 <= '9')
    {
        y = x;
     	num2 = num1;
	 	while(y <= '9' && num2 <= '9')
        {
            ft_putchar(x);
            ft_putchar(y);
			ft_putchar(' ');
			ft_putchar(num1);
			ft_putchar(num2);
            if ((x != '9' || y != '9') && (num1 != '9' || num2 != '9'))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            y++;
			num2++;
        }
    }
}

int main()
{
    ft_print_comb2();
    ft_putchar('\n');
}
