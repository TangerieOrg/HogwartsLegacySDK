#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStationSelectionMethod : uint8_t {
    EQS_SELECT_CLOSEST = 0,
    EQS_SELECT_FARTHEST = 1,
    EQS_SELECT_RANDOM = 2,
    EQS_SELECT_ALL = 3,
    EQS_SELECT_MAX = 4,
};
#pragma pack(pop)
