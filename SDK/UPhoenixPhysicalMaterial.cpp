#include "AActor.hpp"
#include "EImpactTypes.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USurfaceImpactTypeData.hpp"
UPhoenixPhysicalMaterial* UPhoenixPhysicalMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPhysicalMaterial");
    return (UPhoenixPhysicalMaterial*)res;
}
bool UPhoenixPhysicalMaterial::WeatherAndLandscapePhysicalMaterialRemap(FVector& ImpactLocation, UPrimitiveComponent* ImpactComponent, AActor* Instigator, bool FootFall, UPhoenixPhysicalMaterial*& OutVfxRemapPPM, UPhoenixPhysicalMaterial*& OutSfxRemapPPM) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixPhysicalMaterial.WeatherAndLandscapePhysicalMaterialRemap"));
    struct Params_WeatherAndLandscapePhysicalMaterialRemap {
        FVector ImpactLocation; // 0x0
        char pad_c[0x4];
        UPrimitiveComponent* ImpactComponent; // 0x10
        AActor* Instigator; // 0x18
        bool FootFall; // 0x20
        char pad_21[0x7];
        UPhoenixPhysicalMaterial* OutVfxRemapPPM; // 0x28
        UPhoenixPhysicalMaterial* OutSfxRemapPPM; // 0x30
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_WeatherAndLandscapePhysicalMaterialRemap params{};
    params.ImpactLocation = (FVector)ImpactLocation;
    params.ImpactComponent = (UPrimitiveComponent*)ImpactComponent;
    params.Instigator = (AActor*)Instigator;
    params.FootFall = (bool)FootFall;
    params.OutVfxRemapPPM = (UPhoenixPhysicalMaterial*)OutVfxRemapPPM;
    params.OutSfxRemapPPM = (UPhoenixPhysicalMaterial*)OutSfxRemapPPM;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
    OutVfxRemapPPM = params.OutVfxRemapPPM;
    OutSfxRemapPPM = params.OutSfxRemapPPM;
    return (bool)params.ReturnValue;
}
FMultiFX2Handle UPhoenixPhysicalMaterial::Impact(EImpactTypes InImpactType, FVector& ImpactLocation, FVector& ImpactNormal, FVector& ImpactDirection, UPrimitiveComponent* ImpactComponent, AActor* Instigator, FName ImpactBone, float ImpactScale, float AudioImpactVelocity, FVector& Velocity, bool UseRemap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixPhysicalMaterial.Impact"));
    struct Params_Impact {
        EImpactTypes InImpactType; // 0x0
        char pad_1[0x3];
        FVector ImpactLocation; // 0x4
        FVector ImpactNormal; // 0x10
        FVector ImpactDirection; // 0x1c
        UPrimitiveComponent* ImpactComponent; // 0x28
        AActor* Instigator; // 0x30
        FName ImpactBone; // 0x38
        float ImpactScale; // 0x40
        float AudioImpactVelocity; // 0x44
        FVector Velocity; // 0x48
        bool UseRemap; // 0x54
        char pad_55[0x3];
        FMultiFX2Handle ReturnValue; // 0x58
    }; // Size: 0x60
    Params_Impact params{};
    params.InImpactType = (EImpactTypes)InImpactType;
    params.ImpactLocation = (FVector)ImpactLocation;
    params.ImpactNormal = (FVector)ImpactNormal;
    params.ImpactDirection = (FVector)ImpactDirection;
    params.ImpactComponent = (UPrimitiveComponent*)ImpactComponent;
    params.Instigator = (AActor*)Instigator;
    params.ImpactBone = (FName)ImpactBone;
    params.ImpactScale = (float)ImpactScale;
    params.AudioImpactVelocity = (float)AudioImpactVelocity;
    params.Velocity = (FVector)Velocity;
    params.UseRemap = (bool)UseRemap;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
    Velocity = params.Velocity;
    ImpactNormal = params.ImpactNormal;
    ImpactDirection = params.ImpactDirection;
    return (FMultiFX2Handle)params.ReturnValue;
}
