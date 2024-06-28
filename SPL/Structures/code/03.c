#include <math.h>
#include <stdio.h>

typedef struct
{
    int x1, y1, x2, y2;

} strct;

int main()
{
    strct crdinte;
    scanf("%d %d %d %d", &crdinte.x1, &crdinte.y1, &crdinte.x2, &crdinte.y2);
    float distance = sqrt((crdinte.x2 - crdinte.x1) * (crdinte.x2 - crdinte.x1) + (crdinte.y2 - crdinte.y1) * (crdinte.y2 - crdinte.y1));
    printf("The distance is %.2f unit\n", distance);
    return 0;
}