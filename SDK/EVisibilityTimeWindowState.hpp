#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVisibilityTimeWindowState {
    WithinTimeWindow = 0,
    OutSideTimeWindow = 1,
    WithinTimeWindowSpawn = 2,
    EVisibilityTimeWindowState_MAX = 3,
};
#pragma pack(pop)
