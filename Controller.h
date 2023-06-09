//
// Created by Saatus on 2023/6/5.
//

#ifndef BEZIER_CONTROLLER_H
#define BEZIER_CONTROLLER_H
#include <QVector3D>
#include <qvector2d.h>
#include <QMatrix4x4>
#include <QQuaternion>


class Controller {
public:
    Controller() = default;
    ~Controller() = default;
    void press(QPoint pos);
    void move(QPoint pos);
    void release();
    [[nodiscard]]
    const QQuaternion& getRotation();
    void setRotateAxis(const QVector3D& r);


private:
    QVector2D mousePressPosition{};
    QVector3D rotationAxis{};
    float angle = 0.0f;
    QQuaternion rotation{};
};


#endif //BEZIER_CONTROLLER_H
