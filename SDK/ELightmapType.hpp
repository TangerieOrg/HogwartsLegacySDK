#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightmapType : uint8_t {
    Default = 0,
    ForceSurface = 1,
    ForceVolumetric = 2,
    ELightmapType_MAX = 3,
};
#pragma pack(pop)
