int masivi[5][2] = {
        {1,1},
        {2,4},
        {3,9},
        {4,16},
        {5,25}
    };
    int jami = 0;
   
    for (int striqoni = 0; striqoni < 5; striqoni++){
        for (int sveti = 0; sveti < 2; sveti++){
            jami += masivi[striqoni][sveti];
            cout << masivi[striqoni][sveti] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "jami = " << jami << endl;
