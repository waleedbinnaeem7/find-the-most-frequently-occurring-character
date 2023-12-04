#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

 
    printf("How many characters: ");
    scanf("%d", &n);

    char *c_array = (char *)malloc(n * sizeof(char));

    printf("Input %d values ", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c_array[i]);
    }

    
    char m_used;
    int m_c = 0;

  
    for (int i = 0; i < n; i++) {
        int c = 1;

     
        for (int j = i + 1; j < n; j++) {
            if (c_array[i] == c_array[j]) {
                c++;
            }
        }

        if (c > m_c) {
            m_c = c;
            m_used = c_array[i];
        }
    }

    printf("Most used value: %c\n", m_used);

    free(c_array);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

 
    printf("How many characters: ");
    scanf("%d", &n);

    char *c_array = (char *)malloc(n * sizeof(char));

    printf("Input %d values ", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c_array[i]);
    }

    
    char m_used;
    int m_c = 0;

  
    for (int i = 0; i < n; i++) {
        int c = 1;

     
        for (int j = i + 1; j < n; j++) {
            if (c_array[i] == c_array[j]) {
                c++;
            }
        }

        if (c > m_c) {
            m_c = c;
            m_used = c_array[i];
        }
    }

    printf("Most used value: %c\n", m_used);

    free(c_array);

    return 0;
}
