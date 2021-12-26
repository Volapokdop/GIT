#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
float* input_array(float *a, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
    return a;
}

float find_max(float *a, int n) {
    float max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

float* trans_array(float* a, int n, float max) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == max){
            j = i + 1;
            break;
        }
    }
    for (j; j < n; j++) {
        a[j] = 0.5;
    }
    return a;
}

void output_array(float *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%f\n", a[i]);
    }
}

int main(){
    system("chcp 1251");
    system("cls");
    float* a; 
    int n;
    float max;
    for (int i = 0; i <= 1; i++) {
        scanf("%d", &n);
        a = (float*)malloc(n * sizeof(float));
        a = input_array(a, n);
        max = find_max(a, n);
        a = trans_array(a, n, max);
        output_array(a, n);
    }
    free(a);
}