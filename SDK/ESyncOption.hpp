#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESyncOption : uint8_t {
    Drive = 0,
    Passive = 1,
    Disabled = 2,
    ESyncOption_MAX = 3,
};
#pragma pack(pop)
