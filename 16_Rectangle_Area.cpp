#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

 class Rectangle
 {
     public:
     int length;
     int width;

     void display()
     {
         cout << length << " " << width << endl;
     }
 };

 class RectangleArea: public Rectangle
 {
     public:a
     void read_input()
     {
         cin >> length >> width;
     }
    void display()
    {
        int area = length * width;
        cout << area;
    }
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}
