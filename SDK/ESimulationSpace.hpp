#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESimulationSpace : uint8_t {
    ComponentSpace = 0,
    WorldSpace = 1,
    BaseBoneSpace = 2,
    ESimulationSpace_MAX = 3,
};
#pragma pack(pop)
