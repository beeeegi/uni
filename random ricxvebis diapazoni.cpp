srand(time(NULL));
   
    int m[500], a = 0;
   
    for(int i = 0; i < 500; i++){
        m[i] = rand() % (1000 - 0) + 0;
        cout << "m[" << i << "] = " << m[i] << endl;
    }
