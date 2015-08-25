#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/system.h"
#include "include/types.h"

kmain(){
  clearScreen();
  //print("Hello, this is my first kernel");
  //print("Hello, this is the second line");
  //printch(0x09);
  //clearLine(0,0);
  //clearLine(10,10);
  print("Welcome to NIDOS operating system\n  Plese enter a command\n");
  while(1){
    string ch= readStr();
    if(strEql(ch, "cmd")){
      print("You are in  cmd\n");
    }else if(strEql(ch, "clear")){
      clearScreen();
    }else{
      print("\nBad command!\n");
    }
    print("\n");
  }

}
