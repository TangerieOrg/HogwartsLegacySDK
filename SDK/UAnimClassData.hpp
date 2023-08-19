#pragma once
#include <cstdint>
#include "FAnimBlueprintFunction.hpp"
#include "FAnimBlueprintFunctionData.hpp"
#include "FAnimNotifyEvent.hpp"
#include "FBakedAnimationStateMachine.hpp"
#include "FExposedValueHandler.hpp"
#include "FPropertyAccessLibrary.hpp"
#include "UObject.hpp"
class USkeleton;
#pragma pack(push, 1)
class UAnimClassData : public UObject {
public:
    char pad_28[0x8];
    TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x30
    USkeleton* TargetSkeleton; // 0x40
    TArray<FAnimNotifyEvent> AnimNotifies; // 0x48
    char pad_58[0x50];
    TArray<FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8
    TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8
    TArray<void*> AnimNodeProperties; // 0xc8
    char pad_d8[0x10];
    TArray<void*> LinkedAnimGraphNodeProperties; // 0xe8
    char pad_f8[0x10];
    TArray<void*> LinkedAnimLayerNodeProperties; // 0x108
    char pad_118[0x10];
    TArray<void*> PreUpdateNodeProperties; // 0x128
    char pad_138[0x10];
    TArray<void*> DynamicResetNodeProperties; // 0x148
    char pad_158[0x10];
    TArray<void*> StateMachineNodeProperties; // 0x168
    char pad_178[0x10];
    TArray<void*> InitializationNodeProperties; // 0x188
    char pad_198[0x60];
    TArray<FName> SyncGroupNames; // 0x1f8
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x208
    char pad_218[0x50];
    FPropertyAccessLibrary PropertyAccessLibrary; // 0x268
    static UAnimClassData* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
