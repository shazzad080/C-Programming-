#include <stdio.h>

int main() {
    int n, f;
    printf("Enter the length of the signal: ");
    scanf("%d", &n);
    
    float signal[n];
    printf("Enter the signal values: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &signal[i]);
    }
    
    printf("Enter the filter length: ");
    scanf("%d", &f);
    
    float smoothedSignal[n];
    
    for (int i = 0; i < n; i++) {
        if (i - f / 2 >= 0 && i + f / 2 < n) {
            float sum = 0;
            for (int j = -f / 2; j <= f / 2; j++) {
                sum += signal[i + j];
            }
            smoothedSignal[i] = sum / f;
        } else {
            smoothedSignal[i] = signal[i];
        }
        
        printf("%.2f ", smoothedSignal[i]);
    }

    return 0;
}
