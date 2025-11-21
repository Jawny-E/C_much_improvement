/*
 * At first I attempted to automate this task, but this seems 
 * "undoable" with my current skill-set (also something something about esc-seq interpretation)
 * So, its only right to manually print a compendium with examples!
 */
#include "ex_02.h"


void all_the_esq_seq(){
    printf("\\%s is the single quote character \t[\']\n", "'");
    printf("\\%s is the double quote character \t[\"]\n", "\"");
    printf("\\%s is the question mark character \t[\?]\n", "?");
    printf("\\%s is the backslash character \t\t[\\]\n", "\\");
    printf("\\%s is the alert character \t\t[\a]\n", "a");
    printf("\\%s is the backspace character \t\t[\b]\n", "b");
    printf("\\%s is the formfeed page break \t\t[\f]\n", "f");
    printf("\\%s is the newline character \t\t[\n]\n", "n");
    printf("  \\%s is the carriage return \t\t[\r]\n", "r");
    printf("\\%s is the horizontal tab \t\t[\t]\n", "t");
    printf("\\%s is the vertical tab \t\t\t[\v]\n", "v");
    printf("\\%s is the escape character \t\t[\n\e]", "e");
}

main(){
    all_the_esq_seq();
}
