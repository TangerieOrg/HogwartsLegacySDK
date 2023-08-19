#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIHealthBarType : uint8_t {
    HBT_Normal = 0,
    HBT_Boss = 1,
    HBT_Named = 2,
    HBT_Student = 3,
    HBT_None = 4,
    HBT_Count = 5,
    HBT_MAX = 6,
};
#pragma pack(pop)
