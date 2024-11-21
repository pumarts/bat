publicabstractclass Solid {
double r, h;
abstractvoid surfaceArea();
abstractvoid volume();
void readRadius()
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the radius");
r=sc.nextDouble();
void readHeight()
}
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter the height");
h=sc.nextDouble();
}
}
publicclass Cone extends Solid{
void surfaceArea()
{
double area = (3.14 * r)*(r * Math.sqrt(r*r + h*h));
System.out.println("Surface area of cone is "+area);
}
void volume()
{
double volume = 3.14 * r * r * (h/3);
System.out.println("Volume of cone is "+volume);
}
}
publicclass Cylinder extends Solid {
void surfaceArea()
{
//System.out.println(r+" "+h);
double area = 3.14 * r * r * h;
System.out.println("Surface area of cylinder is " +area);
void volume()
}
{
double volume = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
System.out.println("Volume of cylinder is "+volume);
}
}
publicclass Sphere extends Solid {
void surfaceArea()
{
double area = 4 * 3.14 * r * r;
System.out.println("Surface area of sphere is "+area);
void volume()
}
{
double volume = 4.0/3 * 3.14 * r * r * r;
System.out.println("Volume of sphere is "+volume);
}
}
publicclass MySolid {
publicstaticvoid main(String args[]) {
Solid s=new Cylinder();
s.readRadius();
s.readHeight();
s.surfaceArea();
s.volume();
s=new Cone();
s.readRadius();
s.readHeight();
s.surfaceArea();
s.volume();
s=new Sphere();
s.readRadius();
s.surfaceArea();
s.volume();
}
}
