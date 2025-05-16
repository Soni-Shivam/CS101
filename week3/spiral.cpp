#include <simplecpp>

main_program {
    turtleSim();

    for(int i =0; i <10000; i ++) {
        float x = i*0.001;
        forward(x);
        right(1);
    }

    getClick();

}