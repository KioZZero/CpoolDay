void print_char(char c);

void my_print_n_ascii(int howMany)
{
    if (howMany+32>127 ){return;}
    for(int i = 32 ; i <= 32+howMany; i += 1 ){
        print_char(i);
    }
}


