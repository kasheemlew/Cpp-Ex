#include <stdio.h>

void main()
{
    int i, j, q, day, blank=0;

    for (i=0; i<12; i++)
    {
        if (i==1)
            day = 29;
        else
            day = 30;

        switch(i)
        {
            case 0: printf("              ����\n"); break;
            case 1: printf("\n\n              ����\n"); break;
            case 2: printf("\n\n              ����\n"); break;
            case 3: printf("\n\n              ����\n"); break;
            case 4: printf("\n\n              ����\n"); break;
            case 5: printf("\n\n              ����\n"); break;
            case 6: printf("\n\n              ����\n"); break;
            case 7: printf("\n\n              ����\n"); break;
            case 8: printf("\n\n              ����\n"); break;
            case 9: printf("\n\n              ʮ��\n"); break;
            case 10: printf("\n\n             ʮһ��\n"); break;
            case 11: printf("\n\n              ����\n"); break;
        }
        printf("----------------------------------\n");
        printf("��һ �ܶ� ���� ���� ���� ���� ����\n");
        printf("----------------------------------\n");

        j = blank;
        while (j)
        {
            printf("     ");
            j--;
        }

        for (q=1; q<=day; q++)
        {
            printf(" %3d ", q);
            if ((q+blank)%7==0)
            {
                printf("\n");
            }
        }
        blank = (day+blank)%7;
    }
}
