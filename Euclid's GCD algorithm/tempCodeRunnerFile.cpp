

void gcd(int m, int n){
    int r;
    while (n != 0)
    {
        cout<<"gcd("<<m<<","<<n<<") = ";
        r = m % n;
        m = n;
        n = r;
    }
    
    cout <<m;
}