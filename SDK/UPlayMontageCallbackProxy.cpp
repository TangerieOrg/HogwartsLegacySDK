#include "FBranchingPointNotifyPayload.hpp"
#include "UAnimMontage.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayMontageCallbackProxy.hpp"
#include "USkeletalMeshComponent.hpp"
UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy");
    return (UPlayMontageCallbackProxy*)res;
}
UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));
    struct Params_CreateProxyObjectForPlayMontage {
        USkeletalMeshComponent* InSkeletalMeshComponent; // 0x0
        UAnimMontage* MontageToPlay; // 0x8
        float PlayRate; // 0x10
        float StartingPosition; // 0x14
        FName StartingSection; // 0x18
        UPlayMontageCallbackProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateProxyObjectForPlayMontage params{};
    params.InSkeletalMeshComponent = (USkeletalMeshComponent*)InSkeletalMeshComponent;
    params.MontageToPlay = (UAnimMontage*)MontageToPlay;
    params.PlayRate = (float)PlayRate;
    params.StartingPosition = (float)StartingPosition;
    params.StartingSection = (FName)StartingSection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPlayMontageCallbackProxy*)params.ReturnValue;
}
void UPlayMontageCallbackProxy::OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));
    struct Params_OnNotifyEndReceived {
        FName NotifyName; // 0x0
        FBranchingPointNotifyPayload BranchingPointNotifyPayload; // 0x8
    }; // Size: 0x28
    Params_OnNotifyEndReceived params{};
    params.NotifyName = (FName)NotifyName;
    params.BranchingPointNotifyPayload = (FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    ProcessEvent(func, &params);
    BranchingPointNotifyPayload = params.BranchingPointNotifyPayload;
}
void UPlayMontageCallbackProxy::OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));
    struct Params_OnNotifyBeginReceived {
        FName NotifyName; // 0x0
        FBranchingPointNotifyPayload BranchingPointNotifyPayload; // 0x8
    }; // Size: 0x28
    Params_OnNotifyBeginReceived params{};
    params.NotifyName = (FName)NotifyName;
    params.BranchingPointNotifyPayload = (FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    ProcessEvent(func, &params);
    BranchingPointNotifyPayload = params.BranchingPointNotifyPayload;
}
void UPlayMontageCallbackProxy::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));
    struct Params_OnMontageEnded {
        UAnimMontage* Montage; // 0x0
        bool bInterrupted; // 0x8
    }; // Size: 0x9
    Params_OnMontageEnded params{};
    params.Montage = (UAnimMontage*)Montage;
    params.bInterrupted = (bool)bInterrupted;
    ProcessEvent(func, &params);
}
void UPlayMontageCallbackProxy::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));
    struct Params_OnMontageBlendingOut {
        UAnimMontage* Montage; // 0x0
        bool bInterrupted; // 0x8
    }; // Size: 0x9
    Params_OnMontageBlendingOut params{};
    params.Montage = (UAnimMontage*)Montage;
    params.bInterrupted = (bool)bInterrupted;
    ProcessEvent(func, &params);
}
