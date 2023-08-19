#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENDIExport_GPUAllocationMode : uint8_t {
    FixedSize = 0,
    PerParticle = 1,
    ENDIExport_MAX = 2,
};
#pragma pack(pop)
