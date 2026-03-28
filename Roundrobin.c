#include <stdio.h>

int main() {
    int n, i, time = 0, remain, quantum;

    scanf("%d", &n);

    int bt[n], wt[n], tat[n], rt[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }

    scanf("%d", &quantum);

    remain = n;

    while(remain > 0) {
        for(i = 0; i < n; i++) {
            if(rt[i] > 0) {
                if(rt[i] <= quantum) {
                    time += rt[i];
                    rt[i] = 0;
                    remain--;
                    tat[i] = time;
                } else {
                    time += quantum;
                    rt[i] -= quantum;
                }
            }
        }
    }

    for(i = 0; i < n; i++) {
        wt[i] = tat[i] - bt[i];
    }

    for(i = 0; i < n; i++) {
        printf("P%d %d %d %d\n", i+1, bt[i], wt[i], tat[i]);
    }

    return 0;
}
