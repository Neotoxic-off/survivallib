void string_to_array(char ***array, char *string, char separator)
{
    *array = malloc(sizeof(char *) * count_character(string, separator) + 1);

    for (int i = 0; i <= count_character(string, separator); i++) {
        (*array)[i] = my_malloc(sizeof(char) *
        (my_strlen(extractor(string, i, separator)) + 1));
        (*array)[i] = extractor(string, (i + 1), separator);
    }
}
