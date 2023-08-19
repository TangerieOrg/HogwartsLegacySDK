#pragma once
#include <cstdint>
#include "FSceneComponentInstanceData.hpp"
#pragma pack(push, 1)
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData {
    char pad_b8[0xd0];
}; // Size: 0x188
#pragma pack(pop)
