/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* d, int dS, int* rS){    
    int * ansAr = (int *) malloc(sizeof(int) * (dS));
    
    //r = remainder
    int r = 0;
    
    for (int i = dS - 1; i > -1; i--) {
        int tmp = d[i] + r;
        r = 0;
        
        if (i == dS - 1) {
            tmp = d[i] + 1;
        }
        
        if (tmp > 9) {
            r = 1;
            tmp = 0;
        }
        
        ansAr[i] = tmp;
    }
    
    
    if (r == 1) {
        ansAr = (int *) realloc(ansAr, sizeof(int) * (dS + 1));
        
        for (int i = dS; i > 0; i--) {
            ansAr[i] = ansAr[i - 1];
        }
        ansAr[0] = r;
        *rS = dS + 1;
    } else {
        *rS = dS;
    }
    
    return ansAr;
}