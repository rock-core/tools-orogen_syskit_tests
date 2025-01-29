#ifndef orogen_syskit_tests_TYPES_HPP
#define orogen_syskit_tests_TYPES_HPP

#include <base/Time.hpp>

namespace orogen_syskit_tests {
    struct TestType {
        /** @meta role logical_time */
        base::Time timestamp;
    };
}

#endif
