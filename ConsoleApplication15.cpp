
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    const double PI = 3.141592;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double base = radius * sqrt(2);
    double small_triangle_area = 0.5 * radius * radius;
    double circle_area = PI * radius * radius;
    double quarter_circle_area = circle_area / 4;
    double large_triangle_area = 0.5 * base * radius;

    // Припущення: площа коричневого еліпса становить приблизно 2/3 площі маленького трикутника
    double brown_ellipse_area = quarter_circle_area - small_triangle_area ;

    // Перевірка на додатне значення
    if (brown_ellipse_area < 0) {
        cout << "Error: Brown ellipse area is negative. Please provide more accurate data." << endl;
        return 1;
    }

    double yellow_ellipse_area = brown_ellipse_area;
    double remaining_area = large_triangle_area - yellow_ellipse_area;

    cout << "Base of the triangles: " << base << endl;
    cout << "Area of the small orange triangle: " << small_triangle_area << endl;
    cout << "Area of the circle: " << circle_area << endl;
    cout << "Area of one quarter of the circle: " << quarter_circle_area << endl;
    cout << "Area of the brown ellipse (approximation): " << brown_ellipse_area << endl;
    cout << "Area of the large orange triangle: " << large_triangle_area << endl;
    cout << "Area of the yellow ellipse: " << yellow_ellipse_area << endl;
    cout << "Remaining area after subtracting yellow ellipse: " << remaining_area << endl;

    return 0;
}
