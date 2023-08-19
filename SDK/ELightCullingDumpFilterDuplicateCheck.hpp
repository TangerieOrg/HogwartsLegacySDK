#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightCullingDumpFilterDuplicateCheck {
    None = 0,
    PerLevel = 1,
    AcrossLevels = 2,
    Global = 3,
    ELightCullingDumpFilterDuplicateCheck_MAX = 4,
};
#pragma pack(pop)
