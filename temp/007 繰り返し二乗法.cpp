LL RepeatSquaring(LL N, LL P, LL M){
    if(P==0) return 1;
    if(P%2==0){
        LL t = RepeatSquaring(N, P/2, M);
        return t*t % M;
    }
    return N * RepeatSquaring(N, P-1, M);
}