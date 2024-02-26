void copyStringToAsciiValues2(char *sentence)
{
    char *chars, *charPointer;

    chars = sentence;
    charPointer = chars;

    while (*chars != '\0')
    {
        chars++;
    }

    for (charPointer = sentence; *charPointer != '\0'; charPointer++)
    {
        printf("0x%x '%d'\n", *charPointer, *charPointer);
    }
}

int main(void)
{
    copyStringToAsciiValues2("This is a string");
    return 0;
}