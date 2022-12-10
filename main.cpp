#include <stdio.h>
#include <time.h>

#define SIZE 60
int main()
{
    int data[SIZE] = {101, 103, 107, 109, 113, 127, 131, 137, 139, 149,
                  151, 157, 163, 167, 173, 179, 181, 191, 193, 197,
                  199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
                  263, 269, 271, 277, 281, 283, 293, 307, 311, 313,
                  317, 331, 337, 347, 349, 353, 359, 367, 373, 379,
                  383, 389, 397, 401, 409, 419, 421, 431, 433, 439,};

    double sec_time;
    double sum_time=0;
    double ave_time;

    for (int i = 0; i < SIZE; ++i) {
        int target = data[i];
        clock_t begin = clock();
        for (int j = 0;j < SIZE;++j) {
            if (target == data[j]) {
                clock_t end = clock();//時間計測終了
                sec_time = (double)(end - begin) / CLOCKS_PER_SEC;
                sum_time += sec_time;
                printf("%d\n", data[j]);
                printf( "処理時間は%.10fs\n", sec_time);
            }
        }
    }
    ave_time = sum_time/SIZE;
    printf("平均処理時間は%.9fs",ave_time);
}