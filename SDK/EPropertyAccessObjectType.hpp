#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPropertyAccessObjectType : uint8_t {
    None = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    EPropertyAccessObjectType_MAX = 4,
};
#pragma pack(pop)
