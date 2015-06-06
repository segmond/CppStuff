#include <iostream>

#define NULLPTR 0

void pointer_print_string(char *str)
{
    char *ptr = str;
    while(*ptr) {
        std::cout << *ptr++;
    }

}
int main(int argc, char *argv[]) {
    char *hello_str = "Hello CPP world again\n";
    char *null_str = NULLPTR;

    pointer_print_string(hello_str);
    pointer_print_string(null_str);
}
