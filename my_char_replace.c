void print_char(char c);


void *my_char_replace(char *origin, char toFind, char toReplace){
    int i = 0;
    while(origin[i]){
        
        if(origin[i]==toFind){
            print_char(toReplace);}
        else{
            print_char(origin[i]);}
        i++;
    }
}