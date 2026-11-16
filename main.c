#include<stdio.h>
#include "operation.h"
#include "types.h"
#include "operation.h"


int main(int argc,char **argv)
{
 MP3Info mp3info;
 char opt=argv[1][1];
 if(check_operation_type(opt)==view)
 {
  printf("INFO: Selected operation: View\n");
  if(read_and_validate_view_args(argv,&mp3info)==failure)
  {
        return 0;
  }
 }
}
OperationType check_operation_type(char opt)
{
    if(opt=='v')
    {
        return view;
    }
    else if(opt=='e')
    {
        return edit;
    }
    else
    {
        return unsupported;
    }
}
