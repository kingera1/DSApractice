#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int pa =  *a + *b;
    int pb = *a - *b;
    cout<<pa<<endl;
    cout<<abs(pb);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
