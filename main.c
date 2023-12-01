#include <stdio.h>

struct s {
    int x;
    int y;
    int vies;
};

typedef struct s Snoopy;

void initSnoopy(Snoopy* psnoopy){
    (*psnoopy).x = 10;
    psnoopy->y = 5;
    psnoopy->vies =3;
}

void tueSnoopy(Snoopy* psnoopy){
    psnoopy->vies = 0;
}

void depSnoopy(Snoopy* psnoopy, int dx, int dy){
    psnoopy->x += dx;
    psnoopy->y += dy;
}

int main(){

    Snoopy monSnoopy;
    initSnoopy(&monSnoopy);

    depSnoopy(&monSnoopy, 10, 10);

    printf("Les coordonées de snoopy sont %d %d \n", monSnoopy.x, monSnoopy.y);

    tueSnoopy(&monSnoopy);

    printf("Vies snoopy %d", monSnoopy.vies);

    return 0;
}
