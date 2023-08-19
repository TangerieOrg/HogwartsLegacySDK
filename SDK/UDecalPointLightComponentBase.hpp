#pragma once
#include <cstdint>
#include "UDecalComponent.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UDecalPointLightComponentBase : public UDecalComponent {
public:
    UMaterialInterface* FalloffExponentDecalMaterial; // 0x310
    UMaterialInstanceDynamic* DecalMID; // 0x318
    UMaterialInterface* DecalMIDParent; // 0x320
    char pad_328[0x8];
    static UDecalPointLightComponentBase* StaticClass();
    void UpdateDecal();
    void SetInverseSquaredDecalMaterial(UMaterialInterface* NewInverseSquaredDecalMaterial);
    void SetFalloffExponentDecalMaterial(UMaterialInterface* NewFalloffExponentDecalMaterial);
}; // Size: 0x330
#pragma pack(pop)
