/*
** USAGE:
**      extractor("STRING WHERE YOU WANT TO EXTRACT", <place of the word to extract>)
** EXAMPLE:
**      printf("String extracted: %s\n", extractor("String test for extractor", 3));
**      String extracted:for
*/

char *extractor(char *string, int place)
{
    int space = 1;
    char *output = malloc(sizeof(char) * strlen(string) + 1);

    for (int i = 0; string[i] != '\0'; i++) {
        for (; space < place; i++) {
            if (string[i] == ' ' || string[i] == '\0')
                space++;
        }
        for (int index = 0; space == place; i++, index++) {
            output[index] = string[i];
            if (string[i] == ' ' || string[i] == '\0')
                space++;
        }
    }
    return (output);
}
