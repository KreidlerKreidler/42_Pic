char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (new_word)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
                new_word = 0;
            }
            else
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32;
            }
        }
        else
        {
            new_word = 1;
        }
        i++;
    }

    return str;
}
