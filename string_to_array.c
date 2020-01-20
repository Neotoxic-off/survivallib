void string_to_array(char ***array, char *string, char separator)
{
    int i = 0;
    int characters = count_character(string, separator);
    *array = malloc(sizeof(char *) * (characters + 2));

    for (; i <= characters; i++) {
        (*array)[i] = my_malloc(sizeof(char) *
        (strlen(extractor(string, i, separator)) + 1));
        (*array)[i] = extractor(string, (i + 1), separator);
    }
    (*array)[characters + 1] = NULL;
}
