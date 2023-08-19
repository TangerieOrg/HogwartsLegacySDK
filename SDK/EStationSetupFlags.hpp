#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStationSetupFlags {
    DisallowParentProps = 0,
    Breakable = 1,
    NeedsServiceProvider = 2,
    EStationSetupFlags_MAX = 3,
};
#pragma pack(pop)
