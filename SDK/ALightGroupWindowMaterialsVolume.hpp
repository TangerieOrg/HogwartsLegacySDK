#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLightGroupWindowMaterialsResources.hpp"
class ULightGroupComponent;
#pragma pack(push, 1)
class ALightGroupWindowMaterialsVolume : public AActor {
public:
    ULightGroupComponent* LightGroup; // 0x248
    FName WindowGroupMaterialParameter; // 0x250
    FLightGroupWindowMaterialsResources Resources; // 0x258
    static ALightGroupWindowMaterialsVolume* StaticClass();
    void RefreshBuildResults();
}; // Size: 0x268
#pragma pack(pop)
