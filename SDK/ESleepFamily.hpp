#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESleepFamily : uint8_t {
    Normal = 0,
    Sensitive = 1,
    Custom = 2,
    ESleepFamily_MAX = 3,
};
#pragma pack(pop)
