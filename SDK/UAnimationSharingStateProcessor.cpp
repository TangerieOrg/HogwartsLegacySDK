#include "AActor.hpp"
#include "UAnimationSharingStateProcessor.hpp"
#include "UEnum.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAnimationSharingStateProcessor::ProcessActorState(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState"));
    struct Params_ProcessActorState {
        int32_t OutState; // 0x0
        char pad_4[0x4];
        AActor* InActor; // 0x8
        uint8_t CurrentState; // 0x10
        uint8_t OnDemandState; // 0x11
        bool bShouldProcess; // 0x12
    }; // Size: 0x13
    Params_ProcessActorState params{};
    params.OutState = (int32_t)OutState;
    params.InActor = (AActor*)InActor;
    params.CurrentState = (uint8_t)CurrentState;
    params.OnDemandState = (uint8_t)OnDemandState;
    params.bShouldProcess = (bool)bShouldProcess;
    ProcessEvent(func, &params);
    OutState = params.OutState;
    bShouldProcess = params.bShouldProcess;
}
UAnimationSharingStateProcessor* UAnimationSharingStateProcessor::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimationSharingStateProcessor");
    return (UAnimationSharingStateProcessor*)res;
}
UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum"));
    struct Params_GetAnimationStateEnum {
        UEnum* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimationStateEnum params{};
    ProcessEvent(func, &params);
    return (UEnum*)params.ReturnValue;
}
