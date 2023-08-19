#include "UAnimNotify.hpp"
#include "UAnimSequenceBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
bool UAnimNotify::Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotify.Received_Notify"));
    struct Params_Received_Notify {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Received_Notify params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAnimNotify* UAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify");
    return (UAnimNotify*)res;
}
FString UAnimNotify::GetNotifyName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotify.GetNotifyName"));
    struct Params_GetNotifyName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetNotifyName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
