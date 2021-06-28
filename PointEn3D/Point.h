#include <string>
#include <math.h>
#include <iostream>
#pragma once
class Point {
    private:
    std::string nom;
    std::string nomLong;
    float x, y, z;

    public:
    Point();
    Point(std::string nom, std::string nomLong, float x, float y, float z);
    Point(const Point& autre);
    Point(std::string nom, const Point& autre);

    std::string getInfo();
    std::string getNom();
    void setNom(std::string nom);
    std::string getNomLong();
    void setNomLong(std::string nomLong);
    float getX();
    void setX(float x);
    float getY();
    void setY(float y);
    float getZ();
    void setZ(float z);
    float getNorme();

    friend bool operator==(Point const gauche, Point const droite);
    friend bool operator>=(Point const gauche, Point const droite);
    friend bool operator>(Point const gauche, Point const droite);
    friend bool operator<(Point const gauche, Point const droite);

    friend Point operator+(Point const gauche, Point const droite);
    friend Point operator+(Point const gauche, float const droite);
    friend Point operator-(Point const gauche, Point const droite);
    friend Point operator*(Point const gauche, Point const droite);
    friend Point operator/(Point const gauche, Point const droite);

    Point& operator++();
    Point operator++(int);

    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << point.nom + "(" + std::to_string(point.x) + ", " + std::to_string(point.y) + ", " + std::to_string(point.z) + ")";;
        return os;
    }
};

