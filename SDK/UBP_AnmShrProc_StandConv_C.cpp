#include "AActor.hpp"
#include "EFacialAnimType.hpp"
#include "UBP_AnmShrProc_StandConv_C.hpp"
#include "UEnum.hpp"
#include "UFunction.hpp"
#include "UT4_AnimationSharingStateProcessor.hpp"
UBP_AnmShrProc_StandConv_C* UBP_AnmShrProc_StandConv_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Tier4/SharedAnimData/BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C");
    return (UBP_AnmShrProc_StandConv_C*)res;
}
EFacialAnimType UBP_AnmShrProc_StandConv_C::GetFacialAnimType0(uint8_t InCurrentState, uint8_t CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/SharedAnimData/BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetFacialAnimType"));
    struct Params_GetFacialAnimType {
        uint8_t InCurrentState; // 0x0
        EFacialAnimType ReturnValue; // 0x1
        uint8_t CallFunc_GetValidValue_ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
    }; // Size: 0x6
    Params_GetFacialAnimType params{};
    params.InCurrentState = (uint8_t)InCurrentState;
    params.CallFunc_GetValidValue_ReturnValue = (uint8_t)CallFunc_GetValidValue_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (EFacialAnimType)params.ReturnValue;
}
void UBP_AnmShrProc_StandConv_C::ProcessActorState(int32_t& OutState, AActor* InActor, uint8_t CurrentState, uint8_t OnDemandState, bool& bShouldProcess, int32_t CallFunc_UpdateT4State_OutState, bool CallFunc_UpdateT4State_bShouldProcess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/SharedAnimData/BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.ProcessActorState"));
    struct Params_ProcessActorState {
        int32_t OutState; // 0x0
        char pad_4[0x4];
        AActor* InActor; // 0x8
        uint8_t CurrentState; // 0x10
        uint8_t OnDemandState; // 0x11
        bool bShouldProcess; // 0x12
        char pad_13[0x1];
        int32_t CallFunc_UpdateT4State_OutState; // 0x14
        bool CallFunc_UpdateT4State_bShouldProcess; // 0x18
    }; // Size: 0x19
    Params_ProcessActorState params{};
    params.OutState = (int32_t)OutState;
    params.InActor = (AActor*)InActor;
    params.CurrentState = (uint8_t)CurrentState;
    params.OnDemandState = (uint8_t)OnDemandState;
    params.bShouldProcess = (bool)bShouldProcess;
    params.CallFunc_UpdateT4State_OutState = (int32_t)CallFunc_UpdateT4State_OutState;
    params.CallFunc_UpdateT4State_bShouldProcess = (bool)CallFunc_UpdateT4State_bShouldProcess;
    ProcessEvent(func, &params);
    OutState = params.OutState;
    bShouldProcess = params.bShouldProcess;
}
UEnum* UBP_AnmShrProc_StandConv_C::GetAnimationStateEnum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/SharedAnimData/BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetAnimationStateEnum"));
    struct Params_GetAnimationStateEnum {
        UEnum* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimationStateEnum params{};
    ProcessEvent(func, &params);
    return (UEnum*)params.ReturnValue;
}
void UBP_AnmShrProc_StandConv_C::GetUsesEyeMouthAnims0(uint8_t InCurrentState, bool& bOutUsesEyeAnims, bool& bOutUsesMouthAnims, uint8_t CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/SharedAnimData/BP_AnmShrProc_StandConv.BP_AnmShrProc_StandConv_C.GetUsesEyeMouthAnims"));
    struct Params_GetUsesEyeMouthAnims {
        uint8_t InCurrentState; // 0x0
        bool bOutUsesEyeAnims; // 0x1
        bool bOutUsesMouthAnims; // 0x2
        uint8_t CallFunc_GetValidValue_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetUsesEyeMouthAnims params{};
    params.InCurrentState = (uint8_t)InCurrentState;
    params.bOutUsesEyeAnims = (bool)bOutUsesEyeAnims;
    params.bOutUsesMouthAnims = (bool)bOutUsesMouthAnims;
    params.CallFunc_GetValidValue_ReturnValue = (uint8_t)CallFunc_GetValidValue_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    bOutUsesEyeAnims = params.bOutUsesEyeAnims;
    bOutUsesMouthAnims = params.bOutUsesMouthAnims;
}
