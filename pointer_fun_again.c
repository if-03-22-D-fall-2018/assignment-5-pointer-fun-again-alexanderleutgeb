#include <stdio.h>
#include "string.h"

struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[64];
};

void print_struct(struct PlayStruct ps,struct PlayStruct* pps);
void change_struct(struct PlayStruct ps,struct PlayStruct* pps);
void print_string(char string_to_print[]);
void change_string(char string1[], char* p_string[]);

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct ={4,4.5, "Alexander Leutgeb"};
  struct PlayStruct *play_struct_pointer = &play_struct;
  char another_string[16] = "new string";
  char *another_string_p = another_string;

  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer); 
  print_struct(play_struct, play_struct_pointer);

  print_string(play_struct.a_string);
  change_string(play_struct.a_string,&another_string_p);
  print_string(play_struct.a_string);
  print_string(another_string_p);

  return 0;
}
 void print_struct(struct PlayStruct ps,struct PlayStruct* pps){
   printf("%d %lf %s\n",ps.int_value ,ps.double_value, ps.a_string);
   printf("%d %lf %s\n",pps->int_value ,pps->double_value, pps->a_string);
 }
 void change_struct(struct PlayStruct ps,struct PlayStruct* pps){
   ps.int_value = 16;
   ps.double_value = 16.5;
   pps->int_value = 18;
   pps->double_value = 18.5;
 }
void print_string(char string_to_print[]) {
  printf("%s\n", string_to_print);
}
void change_string(char string1[], char* p_string[]) {
  string1[2] = "0";
  p_string[3] = "0";
}
