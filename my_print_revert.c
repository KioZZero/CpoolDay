void print_char(char c);
void print_number(int value);


void my_print_revert(char *toRevert){
    int i = 0;
    while(toRevert[i]){
        i++;
    }
    for(i-=1;i>=0;i--){
    print_char(toRevert[i]); 
    }
}


