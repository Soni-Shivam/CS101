#include <simplecpp>

void dtriangle(double side, int level) {
   for(int i = 0; i < 3; i++) {
      forward(side); left(120);
   }
   if(level == 0) return;
   wait(0.5);
   dtriangle(side/2, level-1);
   penUp(); forward(side/2); penDown();

   dtriangle(side/2, level-1);
   penUp(); left(120); forward(side/2);  
   right(120); penDown(); 
    
   dtriangle(side/2, level-1);
   penUp(); right(120); forward(side/2);  
   left(120); penDown(); 
}

main_program {

  const double width = 800, height = 800, margin = 10;
  turtleSim("Fractal", width+2*margin, height+2*margin);

  double side = min(width,height*cosine(30));
  penUp(); right(150); forward(side/(2*cosine(30))); left(150);
  penDown(); 
  dtriangle(side,6);

  getClick();
  hide();
}