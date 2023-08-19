#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHermesMessageAdvancedDynamicPayloadType : uint8_t {
    None = 0,
    Name = 1,
    Boolean = 2,
    Integer = 3,
    Scalar = 4,
    EHermesMessageAdvancedDynamicPayloadType_MAX = 5,
};
#pragma pack(pop)
