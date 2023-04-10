// random ricxveibs datvla
    srand(time(NULL));
    //intebi
    int a[15], s = 0, s1 = 0, n = 0;
   
    for(int i = 0; i < 15; i++){
        // random ricxveibs datvla
        a[i] = rand() % (68 + 17) - 17;
        // mtliani masivis lamazad gamotana
        cout << "a[" << i << "] = " << a[i] << endl;
       
        //mtlian masivshi uaryofitebis datvla da mati jamis gamotvla
        if (a[i] < 0){
            s += a[i];
            n++;
        }
        //-10dan 10mde diapazonshi itvlis ricxvebis jams
        if (a[i] >= -10 && a[i] <= 10){
            s1 += a[i];
        }
    }
   
    cout << "\n";
    cout << "uaryofitebis jami: " << s << endl;
    cout << "uaryofitebis raodenoba: " << n << endl;
    cout << "mocemul shualedshi ricxvebis jami: " << s1 << endl;
