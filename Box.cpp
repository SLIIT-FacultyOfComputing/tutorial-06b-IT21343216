#include "Box.h"

// Implement setters and getters
void Box::setLength(int L)
{
  Length=L;
}
void Box::setWidth(int W)
{
  Width=W;
}
void Box::setHeight(int H)
{
  Height=H;
}
int Box::getLength()
{
  return Length;
}
int Box::getWidth()
{
  return Width;
}
int Box::getHeight()
{
  return Height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int Volume;
  Volume=Length*Width*Height;
  return Volume;
}
