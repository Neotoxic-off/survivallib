int count_spaces(char *string)
{
    int spaces = 0;

    for (int i = 0; string[i]; i++) {
        if (string[i] == ' ')
            spaces++;
    }
    return (spaces);
}
