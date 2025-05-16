#include <simplecpp>

void kochCurve(double len, int level) {
	if(level==0) {
		forward(len); return;
	}
	kochCurve(len/3,level-1);
	left(60);
	kochCurve(len/3, level-1);
	right(120);
	kochCurve(len/3, level-1);
	left(60);
	kochCurve(len/3, level-1);
}

main_program {
  const double width = 800, height = 800, margin = 10;
  turtleSim("Fractal", width+2*margin, height+2*margin);

  penUp(); forward(-width/2);
  penDown(); kochCurve(width,6);
  
  hide();
  getClick();
}
