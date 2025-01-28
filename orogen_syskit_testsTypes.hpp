#ifndef orogen_syskit_tests_TYPES_HPP
#define orogen_syskit_tests_TYPES_HPP

#include <stdint.h>


namespace orogen_syskit_tests {
    struct Time {
        int64_t microseconds = 0;
        int64_t tv_sec = 0;
        int64_t tv_usec = 0;
    };

    struct TestType {
        /** @meta role logical_time */
        Time timestamp;
        int test_value = 0;
    };
}

#endif
