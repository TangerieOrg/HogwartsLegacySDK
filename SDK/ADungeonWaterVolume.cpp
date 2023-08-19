#include "ADungeonWaterVolume.hpp"
#include "AWaterVolumeBase.hpp"
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
void ADungeonWaterVolume::SetupWater(FBoxSphereBounds i_Bounds, UStaticMesh* i_SurfaceMesh, FVector& i_SurfaceLocation, UStaticMesh* i_DeepCollision, FVector& i_DeepLocation, UStaticMesh* i_ShallowCollision, FVector& i_ShallowLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DungeonWaterVolume.SetupWater"));
    struct Params_SetupWater {
        FBoxSphereBounds i_Bounds; // 0x0
        char pad_1c[0x4];
        UStaticMesh* i_SurfaceMesh; // 0x20
        FVector i_SurfaceLocation; // 0x28
        char pad_34[0x4];
        UStaticMesh* i_DeepCollision; // 0x38
        FVector i_DeepLocation; // 0x40
        char pad_4c[0x4];
        UStaticMesh* i_ShallowCollision; // 0x50
        FVector i_ShallowLocation; // 0x58
    }; // Size: 0x64
    Params_SetupWater params{};
    params.i_Bounds = (FBoxSphereBounds)i_Bounds;
    params.i_SurfaceMesh = (UStaticMesh*)i_SurfaceMesh;
    params.i_SurfaceLocation = (FVector)i_SurfaceLocation;
    params.i_DeepCollision = (UStaticMesh*)i_DeepCollision;
    params.i_DeepLocation = (FVector)i_DeepLocation;
    params.i_ShallowCollision = (UStaticMesh*)i_ShallowCollision;
    params.i_ShallowLocation = (FVector)i_ShallowLocation;
    ProcessEvent(func, &params);
    i_SurfaceLocation = params.i_SurfaceLocation;
    i_DeepLocation = params.i_DeepLocation;
    i_ShallowLocation = params.i_ShallowLocation;
}
ADungeonWaterVolume* ADungeonWaterVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DungeonWaterVolume");
    return (ADungeonWaterVolume*)res;
}
void ADungeonWaterVolume::FinalizeSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DungeonWaterVolume.FinalizeSetup"));
    struct Params_FinalizeSetup {
    }; // Size: 0x0
    Params_FinalizeSetup params{};
    ProcessEvent(func, &params);
}
