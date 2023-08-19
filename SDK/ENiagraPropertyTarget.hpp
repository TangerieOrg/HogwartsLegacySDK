#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagraPropertyTarget : uint8_t {
    Target = 0,
    Instigator = 1,
    ENiagraPropertyTarget_MAX = 2,
};
#pragma pack(pop)
