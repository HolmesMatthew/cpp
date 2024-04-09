int* getRandomNumbers(int num)
{
    int *arr = nullptr; // holder for dynamic array
    if (num < 1 )     // error handling fail safe
    {
        return nullptr;
    }
    // dynamically allocate memory for the random numbers in the array
    arr = new int[num]; 
    // seed alt rand num gen // returns 2 digit num
    time_t now = time(0);
    tm *ltm = localtime(&now);
    for (int i = 0; i < num; i++)
    {
        int sec = ltm->tm_sec;
        arr[i] = (rand() % sec );
    }
    return arr;
}