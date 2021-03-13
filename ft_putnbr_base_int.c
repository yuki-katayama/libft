static int putnbr_base_int(int nb, int base)
{
    int len;
    len = 0;
    if (nb > base - 1)
        len = putnbr_base_int(nb / base, base);
    write(1, &"0123456789abcdef"[nb % base], 1);
    return len + 1;
}

int    ft_putnbr_base_int(int nbr, char *base, int size)
{
    int len;
    
    len = 0;
    if(nbr < 0)
    {
        nbr *= -1;
        write(1, &"-", 1);len += 1;
    }
    len += putnbr_base_int(nbr, size);
    return len;
}
