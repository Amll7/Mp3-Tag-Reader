#include<stdio.h>
#include "operation.h"
#include "types.h"
#include "operation.h"
#include<string.h>

status read_and_validate_view_args(char *argv[])
{
  mp3info->fptr_mp3=fopen(argv[2],"r");
  if(fptr_mp3==NULL)
  {
    printf("ERROR: Unable to open MP3 file.\n");
    return failure;
  }
  else
  {
    char *mp3=strstr(argv[2],".mp3");
    if(mp3==NULL)
    {
        printf("ERROR: Invalid file format. Expected a .mp3 file.\n");
        return failure;
    }
    else
    {
        if(*(mp3+4)!='\0')
        {
             printf("ERROR: Invalid file format. Expected a .mp3 file.\n");
             return failure;
        }
        else
        {
            printf("INFO: Mp3 file validated successfully.\n");
        }
    }
  }
}



status view_metadata(char *argv[],MP3Info *mp3info)
{
    rewind(mp3info->fptr_mp3);
    skip_header(mp3info->fptr_mp3);
    for(int i=0;i<6;i++)
    {
        read_tag(mp3info);
        read_size(mp3info);
    }
    
}


void skip_header(FILE *fptr)
{
    fseek(fptr,10,SEEK_CUR);
}

status read_tag(MP3Info *mp3info)
{
    char buff[4];
    if(fread(buff,4,1,mp3info->fptr_mp3)!=1)
    {
     return failure;
    }


}

status read_size(MP3Info *mp3info)
{
   char buff[4];
   if(fread(buff,4,1,mp3info->fptr_mp3)!=1)
   {
    return failure;
   }
   


}