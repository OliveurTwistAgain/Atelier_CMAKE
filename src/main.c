#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
    if (argc == 4 || (argc == 3 && strcmp(argv[1], "carre") == 0)) {
        char* op = argv[1];
        double r = 0;
        
        if (strcmp(op, "add") == 0 && argc == 4) {
            r = _add(atof(argv[2]), atof(argv[3]));
        }
        else if (strcmp(op, "sub") == 0 && argc == 4) {
            r = _sub(atof(argv[2]), atof(argv[3]));
        }
        else if (strcmp(op, "mul") == 0 && argc == 4) {
            r = _mul(atof(argv[2]), atof(argv[3]));
        }
        else if (strcmp(op, "div") == 0 && argc == 4) {
            r = _div(atof(argv[2]), atof(argv[3]));
        }
        else if (strcmp(op, "carre") == 0 && argc == 3) {
            r = _carre(atof(argv[2]));
        }
        else {
            printf("Erreur de parametres");
            return 1;
        }
        printf("%lf\n", r);
    } else {
        printf("Erreur de parametres");
        return 1;
    }
    return 0;
}
