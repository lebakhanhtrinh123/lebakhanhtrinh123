using namespace std;

int  main()
{
    int a[10], i, largest = 0, second_largest = 0, pos1, pos2;
    int n;
    cout << "Enter Number of elements :";
    cin>>n;
    for (i = 0; i<n; ++i)
    {
        cout << "n Enter " << (i + 1) << "th Element :";
        cin >> a[i];
    }
       //Finding Largest
    for (i = 0; i<10; ++i)
        {
        	if (a[i]>largest)
	    }
            largest = a[i];
            pos1 = i;
              }
       }
       //finding second largset
       for (i = 0; i<10; ++i)
       {
              if (a[i]>second_largest)
              {
                     if (a[i] == largest)
                           continue;              //Ignoring largest in order to get second largest
                     second_largest = a[i];
                     pos2 = i;
              }
       }
       cout << "nn Largest Number :" << largest << " at position " << (pos1 + 1);
       cout << "nn Second Largest Number :"<< second_largest << " at position " << (pos2 + 1);

       getch();
       return;
}