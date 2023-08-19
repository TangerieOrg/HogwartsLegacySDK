#pragma once
#include <cstdint>
#include "FAvaMotionWarpingSyncPoint.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary {
public:
    static UMotionWarpingUtilities* StaticClass();
    static FAvaMotionWarpingSyncPoint MakeMotionWarpingSyncPoint(FVector Location, FRotator Rotation);
    static FTransform ExtractRootMotionFromAnimation(UAnimSequenceBase* Animation, float StartTime, float EndTime);
    static void BreakMotionWarpingSyncPoint(FAvaMotionWarpingSyncPoint& SyncPoint, FVector& Location, FRotator& Rotation);
}; // Size: 0x28
#pragma pack(pop)
