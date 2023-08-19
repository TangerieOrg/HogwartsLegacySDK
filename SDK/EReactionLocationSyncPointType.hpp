#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReactionLocationSyncPointType : uint8_t {
    Instigator = 0,
    TargetPosition = 1,
    EReactionLocationSyncPointType_MAX = 2,
};
#pragma pack(pop)
