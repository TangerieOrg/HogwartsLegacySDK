#pragma once
#include <cstdint>
namespace ETargetSpeedPriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    FromWaterVolume = 2,
    FromMechanic = 3,
    FromReaction = 4,
    FromTrigger = 5,
    HighestPriority = 6,
    ETargetSpeedPriority_MAX = 7,
};
#pragma pack(pop)
}
