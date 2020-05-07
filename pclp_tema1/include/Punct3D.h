#ifndef PUNCT3D_H
#define PUNCT3D_H


class Punct3D
{
public:
    Punct3D(double,double,double);
    Punct3D();

    double getX();
    double getY();
    double getZ();

    void setX(double);
    void setY(double);
    void setZ(double);
    void setP(double,double,double);  //setter pentru toate 3 coordonatele


private:
    double x;
    double y;
    double z;
};
#endif // PUNCT3D_H
