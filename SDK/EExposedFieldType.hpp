#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EExposedFieldType : uint8_t {
    Invalid = 0,
    Property = 1,
    Function = 2,
    EExposedFieldType_MAX = 3,
};
#pragma pack(pop)
