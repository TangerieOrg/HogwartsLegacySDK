#include "AActor.hpp"
#include "EFacialAnimType.hpp"
#include "UAnimationSharingStateProcessor.hpp"
#include "UFunction.hpp"
#include "UT4_AnimationSharingStateProcessor.hpp"
void UT4_AnimationSharingStateProcessor::ProcessActorState_Implementation(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.T4_AnimationSharingStateProcessor.ProcessActorState_Implementation"));
    struct Params_ProcessActorState_Implementation {
        int32_t OutState; // 0x0
        char pad_4[0x4];
        AActor* InActor; // 0x8
        uint8_t CurrentState; // 0x10
        uint8_t OnDemandState; // 0x11
        bool bShouldProcess; // 0x12
    }; // Size: 0x13
    Params_ProcessActorState_Implementation params{};
    params.OutState = (int32_t)OutState;
    params.InActor = (AActor*)InActor;
    params.CurrentState = (uint8_t)CurrentState;
    params.OnDemandState = (uint8_t)OnDemandState;
    params.bShouldProcess = (bool)bShouldProcess;
    ProcessEvent(func, &params);
    bShouldProcess = params.bShouldProcess;
    OutState = params.OutState;
}
UT4_AnimationSharingStateProcessor* UT4_AnimationSharingStateProcessor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.T4_AnimationSharingStateProcessor");
    return (UT4_AnimationSharingStateProcessor*)res;
}
void UT4_AnimationSharingStateProcessor::GetUsesEyeMouthAnims(uint8_t InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.T4_AnimationSharingStateProcessor.GetUsesEyeMouthAnims"));
    struct Params_GetUsesEyeMouthAnims {
        uint8_t InCurrentState; // 0x0
        bool bOutUsesEyeAnims; // 0x1
        bool bOutUsesMouthAnims; // 0x2
    }; // Size: 0x3
    Params_GetUsesEyeMouthAnims params{};
    params.InCurrentState = (uint8_t)InCurrentState;
    params.bOutUsesEyeAnims = (bool)bOutUsesEyeAnims;
    params.bOutUsesMouthAnims = (bool)bOutUsesMouthAnims;
    ProcessEvent(func, &params);
    bOutUsesEyeAnims = params.bOutUsesEyeAnims;
    bOutUsesMouthAnims = params.bOutUsesMouthAnims;
}
void UT4_AnimationSharingStateProcessor::UpdateT4State(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.T4_AnimationSharingStateProcessor.UpdateT4State"));
    struct Params_UpdateT4State {
        int32_t OutState; // 0x0
        char pad_4[0x4];
        AActor* InActor; // 0x8
        uint8_t CurrentState; // 0x10
        uint8_t OnDemandState; // 0x11
        bool bShouldProcess; // 0x12
    }; // Size: 0x13
    Params_UpdateT4State params{};
    params.OutState = (int32_t)OutState;
    params.InActor = (AActor*)InActor;
    params.CurrentState = (uint8_t)CurrentState;
    params.OnDemandState = (uint8_t)OnDemandState;
    params.bShouldProcess = (bool)bShouldProcess;
    ProcessEvent(func, &params);
    bShouldProcess = params.bShouldProcess;
    OutState = params.OutState;
}
EFacialAnimType UT4_AnimationSharingStateProcessor::GetFacialAnimType(uint8_t InCurrentState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.T4_AnimationSharingStateProcessor.GetFacialAnimType"));
    struct Params_GetFacialAnimType {
        uint8_t InCurrentState; // 0x0
        EFacialAnimType ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetFacialAnimType params{};
    params.InCurrentState = (uint8_t)InCurrentState;
    ProcessEvent(func, &params);
    return (EFacialAnimType)params.ReturnValue;
}
