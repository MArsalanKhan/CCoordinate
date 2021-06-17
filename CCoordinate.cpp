

#include <iostream>
#include <math.h>
#include "CCoordinate.h"

using namespace std;

CCoordinate::CCoordinate(float x, float y) {
	m_x = x;
	m_y = y;
}

float CCoordinate::calcX(float radius, float angle) {
	return radius * cos(angle);
}

float CCoordinate::calcY(float radius, float angle) {
	return radius * sin(angle);
}

float CCoordinate::calcAngle() {
	return atan2(m_y, m_y);
}

float CCoordinate::calcRadius() {
	return sqrt(m_x * m_x + m_y * m_y);
}

void CCoordinate::setCartesian(float x, float y) {
	m_x = x;
	m_y = y;
}

void CCoordinate::setPolar(float radius, float angle) {
	m_x = calcX(radius, angle);
	m_y = calcY(radius, angle);
}

void CCoordinate::getCartesian(float* x, float* y) {
	*x = m_x;
	*y = m_y;
}

float CCoordinate::getX() {
	return m_x;
}

float CCoordinate::getY() {
	return m_y;
}

float CCoordinate::getRadius() {
	return calcRadius();
}

float CCoordinate::getAngle() {
	return calcAngle();
}

void CCoordinate::print() {
	cout << "Coordinate at (" << m_x << ", " << m_y << ")" << endl;
}
