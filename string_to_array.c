void string_to_array(char *string)
{
    char **array = malloc(sizeof(char *) * count_spaces(string) + 1);

    for (int i = 0; i <= count_spaces(string); i++) {
        array[i] = malloc(sizeof(char) * (strlen(extractor(string, i)) + 1));
        array[i] = extractor(string, (i + 1));
    }
}
