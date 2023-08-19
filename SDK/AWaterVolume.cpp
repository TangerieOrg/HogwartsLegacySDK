#include "AWaterVolume.hpp"
#include "AWaterVolumeBase.hpp"
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULakeAudioComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UWaterTileMeshComponent.hpp"
AWaterVolume* AWaterVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaterVolume");
    return (AWaterVolume*)res;
}
void AWaterVolume::SetupWater(FBoxSphereBounds i_Bounds, UStaticMesh* i_DeepCollision, FVector& i_DeepLocation, UStaticMesh* i_ShallowCollision, FVector& i_ShallowLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolume.SetupWater"));
    struct Params_SetupWater {
        FBoxSphereBounds i_Bounds; // 0x0
        char pad_1c[0x4];
        UStaticMesh* i_DeepCollision; // 0x20
        FVector i_DeepLocation; // 0x28
        char pad_34[0x4];
        UStaticMesh* i_ShallowCollision; // 0x38
        FVector i_ShallowLocation; // 0x40
    }; // Size: 0x4c
    Params_SetupWater params{};
    params.i_Bounds = (FBoxSphereBounds)i_Bounds;
    params.i_DeepCollision = (UStaticMesh*)i_DeepCollision;
    params.i_DeepLocation = (FVector)i_DeepLocation;
    params.i_ShallowCollision = (UStaticMesh*)i_ShallowCollision;
    params.i_ShallowLocation = (FVector)i_ShallowLocation;
    ProcessEvent(func, &params);
    i_DeepLocation = params.i_DeepLocation;
    i_ShallowLocation = params.i_ShallowLocation;
}
void AWaterVolume::RecalculateDepth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolume.RecalculateDepth"));
    struct Params_RecalculateDepth {
    }; // Size: 0x0
    Params_RecalculateDepth params{};
    ProcessEvent(func, &params);
}
