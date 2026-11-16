#ifndef OPERATION_H
#define OPERATION_H

#include"types.h"


status check_operation_type(char opt);
status read_and_validate_view_args(char *argv[],MP3Info *mp3info);
status read_and_validate_edit_args(char *argv[],MP3Info *mp3info);

#endif