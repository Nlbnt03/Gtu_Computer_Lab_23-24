#include <stdio.h>
int ft_str_a(char *str)
{
    int i = 0;
    int a = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            a++;
        }
        i++;
    }
    return (a);
}

int counta(char *str, int index) {
    if (str[index] == '\0') 
    {
        return 0;
    }
    if (str[index] == 'g') 
    {
        return (1 + counta(str, index + 1));
    } 
    else 
    {
        return counta(str, index + 1);
    }
}

int main(int argc,char **argv)
{ 
    int result ;
    //result = ft_str_a(argv[1]);
    result = counta(argv[1],0);
    printf("Output : %d\n",result);
}
