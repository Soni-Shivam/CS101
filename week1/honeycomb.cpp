#include<simplecpp>

main_program{
    turtleSim();
    repeat(6){
        repeat(4){
            forward(50);
            right(60);
            wait(0.1);
        }
        left(60);
        penUp();
        right(180);
        forward(50);
        right(60);
        penDown();
    }
    penUp();
    right(120);
    forward(50);
    left(60);
    repeat(6) {
        repeat(5) {
            penDown();
            forward(5);
            penUp();
            forward(5);
            wait(0.1);
        }
        right(60);
    }  
    getClick();
}