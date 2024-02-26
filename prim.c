void isPrime()
{
    // variabel num för scanf och count för att veta hur många gånger input siffran är delbar.
    int num, count = 0;
    printf("Ange en siffra: ");
    scanf("%d", &num);
    // iterera genom varje delbar siffra upp till num
    for (int i = 0; i <= num; i++)
    {
        // ifall input num modulo itererade siffran är 0
        if (num % i == 0)
        {
            // addera i denna variabel
            count++;
        }
    }
    // om det har visat sig att talet endast är delbart två gånger(1 och sig själv)
    if (count == 2)
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime\n", num);
    }
}
int main(void)
{
    isPrime();
    return 0;
}
