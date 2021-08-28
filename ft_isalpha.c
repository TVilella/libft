int ft_isalpha(int c)
{
    if (c < 'A') return (0);
    if (c > 'Z') 
        if (c < 'a') return (0);
    if (c > 'z') return (0);
    return (1);
}
