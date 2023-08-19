#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UMaterialParameterCollection;
class UCurveFloat;
#pragma pack(push, 1)
class UGlobalSubsurfaceModComponent : public UActorComponent {
public:
    UMaterialParameterCollection* GlobalSubsurfaceMPC; // 0xc8
    UCurveFloat* GlobalSubsurfaceCurve; // 0xd0
    float CurrentModValue; // 0xd8
    bool bOutdoorsOnly; // 0xdc
    bool bDisable; // 0xdd
    char pad_de[0x2];
    static UGlobalSubsurfaceModComponent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
