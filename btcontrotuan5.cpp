bool* isHigher (int* arr, int num, int thres)
{
    bool* check = new bool[num];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= thres) check[i]= 1;
        else check[i]= 0;
    }
    return check;
}
