#include "MatrixGraph.cpp"

int main()
{
  ListGraph l = ListGraph();
  MatrixGraph m = MatrixGraph();
  l.AddArc(0), l.AddArc(0), l.AddArc(1), l.AddArc(2);
  m.AddArc(0), m.AddArc(0), m.AddArc(1), m.AddArc(2);
  l.print(), m.print();

  MatrixGraph m2;
  m2.Copy(l);
  m2.print();
}
