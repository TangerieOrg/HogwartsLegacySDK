#pragma once
#include <cstdint>
class UPostProcessComponent;
class UMaterialInterface;
#pragma pack(push, 1)
struct FDistanceFogCompute {
    UPostProcessComponent* FogPostProcess; // 0x0
    UMaterialInterface* ActivePPMaterial; // 0x8
}; // Size: 0x10
#pragma pack(pop)
