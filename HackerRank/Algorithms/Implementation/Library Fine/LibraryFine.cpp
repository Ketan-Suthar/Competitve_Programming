// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int fine = 0;
    if (y1>y2)
        fine = 10000;
    else if (y1<=y2)
    {
        if (m1>m2 and (y1>=y2))
            fine = 500 * (m1-m2);
        else if (m1<=m2)
        {
            if (d1>d2 and (m1-m2>=0) and (y1>=y2))
                fine = 15*(d1-d2);
            else
                fine = 0;
        }
    }
    return fine;
}