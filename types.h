#ifndef TYPES_H
#define TYPES_H

/* Status will be used in fn. return type */
typedef enum
{
    success,
    failure
} Status;

typedef enum
{
    view,
    edit,
    unsupported
} OperationType;

typedef struct
{
    char title[100];
    char artist[100];
    char album[100];
    char year[10];
    char genre[50];

} MP3Info;
#endif
