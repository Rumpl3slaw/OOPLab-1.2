#pragma once

class Square {
private:
	double x1;
	double x2;
    double y1;
	double y2;
public:
	double Getx1() { return x1; }
    double Getx2() { return x2; }
	double Gety1() { return y1; }
	double Gety2() { return y2; }
	void Setx1(double value) { x1 = value; }
	void Setx2(double value) { x2 = value; }
	void Sety1(double value) { y1 = value; }
	void Sety2(double value) { y2 = value; }


	bool Init(double x1, double x2, double y1, double y2);
	void Display();
	void Read();

	double Lenght();
	double Area();
    double Perimeter();

};