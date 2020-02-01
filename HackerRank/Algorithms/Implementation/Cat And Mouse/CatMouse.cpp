
// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z)
{
    int dis_x = abs(x-z), dis_y=abs(y-z);
    if(dis_x==dis_y)
        return "Mouse C";
    if(dis_x > dis_y)
        return "Cat B";
    return "Cat A";

}
