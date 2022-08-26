#include "Dog.cpp"
int main()
{
  Smart ball("Ball"), bone("Bone");
  Dog a("Sharik", ball, 10),  b("Snezhok", ball, 5), c("Sobaka", bone, 4);
  ball.PrintTotalLink(), bone.PrintTotalLink();
}
