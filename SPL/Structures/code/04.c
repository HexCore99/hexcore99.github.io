#include <math.h>
#include <stdio.h>
typedef struct
{
    int x1, y1, x2, y2;

} strct;

int main()
{
    strct x, y, z;
    scanf("%d%d", &x.x1, &x.y1);
    scanf("%d%d", &y.x1, &y.y1);
    scanf("%d%d", &z.x1, &z.y1);
    float lngth1 = sqrt((y.x1 - x.x1) * (y.x1 - x.x1) + (y.y1 - x.y1) * (y.y1 - x.y1));
    float lngth2 = sqrt((z.x1 - y.x1) * (z.x1 - y.x1) + (z.y1 - y.y1) * (z.y1 - y.y1));
    float lngth3 = sqrt((z.x1 - x.x1) * (z.x1 - x.x1) + (z.y1 - x.y1) * (z.y1 - x.y1));

    float s = (lngth1 + lngth2 + lngth3) / 2;

    float area = sqrt(s * (s - lngth1) * (s - lngth2) * (s - lngth3));

    if (lngth1 + lngth2 <= lngth3 || lngth2 + lngth3 <= lngth1 || lngth3 + lngth1 <= lngth2)
    {
        printf("They are in the same line\n");
    }
    else
    {
        printf("the area is %.2f unit", area);
    }

    return 0;
}