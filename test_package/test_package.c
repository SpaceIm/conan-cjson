#include <cjson/cJSON.h>

int main() {
  cJSON *monitor = cJSON_CreateObject();
  cJSON_Delete(monitor);

  return 0;
}
