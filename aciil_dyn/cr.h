#ifndef ACIIL_CR_H
#define ACIIL_CR_H
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define ROUND_BITS_TO_BYTES(bits) ((bits + 4)/8)

char * __aciil_merge_char_arrays(const char * path, const char * file_name)
{
  size_t path_len = strlen(path);
  size_t file_name_len = strlen(file_name);
  char * file_path = malloc(path_len+file_name_len+1);
  if(!file_path) return file_path;
  //concatenate to a string
  memcpy(file_path, path, path_len);
  memcpy(file_path + path_len, file_name, file_name_len+1);
  return file_path;
}


#endif