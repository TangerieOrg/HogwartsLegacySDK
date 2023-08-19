#pragma once
#include <cstdint>
#include "AActor.hpp"
class UTesselatedPlaneComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class ATesselatedPlane : public AActor {
public:
    UTesselatedPlaneComponent* PlaneMesh; // 0x248
    UMaterialInterface* PlaneMaterial; // 0x250
    bool bUseDynamicMaterial; // 0x258
    char pad_259[0x7];
    UMaterialInstanceDynamic* PlaneDynamicMaterial; // 0x260
    static ATesselatedPlane* StaticClass();
    void Construct();
}; // Size: 0x268
#pragma pack(pop)
