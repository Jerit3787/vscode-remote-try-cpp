#include <stdio.h>

int main() {
    char array1[3][99] = {"MH378", "ME673", "NEX345"};

    int startsWithM = 0;

    for (int i = 0; i < 4; i++) {
        if (array1[i][0] == 'M') {
            startsWithM++;
        }
    }
    printf("%d", startsWithM);

}