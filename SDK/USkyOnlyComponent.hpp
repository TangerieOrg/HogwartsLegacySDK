#pragma once
#include <cstdint>
#include "FSkyAtmosphereSkyOnlyParameters.hpp"
#include "UStaticMeshComponent.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class USkyOnlyComponent : public UStaticMeshComponent {
public:
    UMaterialInterface* SingleDirectionalLightMaterial; // 0x510
    UMaterialInterface* DualDirectionalLightMaterial; // 0x518
    FSkyAtmosphereSkyOnlyParameters Parameters; // 0x520
    UMaterialInterface* SingleDirectionalLightMaterialOverride; // 0x570
    UMaterialInterface* DualDirectionalLightMaterialOverride; // 0x578
    static USkyOnlyComponent* StaticClass();
}; // Size: 0x580
#pragma pack(pop)
