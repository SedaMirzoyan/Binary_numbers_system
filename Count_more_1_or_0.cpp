
#include <iostream>

unsigned func(unsigned int num)
{
    int arr[32];
    int mod = 0;
    int i = 0;

    while (num > 0)
    {
        mod = num % 2;
        arr[i] = mod;
        num = num / 2;
        i++;
    }

    int count1 = 0;
    int count0 = 0;
    int max = 0;

    for (int j = i - 1; j >= 0; j--)
    {
        std::cout << arr[j];
        if (arr[j] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    if (count0 > count1)
    {
        max = count0;
    }
    else
    {
        max = count1;
    }

    std::cout << "\ncount0 = " << count0 << std::endl << "count1 = " << count1 << std::endl;

    return max;
}


int main()
{
    unsigned int max = func(21);
    std::cout << "max = " << max << std::endl;

    return 0;
}
