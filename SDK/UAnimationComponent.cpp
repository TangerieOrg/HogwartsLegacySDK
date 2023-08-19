#include "EAnimationDirectionSource.hpp"
#include "EAnimationDirections.hpp"
#include "EFootPlantEnum.hpp"
#include "EStandardManagedPriority.hpp"
#include "FAnimationRequestLayer.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UAnimAsset_TickAssetPlayerProxy.hpp"
#include "UAnimLayersAsset.hpp"
#include "UAnimSequence.hpp"
#include "UAnimationComponent.hpp"
#include "UClass.hpp"
#include "UControlRig.hpp"
#include "UFloatProvider.hpp"
#include "UFunction.hpp"
#include "UIKDriver.hpp"
#include "UObject.hpp"
UAnimationComponent* UAnimationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationComponent");
    return (UAnimationComponent*)res;
}
void UAnimationComponent::StartSettingLookAtEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartSettingLookAtEnabled"));
    struct Params_StartSettingLookAtEnabled {
        bool bInEnabled; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_StartSettingLookAtEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::StartSettingPoseFixupEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartSettingPoseFixupEnabled"));
    struct Params_StartSettingPoseFixupEnabled {
        bool bInEnabled; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_StartSettingPoseFixupEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
bool UAnimationComponent::IsPlayerIKEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.IsPlayerIKEnabled"));
    struct Params_IsPlayerIKEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerIKEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimationComponent::SetPlayerIKEnabled(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetPlayerIKEnabled"));
    struct Params_SetPlayerIKEnabled {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetPlayerIKEnabled params{};
    params.State = (bool)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnimationComponent::SetDirectionTargetAndWeight(EAnimationDirections Direction, EAnimationDirectionSource Source, FVector TargetInWorldSpace, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetDirectionTargetAndWeight"));
    struct Params_SetDirectionTargetAndWeight {
        EAnimationDirections Direction; // 0x0
        EAnimationDirectionSource Source; // 0x1
        char pad_2[0x2];
        FVector TargetInWorldSpace; // 0x4
        float weight; // 0x10
    }; // Size: 0x14
    Params_SetDirectionTargetAndWeight params{};
    params.Direction = (EAnimationDirections)Direction;
    params.Source = (EAnimationDirectionSource)Source;
    params.TargetInWorldSpace = (FVector)TargetInWorldSpace;
    params.weight = (float)weight;
    ProcessEvent(func, &params);
}
void UAnimationComponent::StartSettingIKEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartSettingIKEnabled"));
    struct Params_StartSettingIKEnabled {
        bool bInEnabled; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_StartSettingIKEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::StartIKBlendIn(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartIKBlendIn"));
    struct Params_StartIKBlendIn {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_StartIKBlendIn params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::StartSettingFloorContactEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartSettingFloorContactEnabled"));
    struct Params_StartSettingFloorContactEnabled {
        bool bInEnabled; // 0x0
        EStandardManagedPriority InPriority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_StartSettingFloorContactEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::StartIKBlendOut(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.StartIKBlendOut"));
    struct Params_StartIKBlendOut {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_StartIKBlendOut params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::ResetDefaultDirectionNow(EAnimationDirections Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.ResetDefaultDirectionNow"));
    struct Params_ResetDefaultDirectionNow {
        EAnimationDirections Direction; // 0x0
    }; // Size: 0x1
    Params_ResetDefaultDirectionNow params{};
    params.Direction = (EAnimationDirections)Direction;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetLadderInfo(float BottomRungZ, float TopRungZ, float RungSpacing, FVector LadderWorldPos, FVector LadderFaceNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetLadderInfo"));
    struct Params_SetLadderInfo {
        float BottomRungZ; // 0x0
        float TopRungZ; // 0x4
        float RungSpacing; // 0x8
        FVector LadderWorldPos; // 0xc
        FVector LadderFaceNormal; // 0x18
    }; // Size: 0x24
    Params_SetLadderInfo params{};
    params.BottomRungZ = (float)BottomRungZ;
    params.TopRungZ = (float)TopRungZ;
    params.RungSpacing = (float)RungSpacing;
    params.LadderWorldPos = (FVector)LadderWorldPos;
    params.LadderFaceNormal = (FVector)LadderFaceNormal;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetLadderIKEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetLadderIKEnabled"));
    struct Params_SetLadderIKEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetLadderIKEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetGlobalIKEnabled(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetGlobalIKEnabled"));
    struct Params_SetGlobalIKEnabled {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetGlobalIKEnabled params{};
    params.State = (bool)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnimationComponent::FinishSettingIKEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.FinishSettingIKEnabled"));
    struct Params_FinishSettingIKEnabled {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_FinishSettingIKEnabled params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetDirectionWeight(EAnimationDirections Direction, EAnimationDirectionSource Source, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetDirectionWeight"));
    struct Params_SetDirectionWeight {
        EAnimationDirections Direction; // 0x0
        EAnimationDirectionSource Source; // 0x1
        char pad_2[0x2];
        float weight; // 0x4
    }; // Size: 0x8
    Params_SetDirectionWeight params{};
    params.Direction = (EAnimationDirections)Direction;
    params.Source = (EAnimationDirectionSource)Source;
    params.weight = (float)weight;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetDirectionTargetAndWeightNoCap(EAnimationDirections Direction, EAnimationDirectionSource Source, FVector TargetInWorldSpace, float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetDirectionTargetAndWeightNoCap"));
    struct Params_SetDirectionTargetAndWeightNoCap {
        EAnimationDirections Direction; // 0x0
        EAnimationDirectionSource Source; // 0x1
        char pad_2[0x2];
        FVector TargetInWorldSpace; // 0x4
        float weight; // 0x10
    }; // Size: 0x14
    Params_SetDirectionTargetAndWeightNoCap params{};
    params.Direction = (EAnimationDirections)Direction;
    params.Source = (EAnimationDirectionSource)Source;
    params.TargetInWorldSpace = (FVector)TargetInWorldSpace;
    params.weight = (float)weight;
    ProcessEvent(func, &params);
}
void UAnimationComponent::SetAnimLayersAsset(UAnimLayersAsset* InLayersAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.SetAnimLayersAsset"));
    struct Params_SetAnimLayersAsset {
        UAnimLayersAsset* InLayersAsset; // 0x0
    }; // Size: 0x8
    Params_SetAnimLayersAsset params{};
    params.InLayersAsset = (UAnimLayersAsset*)InLayersAsset;
    ProcessEvent(func, &params);
}
bool UAnimationComponent::IsGlobalIKEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.IsGlobalIKEnabled"));
    struct Params_IsGlobalIKEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGlobalIKEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UIKDriver* UAnimationComponent::GetIKDriverFromClass(UClass* IKDriverClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.GetIKDriverFromClass"));
    struct Params_GetIKDriverFromClass {
        UClass* IKDriverClass; // 0x0
        UIKDriver* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetIKDriverFromClass params{};
    params.IKDriverClass = (UClass*)IKDriverClass;
    ProcessEvent(func, &params);
    return (UIKDriver*)params.ReturnValue;
}
float UAnimationComponent::GetIKBlendWeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.GetIKBlendWeight"));
    struct Params_GetIKBlendWeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIKBlendWeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UAnimationComponent::GetDirectionTargetAndWeight(EAnimationDirections Direction, FVector& OutTargetInWorldSpace, float& OutWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.GetDirectionTargetAndWeight"));
    struct Params_GetDirectionTargetAndWeight {
        EAnimationDirections Direction; // 0x0
        char pad_1[0x3];
        FVector OutTargetInWorldSpace; // 0x4
        float OutWeight; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetDirectionTargetAndWeight params{};
    params.Direction = (EAnimationDirections)Direction;
    params.OutTargetInWorldSpace = (FVector)OutTargetInWorldSpace;
    params.OutWeight = (float)OutWeight;
    ProcessEvent(func, &params);
    OutTargetInWorldSpace = params.OutTargetInWorldSpace;
    OutWeight = params.OutWeight;
    return (bool)params.ReturnValue;
}
bool UAnimationComponent::GetDefaultDirection(EAnimationDirections Direction, FVector& OutDefaultDirectionInComponentSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.GetDefaultDirection"));
    struct Params_GetDefaultDirection {
        EAnimationDirections Direction; // 0x0
        char pad_1[0x3];
        FVector OutDefaultDirectionInComponentSpace; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetDefaultDirection params{};
    params.Direction = (EAnimationDirections)Direction;
    params.OutDefaultDirectionInComponentSpace = (FVector)OutDefaultDirectionInComponentSpace;
    ProcessEvent(func, &params);
    OutDefaultDirectionInComponentSpace = params.OutDefaultDirectionInComponentSpace;
    return (bool)params.ReturnValue;
}
void UAnimationComponent::FinishSettingPoseFixupEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.FinishSettingPoseFixupEnabled"));
    struct Params_FinishSettingPoseFixupEnabled {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_FinishSettingPoseFixupEnabled params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::FinishSettingLookAtEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.FinishSettingLookAtEnabled"));
    struct Params_FinishSettingLookAtEnabled {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_FinishSettingLookAtEnabled params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
void UAnimationComponent::FinishSettingFloorContactEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimationComponent.FinishSettingFloorContactEnabled"));
    struct Params_FinishSettingFloorContactEnabled {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        float InBlendDuration; // 0x10
    }; // Size: 0x14
    Params_FinishSettingFloorContactEnabled params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.Provider = (UObject*)Provider;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
