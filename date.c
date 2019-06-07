#include "types.h"
#include "user.h"
#include "date.h"
//#include "lapic.c"

int main (int argc, char* argv[]) {
    struct rtcdate r;
    if (date(&r)) {
        printf(2,"Date failed\n");
        exit();
    }
    printf(2, "%d:", r.hour);       //hours
    printf(2, "%d:", r.minute);     //minutes
    printf(2, "%d\n", r.second);    //seconds
    exit();
}