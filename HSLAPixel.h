

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
class HSLAPixel{
	public:
		double h;// it is for hue varies between 0-360
		double l;//	it is for the lumenicance varies between 0-1
		double s;// it is for the saturation varies between 0-1
		double a;// it is for the alpha number aries between 0-1
	};

}
