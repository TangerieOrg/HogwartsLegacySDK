#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDecalComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
#pragma pack(push, 1)
class ADecalActor : public AActor {
public:
    UDecalComponent* Decal; // 0x248
    static ADecalActor* StaticClass();
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    UMaterialInterface* GetDecalMaterial();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
}; // Size: 0x250
#pragma pack(pop)
