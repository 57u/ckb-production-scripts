#include "exec_func.h"


int LLVMFuzzerTestOneInput(uint8_t *data, size_t size) {
  exec_func(data, size);
  return 0;
}
