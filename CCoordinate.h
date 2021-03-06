

#ifndef CCORDINATE_H
#define CCORDINATE_H

/**
 * This class represents a coordinate on a plane.
 */
class CCoordinate
{
private:
	/** The x position */
	float m_x;
	/** The y position */
	float m_y;
/** The z position */
	float m_z;

	/** Given polar coordinates, calculate the x value. */
	float calcX(float radius, float angle);
	/** Given polar coordinates, calculate the y value. */
	float calcY(float radius, float angle);
	/** Calculate the angle for the current x and y attributes. */
	float calcAngle();
	/** Calculate the radius for the current x and y attributes. */
	float calcRadius();

public:

	/**
	 * Create a new coordinate with the given x and y values.
	 */
	CCoordinate(float x, float y);

	/**
	 * Set the coordinate to the given cartesian values.
	 */
	void setCartesian(float x, float y);

	/**
	 * Set the coordinate to the given polar values.
	 */
	void setPolar(float radius, float angle);

	/**
	 * Get the coordinate's position as cartesian values.
	 */
	void getCartesian(float *x, float *y);

	/**
	 * Get the (cartesian) x value of the coordinate.
	 */
	float getX();

	/**
	 * Get the (cartesian) y value of the coordinate.
	 */
	float getY();

	/**
	 * Get the (polar) radius value of the coordinate.
	 */
	float getRadius();

	/**
	 * Get the (polar) angle value of the coordinate.
	 */
	float getAngle();

	/**
	 * Print the coordinate on the console.
	 */
	void print();

};

#endif //CCORDINATE_H
