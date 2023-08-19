#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformGetterType : uint8_t {
    Initial = 0,
    Current = 1,
    Max = 2,
};
#pragma pack(pop)
