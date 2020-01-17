char *extractor(char *string, int place, char character)
{
    int space = 1;
    char *output = malloc(sizeof(char) * strlen(string) + 1);

    for (int i = 0; string[i] != '\0'; i++) {
        for (; space < place; i++) {
            if (string[i] == character || string[i] == '\0')
                space++;
        }
        for (int index = 0; space == place; i++, index++) {
            output[index] = string[i];
            if (string[i + 1] == character || string[i + 1] == '\0')
                space++;
        }
    }
    output[strlen(string)] = '\0';
    return (output);
}
