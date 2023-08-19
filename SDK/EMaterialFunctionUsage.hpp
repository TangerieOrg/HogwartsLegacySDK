#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialFunctionUsage : uint8_t {
    Default = 0,
    MaterialLayer = 1,
    MaterialLayerBlend = 2,
    EMaterialFunctionUsage_MAX = 3,
};
#pragma pack(pop)
