char *my_malloc(int size)
{
    char *target = malloc(size + 1);

    for (int i = 0; i <= size; i++)
        target[i] = 0;
    return  (target);
}
