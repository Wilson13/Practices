#include <stdio.h>
#include <math.h>

int cvrtToDec(int base, int number);

int main()
{
    int src_base_num_sys = 0, tar_base_num_sys = 0, src_num = 0, src_dec = 0;

    printf("Plese enter the base number system (0-16): ");
    scanf("%d", &src_base_num_sys);
    printf("Plese enter the target number system (0-16):  ");
    scanf("%d", &tar_base_num_sys);
    printf("Base number system: %d, Target number system: %d\n", src_base_num_sys, tar_base_num_sys);

    printf("Plese enter the number in base %d to be converted to base %d: ", src_base_num_sys, tar_base_num_sys);
    scanf("%d", &src_num);

    if (src_base_num_sys < 0 || tar_base_num_sys > 16) {
        printf("Out of acceptable range!\n");
    } else if (src_base_num_sys==tar_base_num_sys) {
        printf("Source and target base number system are the same.\n");
    } else {
        src_dec = cvrtToDec(src_base_num_sys, src_num);
        printf("Decimal of %d in base %d is: %d\n", src_num, src_base_num_sys, src_dec);
    }

    return 0;
}

int cvrtToDec(int base, int number)
{
    //printf("number: %d\n", number);
    int i = 0, decimal = 0, least_sig_dig = 0;
    while (number > 0) {
        least_sig_dig = number%10;
        // By multiplying the least significant digit with the base
        // we are able to obtain the corresponding decimal value
        // e.g. 0b1011 = 1*8 + 0*4 + 1*2 + 1*1
        decimal += (least_sig_dig)*pow((double)base, (double) i);
        printf("Least sig dig: %d\n", least_sig_dig);
        printf("Power: %.0f\n", pow((double)base, (double) i));
        number = (number - least_sig_dig)/10;
        i++;
    }
    return decimal;
}
