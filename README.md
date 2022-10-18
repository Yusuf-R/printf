# Printf Function

The printf function prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen..

printf is a special function because it receives a variable number of arguments. The first parameter is fixed and is the format string. It includes text to be printed literaly and marks to be replaced by the text obtained from the additional parameters. Thus, printf is invoked with as many parameters as marks are included in the format string, plus one (the format string itself)

## Brief insight of prinf function

int printf(const char *format-string, argument-list)


* Format - The format argument is a string containing C language conversion specifications. The conversion specification specifies the notation, alignment, significant digits, field width, and other aspects of the output format. To represent non-printing characters, such as newlines and tabs, the format string may contain escape characters. Below are the details.
* Agrument-list - Depending on the format string, the function may require additional arguments.


![alt text](https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_example_en.png)


```bash
More to come !!!
```

## Usage

```c
//printf function
//int main(void)
{
  int digit = 3;
  char character = 'e';
  char *string = "This is nigeria";
  printf("Integer value: %d", digit);
  //return (3) to the screen
  printf("Character: %c", character);
  //return (c) to the screen
  printf("String: %s", string);
  //return (This is nigeria)
  return (0);
}
```

## Collaboration
Team leader - Abdulwasiu Yusuf Tunde

Partner - Oke Abdulquadri Olasunkanmi




## License
[ALX](https:https://alx-intranet.hbtn.io/projects/226)
