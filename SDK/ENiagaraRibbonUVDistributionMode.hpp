#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraRibbonUVDistributionMode : int32_t {
    ScaledUniformly = 0,
    ScaledUsingRibbonSegmentLength = 1,
    TiledOverRibbonLength = 2,
    TiledFromStartOverRibbonLength = 3,
    ENiagaraRibbonUVDistributionMode_MAX = 4,
};
#pragma pack(pop)
