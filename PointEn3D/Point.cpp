#include "Point.h"

Point::Point(std::string nom, std::string nomLong, float x, float y, float z) {
    setNom(nom);
    setX(x);
    setY(y);
    setZ(z);
}

Point::Point() : Point::Point("?", "Sans nom", 0, 0, 0) {}

Point::Point(const Point& autre) : Point::Point(autre.nom, autre.nomLong, autre.x, autre.y, autre.z) {}

Point::Point(std::string nom, const Point& autre) : Point::Point(nom, nom, autre.x, autre.y, autre.z) {}

std::string Point::getInfo() {
    return getNom() + "(" + std::to_string(getX()) + ", " + std::to_string(getY()) + ", " + std::to_string(getZ()) + ")";
}

std::string Point::getNom() {
    return this->nom;
}

void Point::setNom(std::string nom) {
    this->nom = nom;
}

std::string Point::getNomLong() {
    return this->nomLong;
}

void Point::setNomLong(std::string nomLong) {
    this->nomLong = nomLong;
}

float Point::getX() {
    return this->x;
}

void Point::setX(float x) {
    this->x = x;
}

float Point::getY() {
    return this->y;
}

void Point::setY(float y) {
    this->y = y;
}

float Point::getZ() {
    return this->z;
}

void Point::setZ(float z) {
    this->z = z;
}

float Point::getNorme() {
    return sqrtf(powf(this->x, 2) + powf(this->y, 2) + powf(this->z, 2));
}

Point& Point::operator++() {
    ++x;
    ++y;
    ++z;
    return *this;
}

Point Point::operator++(int) {
    x++;
    y++;
    z++;
    return *this;
}

bool operator==(Point const gauche, Point const droite) {
    return (gauche.x == droite.x) && (gauche.y == droite.y) && (gauche.z == droite.z);
}

bool operator>=(Point gauche, Point droite) {
    return gauche.getNorme() >= droite.getNorme();
}

bool operator>(Point gauche, Point droite) {
    return gauche.getNorme() > droite.getNorme();
}

bool operator<(Point gauche, Point droite) {
    return gauche.getNorme() < droite.getNorme();
}

Point operator+(Point const gauche, Point const droite) {
    return Point(gauche.nom + droite.nom, gauche.nom + " + " + droite.nom,
                 gauche.x + droite.x, gauche.y + droite.y, gauche.z + droite.z);
}

Point operator+(Point const gauche, float const droite) {
    return Point(gauche.nom, gauche.nom,
                 gauche.x + droite, gauche.y + droite, gauche.z + droite);
}

Point operator-(Point const gauche, Point const droite) {
    return Point(gauche.nom + droite.nom, gauche.nom + " - " + droite.nom,
                 gauche.x - droite.x, gauche.y - droite.y, gauche.z - droite.z);
}

Point operator*(Point const gauche, Point const droite) {
    return Point(gauche.nom + droite.nom, gauche.nom + " * " + droite.nom,
                 gauche.x * droite.x, gauche.y * droite.y, gauche.z * droite.z);
}

Point operator/(Point const gauche, Point const droite) {
    return Point(gauche.nom + droite.nom, gauche.nom + " / " + droite.nom,
                 gauche.x / droite.x, gauche.y / droite.y, gauche.z / droite.z);
}

