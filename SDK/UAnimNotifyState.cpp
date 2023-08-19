#include "UAnimNotifyState.hpp"
#include "UAnimSequenceBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
UAnimNotifyState* UAnimNotifyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotifyState");
    return (UAnimNotifyState*)res;
}
bool UAnimNotifyState::Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotifyState.Received_NotifyBegin"));
    struct Params_Received_NotifyBegin {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        float TotalDuration; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Received_NotifyBegin params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.TotalDuration = (float)TotalDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimNotifyState::Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotifyState.Received_NotifyTick"));
    struct Params_Received_NotifyTick {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        float FrameDeltaTime; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Received_NotifyTick params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.FrameDeltaTime = (float)FrameDeltaTime;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UAnimNotifyState::GetNotifyName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotifyState.GetNotifyName"));
    struct Params_GetNotifyName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNotifyName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UAnimNotifyState::Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotifyState.Received_NotifyEnd"));
    struct Params_Received_NotifyEnd {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Received_NotifyEnd params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
