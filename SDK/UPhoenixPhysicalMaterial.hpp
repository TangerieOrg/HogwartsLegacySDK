#pragma once
#include <cstdint>
#include "EImpactTypes.hpp"
#include "FMultiFX2Handle.hpp"
#include "UPhysicalMaterial.hpp"
class USurfaceImpactTypeData;
struct FVector;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class UPhoenixPhysicalMaterial : public UPhysicalMaterial {
public:
    EImpactTypes ImpactType; // 0x80
    char pad_81[0x3];
    float SlidingTime; // 0x84
    float ImpactDamageScale; // 0x88
    char pad_8c[0x4];
    USurfaceImpactTypeData* BaseSurfaceImpactFile; // 0x90
    char pad_98[0x50];
    static UPhoenixPhysicalMaterial* StaticClass();
    bool WeatherAndLandscapePhysicalMaterialRemap(FVector& ImpactLocation, UPrimitiveComponent* ImpactComponent, AActor* Instigator, bool FootFall, UPhoenixPhysicalMaterial*& OutVfxRemapPPM, UPhoenixPhysicalMaterial*& OutSfxRemapPPM);
    FMultiFX2Handle Impact(EImpactTypes InImpactType, FVector& ImpactLocation, FVector& ImpactNormal, FVector& ImpactDirection, UPrimitiveComponent* ImpactComponent, AActor* Instigator, FName ImpactBone, float ImpactScale, float AudioImpactVelocity, FVector& Velocity, bool UseRemap);
}; // Size: 0xe8
#pragma pack(pop)
