#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELightingBuildQuality : uint8_t {
    Quality_Preview = 0,
    Quality_Medium = 1,
    Quality_High = 2,
    Quality_Production = 3,
    Quality_MAX = 4,
};
#pragma pack(pop)
