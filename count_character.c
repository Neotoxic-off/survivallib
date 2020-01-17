int count_character(char *string, char character)
{
    int nb = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == character)
            nb++;
    }
    return (nb);
}
