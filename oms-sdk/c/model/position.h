/*
 * position.h
 *
 * 
 */

#ifndef _position_H_
#define _position_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct position_t position_t;

#include "position_data.h"



typedef struct position_t {
    char *type; // string
    char *exchange_name; // string
    list_t *data; //nonprimitive container

} position_t;

position_t *position_create(
    char *type,
    char *exchange_name,
    list_t *data
);

void position_free(position_t *position);

position_t *position_parseFromJSON(cJSON *positionJSON);

cJSON *position_convertToJSON(position_t *position);

#endif /* _position_H_ */

