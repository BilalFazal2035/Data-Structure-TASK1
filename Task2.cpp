//#include<iostream>
//using namespace std;
//
//class Point
//{
//	private:
//		int x;
//		int y;
//	public:
//		//Constructors
//		Point();
//		Point(int x, int y)
//		{
//			this->x=x;
//			this->x=x;
//		}
//		//Setters
//		void setx(int x)
//		{
//			this->x = x;
//		}
//		void sety(int y)
//		{
//			this->y = y;
//		}
//		//Getters
//		int getx()
//		{
//			return x;
//		}
//		int gety()
//		{
//			return y;
//		}
//		//Calculating distance 
//		int distance(Point &otherpoint)
//		{
//			int dx = x - otherpoint.x;
//			int dy = y - otherpoint.y;
//			return sqrt((dx*dx) + (dy*dy));
//		}
//};
//
//int main()
//{
//	Point p1(8,9);
//	Point p2(4,5);
//	int distance = p1.distance(p2);
//	cout << "Distance is: " << distance << endl;
//	return 0;
//}