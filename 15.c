    #include <stdio.h>
    int main()
    {
        int ch;
        printf("enter a value between 1 to 2:");
        scanf("%d", &ch);
        switch (ch)
        {
           case 1:
              printf("1 ");
              printf("hi");
              break;
           default:
              printf("2\n");
        }
    }

