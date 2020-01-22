
<img src="https://cdn0.iconfinder.com/data/icons/survival-camp-icon/595/Survival_Outline-18-512.png" width="256" height="256" />


# survivallib
My most usefull tools for C

### my_malloc.c
Allocate the space that you need and init all the character by '\0'
to prevent missing '\0' at the end of the string
##### Usage
```
my_malloc(<size to alloc>);
```

### my_extractor.c
Extract the content of the str with a specific delimiter
##### Usage
```
extract(<string>, <place of the word>, <separator>);
      type: Char*   type: Int           type: Char
```

### my_string_to_array.c
Transform a char * to char **
##### Usage
```
my_string_to_array(<array>, <string>);
                   type: Char**      type: Char*
```

### my_count_character.c
Count into a string all the character asked
