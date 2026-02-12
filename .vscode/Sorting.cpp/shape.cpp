#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    double area() const override {
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 4.0, 5.0);

    for (int i = 0; i < 3; ++i) {
        std::cout << "Shape " << i + 1 << " area: " << shapes[i]->area() << std::endl;
        std::cout << "Shape " << i + 1 << " perimeter: " << shapes[i]->perimeter() << std::endl;
        delete shapes[i];
    }

    return 0;
}