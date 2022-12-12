#include <stdio.h>
#include "fish.h"


int main(){
    fish snappy = {"Зубастик", "Пиранья", 69, 4, {{"мясо", 0.2}, {"купаться в джакузи", 7.5}}};
    label(snappy);
    return 0;
}