
#include <iostream>

int find10thBit(int num)
{
    int arr[32];
    int mod = 0;
    int i = 0;
    int bit_val;

    while (num > 0)
    {
        mod = num % 2;
        arr[i] = mod;
        num = num / 2;
        i++;
    }

    int tmp;
    for (int j = 0; j < i / 2; ++j)
    {
        tmp = arr[j];
        arr[j] = arr[i - j - 1];
        arr[i - 1 - j] = tmp;
    }

    if (i < 11)
    {
        std::cout << " there is no 10th bit";
        return -1;
    }
    else
    {
        if (arr[9] == 0)
        {
            bit_val = 0;
            std::cout << "0\n";
        }
        else
        {
            bit_val = 1;
            std::cout << "1\n";
        }
    }
    return bit_val;
}


int main()
{
    int num = find10thBit(13527);
    std::cout << "10th bit is " << num << std::endl;

    int num_other = find10thBit(5);
    std::cout << " 10th bit is " << num_other << std::endl;

    int num_another = find10thBit(2048);
    std::cout << "10th bit is " << num_another << std::endl;

    int num_another1 = find10thBit(2520);
    std::cout << "10th bit is " << num_another1 << std::endl;

    return 0;
}

