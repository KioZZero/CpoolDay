void print_(char c);

int my_get_char_repeat(char to_find, const char *to_search){
    int i = 0;
    int number = 0;
    while(to_search[i]){
        
        if(to_search[i]==to_find){
            number++;
            
        }   
        i++;
    }        
    return number;

}