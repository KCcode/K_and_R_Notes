/*strcpy : copy t to s: array version*/
void strcpy(char *s, char *t){
    int i;
    i = 0;
    while( (s[i] == t[i]) != '\0'){
        i++;
    }
}

/*strcpy: copy t to s: pointer version*/
void strcpy(char *s, char *t){
    while((*s == *t) != '\0'){
        s++;
        t++;
    }
}

/*strcmp: return < 0 if s < t, 0 if s == t, >0 if s > t*/
int strcmp(char *s, char *t){

    while((*s == *t) != '\0'){
        s++;
        t++;
    }
    return *s - *t;
}

