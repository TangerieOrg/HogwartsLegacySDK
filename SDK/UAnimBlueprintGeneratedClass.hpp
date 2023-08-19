#pragma once
#include <cstdint>
#include "FAnimNotifyEvent.hpp"
#include "FBakedAnimationStateMachine.hpp"
#include "FExposedValueHandler.hpp"
#include "FPropertyAccessLibrary.hpp"
#include "UBlueprintGeneratedClass.hpp"
class USkeleton;
#pragma pack(push, 1)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:
    char pad_328[0x8];
    TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x330
    USkeleton* TargetSkeleton; // 0x340
    TArray<FAnimNotifyEvent> AnimNotifies; // 0x348
    char pad_358[0xd0];
    TArray<FName> SyncGroupNames; // 0x428
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x438
    char pad_448[0xa0];
    FPropertyAccessLibrary PropertyAccessLibrary; // 0x4e8
    static UAnimBlueprintGeneratedClass* StaticClass();
}; // Size: 0x5b0
#pragma pack(pop)
