#include "FAvaMotionWarpingSyncPoint.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAnimSequenceBase.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMotionWarpingUtilities.hpp"
FAvaMotionWarpingSyncPoint UMotionWarpingUtilities::MakeMotionWarpingSyncPoint(FVector Location, FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionWarpingUtilities.MakeMotionWarpingSyncPoint"));
    struct Params_MakeMotionWarpingSyncPoint {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        char pad_18[0x8];
        FAvaMotionWarpingSyncPoint ReturnValue; // 0x20
    }; // Size: 0x40
    Params_MakeMotionWarpingSyncPoint params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FAvaMotionWarpingSyncPoint)params.ReturnValue;
}
UMotionWarpingUtilities* UMotionWarpingUtilities::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.MotionWarpingUtilities");
    return (UMotionWarpingUtilities*)res;
}
void UMotionWarpingUtilities::BreakMotionWarpingSyncPoint(FAvaMotionWarpingSyncPoint& SyncPoint, FVector& Location, FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionWarpingUtilities.BreakMotionWarpingSyncPoint"));
    struct Params_BreakMotionWarpingSyncPoint {
        FAvaMotionWarpingSyncPoint SyncPoint; // 0x0
        FVector Location; // 0x20
        FRotator Rotation; // 0x2c
    }; // Size: 0x38
    Params_BreakMotionWarpingSyncPoint params{};
    params.SyncPoint = (FAvaMotionWarpingSyncPoint)SyncPoint;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SyncPoint = params.SyncPoint;
    Rotation = params.Rotation;
    Location = params.Location;
}
FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(UAnimSequenceBase* Animation, float StartTime, float EndTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MotionWarpingUtilities.ExtractRootMotionFromAnimation"));
    struct Params_ExtractRootMotionFromAnimation {
        UAnimSequenceBase* Animation; // 0x0
        float StartTime; // 0x8
        float EndTime; // 0xc
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_ExtractRootMotionFromAnimation params{};
    params.Animation = (UAnimSequenceBase*)Animation;
    params.StartTime = (float)StartTime;
    params.EndTime = (float)EndTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
