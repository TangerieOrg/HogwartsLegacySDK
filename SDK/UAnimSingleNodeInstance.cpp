#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UAnimSingleNodeInstance.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
float UAnimSingleNodeInstance::GetLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.GetLength"));
    struct Params_GetLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UAnimSingleNodeInstance* UAnimSingleNodeInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimSingleNodeInstance");
    return (UAnimSingleNodeInstance*)res;
}
void UAnimSingleNodeInstance::SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetPositionWithPreviousTime"));
    struct Params_SetPositionWithPreviousTime {
        float InPosition; // 0x0
        float InPreviousTime; // 0x4
        bool bFireNotifies; // 0x8
    }; // Size: 0x9
    Params_SetPositionWithPreviousTime params{};
    params.InPosition = (float)InPosition;
    params.InPreviousTime = (float)InPreviousTime;
    params.bFireNotifies = (bool)bFireNotifies;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::StopAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.StopAnim"));
    struct Params_StopAnim {
    }; // Size: 0x0
    Params_StopAnim params{};
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetReverse(bool bInReverse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetReverse"));
    struct Params_SetReverse {
        bool bInReverse; // 0x0
    }; // Size: 0x1
    Params_SetReverse params{};
    params.bInReverse = (bool)bInReverse;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetPreviewCurveOverride(FName& PoseName, float Value, bool bRemoveIfZero) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetPreviewCurveOverride"));
    struct Params_SetPreviewCurveOverride {
        FName PoseName; // 0x0
        float Value; // 0x8
        bool bRemoveIfZero; // 0xc
    }; // Size: 0xd
    Params_SetPreviewCurveOverride params{};
    params.PoseName = (FName)PoseName;
    params.Value = (float)Value;
    params.bRemoveIfZero = (bool)bRemoveIfZero;
    ProcessEvent(func, &params);
    PoseName = params.PoseName;
}
void UAnimSingleNodeInstance::SetPosition(float InPosition, bool bFireNotifies) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetPosition"));
    struct Params_SetPosition {
        float InPosition; // 0x0
        bool bFireNotifies; // 0x4
    }; // Size: 0x5
    Params_SetPosition params{};
    params.InPosition = (float)InPosition;
    params.bFireNotifies = (bool)bFireNotifies;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetPlaying(bool bIsPlaying) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetPlaying"));
    struct Params_SetPlaying {
        bool bIsPlaying; // 0x0
    }; // Size: 0x1
    Params_SetPlaying params{};
    params.bIsPlaying = (bool)bIsPlaying;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetPlayRate(float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetPlayRate"));
    struct Params_SetPlayRate {
        float InPlayRate; // 0x0
    }; // Size: 0x4
    Params_SetPlayRate params{};
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetLooping(bool bIsLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetLooping"));
    struct Params_SetLooping {
        bool bIsLooping; // 0x0
    }; // Size: 0x1
    Params_SetLooping params{};
    params.bIsLooping = (bool)bIsLooping;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::SetBlendSpaceInput(FVector& InBlendInput) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetBlendSpaceInput"));
    struct Params_SetBlendSpaceInput {
        FVector InBlendInput; // 0x0
    }; // Size: 0xc
    Params_SetBlendSpaceInput params{};
    params.InBlendInput = (FVector)InBlendInput;
    ProcessEvent(func, &params);
    InBlendInput = params.InBlendInput;
}
void UAnimSingleNodeInstance::SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.SetAnimationAsset"));
    struct Params_SetAnimationAsset {
        UAnimationAsset* NewAsset; // 0x0
        bool bIsLooping; // 0x8
        char pad_9[0x3];
        float InPlayRate; // 0xc
    }; // Size: 0x10
    Params_SetAnimationAsset params{};
    params.NewAsset = (UAnimationAsset*)NewAsset;
    params.bIsLooping = (bool)bIsLooping;
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
}
void UAnimSingleNodeInstance::PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.PlayAnim"));
    struct Params_PlayAnim {
        bool bIsLooping; // 0x0
        char pad_1[0x3];
        float InPlayRate; // 0x4
        float InStartPosition; // 0x8
    }; // Size: 0xc
    Params_PlayAnim params{};
    params.bIsLooping = (bool)bIsLooping;
    params.InPlayRate = (float)InPlayRate;
    params.InStartPosition = (float)InStartPosition;
    ProcessEvent(func, &params);
}
UAnimationAsset* UAnimSingleNodeInstance::GetAnimationAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimSingleNodeInstance.GetAnimationAsset"));
    struct Params_GetAnimationAsset {
        UAnimationAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimationAsset params{};
    ProcessEvent(func, &params);
    return (UAnimationAsset*)params.ReturnValue;
}
