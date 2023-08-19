#include "AActor.hpp"
#include "AMercunaNavModifierVolume.hpp"
#include "AMercunaNavOctree.hpp"
#include "ECollisionChannel.hpp"
#include "EMerOctreeDebugDrawMode.hpp"
#include "FBox.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMerNavOctreeRenderingComponent.hpp"
#include "UMercunaOctreeSettings.hpp"
#include "UMercunaPath.hpp"
#include "UMercunaSpline.hpp"
void AMercunaNavOctree::MercunaBuildComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Mercuna.MercunaNavOctree.MercunaBuildComplete__DelegateSignature"));
    struct Params_MercunaBuildComplete__DelegateSignature {
    }; // Size: 0x0
    Params_MercunaBuildComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
AMercunaNavOctree* AMercunaNavOctree::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavOctree");
    return (AMercunaNavOctree*)res;
}
void AMercunaNavOctree::UpdateModifierVolumeParams(AMercunaNavModifierVolume* ModifierVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.UpdateModifierVolumeParams"));
    struct Params_UpdateModifierVolumeParams {
        AMercunaNavModifierVolume* ModifierVolume; // 0x0
    }; // Size: 0x8
    Params_UpdateModifierVolumeParams params{};
    params.ModifierVolume = (AMercunaNavModifierVolume*)ModifierVolume;
    ProcessEvent(func, &params);
}
void AMercunaNavOctree::RebuildActorVolume(AActor* Volume, bool StagedBuild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.RebuildActorVolume"));
    struct Params_RebuildActorVolume {
        AActor* Volume; // 0x0
        bool StagedBuild; // 0x8
    }; // Size: 0x9
    Params_RebuildActorVolume params{};
    params.Volume = (AActor*)Volume;
    params.StagedBuild = (bool)StagedBuild;
    ProcessEvent(func, &params);
}
void AMercunaNavOctree::ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.ClampToNavigable"));
    struct Params_ClampToNavigable {
        FVector Position; // 0x0
        float NavigationRadius; // 0xc
        float SearchRadius; // 0x10
        FVector ClampedPosition; // 0x14
        bool Result; // 0x20
    }; // Size: 0x21
    Params_ClampToNavigable params{};
    params.Position = (FVector)Position;
    params.NavigationRadius = (float)NavigationRadius;
    params.SearchRadius = (float)SearchRadius;
    params.ClampedPosition = (FVector)ClampedPosition;
    params.Result = (bool)Result;
    ProcessEvent(func, &params);
    ClampedPosition = params.ClampedPosition;
    Result = params.Result;
}
void AMercunaNavOctree::SetNavigationRotation(FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.SetNavigationRotation"));
    struct Params_SetNavigationRotation {
        FRotator Rotation; // 0x0
    }; // Size: 0xc
    Params_SetNavigationRotation params{};
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
    Rotation = params.Rotation;
}
void AMercunaNavOctree::RemoveModifierVolume(AMercunaNavModifierVolume* ModifierVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.RemoveModifierVolume"));
    struct Params_RemoveModifierVolume {
        AMercunaNavModifierVolume* ModifierVolume; // 0x0
    }; // Size: 0x8
    Params_RemoveModifierVolume params{};
    params.ModifierVolume = (AMercunaNavModifierVolume*)ModifierVolume;
    ProcessEvent(func, &params);
}
void AMercunaNavOctree::MercunaRebuildComplete__DelegateSignature(AActor* Volume) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Mercuna.MercunaNavOctree.MercunaRebuildComplete__DelegateSignature"));
    struct Params_MercunaRebuildComplete__DelegateSignature {
        AActor* Volume; // 0x0
    }; // Size: 0x8
    Params_MercunaRebuildComplete__DelegateSignature params{};
    params.Volume = (AActor*)Volume;
    ProcessEvent(func, &params);
}
void AMercunaNavOctree::Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.Raycast"));
    struct Params_Raycast {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        FVector HitPosition; // 0x1c
        bool RayHit; // 0x28
    }; // Size: 0x29
    Params_Raycast params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.HitPosition = (FVector)HitPosition;
    params.RayHit = (bool)RayHit;
    ProcessEvent(func, &params);
    RayHit = params.RayHit;
    HitPosition = params.HitPosition;
}
void AMercunaNavOctree::RebuildVolumes(TArray<FBox>& Volumes, bool StagedBuild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.RebuildVolumes"));
    struct Params_RebuildVolumes {
        TArray<FBox> Volumes; // 0x0
        bool StagedBuild; // 0x10
    }; // Size: 0x11
    Params_RebuildVolumes params{};
    params.Volumes = (TArray<FBox>)Volumes;
    params.StagedBuild = (bool)StagedBuild;
    ProcessEvent(func, &params);
    Volumes = params.Volumes;
}
void AMercunaNavOctree::MercunaLoadComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Mercuna.MercunaNavOctree.MercunaLoadComplete__DelegateSignature"));
    struct Params_MercunaLoadComplete__DelegateSignature {
    }; // Size: 0x0
    Params_MercunaLoadComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool AMercunaNavOctree::IsReachableSingle(FVector Start, FVector End, float NavigationRadius, float MaxPathLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.IsReachableSingle"));
    struct Params_IsReachableSingle {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        float MaxPathLength; // 0x1c
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsReachableSingle params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.MaxPathLength = (float)MaxPathLength;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AMercunaNavOctree::IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool AccuratePathLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.IsReachable"));
    struct Params_IsReachable {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        float MaxPathLength; // 0x1c
        bool AccuratePathLength; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_IsReachable params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.MaxPathLength = (float)MaxPathLength;
    params.AccuratePathLength = (bool)AccuratePathLength;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMercunaNavOctree::IsNavigableMulti(TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.IsNavigableMulti"));
    struct Params_IsNavigableMulti {
        TArray<FVector> Positions; // 0x0
        float NavigationRadius; // 0x10
        char pad_14[0x4];
        TArray<bool> Results; // 0x18
    }; // Size: 0x28
    Params_IsNavigableMulti params{};
    params.Positions = (TArray<FVector>)Positions;
    params.NavigationRadius = (float)NavigationRadius;
    params.Results = (TArray<bool>)Results;
    ProcessEvent(func, &params);
    Positions = params.Positions;
    Results = params.Results;
}
void AMercunaNavOctree::IsNavigable(FVector Position, float NavigationRadius, bool& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.IsNavigable"));
    struct Params_IsNavigable {
        FVector Position; // 0x0
        float NavigationRadius; // 0xc
        bool Result; // 0x10
    }; // Size: 0x11
    Params_IsNavigable params{};
    params.Position = (FVector)Position;
    params.NavigationRadius = (float)NavigationRadius;
    params.Result = (bool)Result;
    ProcessEvent(func, &params);
    Result = params.Result;
}
UMercunaSpline* AMercunaNavOctree::FindSplineToLocation(FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.FindSplineToLocation"));
    struct Params_FindSplineToLocation {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        float MaxSpeed; // 0x1c
        float MaxAcceleration; // 0x20
        bool AllowPartial; // 0x24
        char pad_25[0x3];
        float MaxPathLength; // 0x28
        char pad_2c[0x4];
        UMercunaSpline* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_FindSplineToLocation params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.MaxSpeed = (float)MaxSpeed;
    params.MaxAcceleration = (float)MaxAcceleration;
    params.AllowPartial = (bool)AllowPartial;
    params.MaxPathLength = (float)MaxPathLength;
    ProcessEvent(func, &params);
    return (UMercunaSpline*)params.ReturnValue;
}
UMercunaPath* AMercunaNavOctree::FindPathToLocation(FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.FindPathToLocation"));
    struct Params_FindPathToLocation {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        bool AllowPartial; // 0x1c
        char pad_1d[0x3];
        float MaxPathLength; // 0x20
        char pad_24[0x4];
        UMercunaPath* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_FindPathToLocation params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.AllowPartial = (bool)AllowPartial;
    params.MaxPathLength = (float)MaxPathLength;
    ProcessEvent(func, &params);
    return (UMercunaPath*)params.ReturnValue;
}
UMercunaPath* AMercunaNavOctree::FindPathToActor(FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.FindPathToActor"));
    struct Params_FindPathToActor {
        FVector Start; // 0x0
        char pad_c[0x4];
        AActor* GoalActor; // 0x10
        float NavigationRadius; // 0x18
        bool AllowPartial; // 0x1c
        char pad_1d[0x3];
        float MaxPathLength; // 0x20
        char pad_24[0x4];
        UMercunaPath* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_FindPathToActor params{};
    params.Start = (FVector)Start;
    params.GoalActor = (AActor*)GoalActor;
    params.NavigationRadius = (float)NavigationRadius;
    params.AllowPartial = (bool)AllowPartial;
    params.MaxPathLength = (float)MaxPathLength;
    ProcessEvent(func, &params);
    return (UMercunaPath*)params.ReturnValue;
}
void AMercunaNavOctree::CheckReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.CheckReachable"));
    struct Params_CheckReachable {
        FVector Start; // 0x0
        FVector End; // 0xc
        float NavigationRadius; // 0x18
        float MaxPathLength; // 0x1c
        bool Result; // 0x20
    }; // Size: 0x21
    Params_CheckReachable params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    params.MaxPathLength = (float)MaxPathLength;
    params.Result = (bool)Result;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void AMercunaNavOctree::Build() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavOctree.Build"));
    struct Params_Build {
    }; // Size: 0x0
    Params_Build params{};
    ProcessEvent(func, &params);
}
