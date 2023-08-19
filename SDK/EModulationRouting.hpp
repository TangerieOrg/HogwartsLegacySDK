#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EModulationRouting : uint8_t {
    Disable = 0,
    Inherit = 1,
    Override = 2,
    EModulationRouting_MAX = 3,
};
#pragma pack(pop)
