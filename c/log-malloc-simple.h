//
// Created by reinis on 23.12.4.
//

#ifndef OMCAM_ACQUISITION_LOG_MALLOC_SIMPLE_H
#define OMCAM_ACQUISITION_LOG_MALLOC_SIMPLE_H
#include <unistd.h>
#ifdef  __cplusplus
extern "C" {
#endif

/**
 * Returns the size of currently allocated memory
 * @return
 */
int64_t log_malloc_simple_get_allocated_size();

/**
 * Enables logging malloc/free calls
 */
void log_malloc_simple_log_enable();

#ifdef  __cplusplus
}
#endif

#endif //OMCAM_ACQUISITION_LOG_MALLOC_SIMPLE_H
