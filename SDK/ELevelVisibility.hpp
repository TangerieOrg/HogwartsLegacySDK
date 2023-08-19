#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELevelVisibility : uint8_t {
    Visible = 0,
    Hidden = 1,
    ELevelVisibility_MAX = 2,
};
#pragma pack(pop)
