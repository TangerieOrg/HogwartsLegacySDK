#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "EMovementMode.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTT_Biped_JumpLand_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UFunction.hpp"
void UBTT_Biped_JumpLand_C::Exit(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.Exit"));
    struct Params_Exit {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x3];
        float CallFunc_GetMoveStickValues_X; // 0x14
        float CallFunc_GetMoveStickValues_Y; // 0x18
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1; // 0x1d
        bool CallFunc_BooleanAND_ReturnValue; // 0x1e
    }; // Size: 0x1f
    Params_Exit params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetMoveStickValues_X = (float)CallFunc_GetMoveStickValues_X;
    params.CallFunc_GetMoveStickValues_Y = (float)CallFunc_GetMoveStickValues_Y;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_JumpLand_C* UBTT_Biped_JumpLand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C");
    return (UBTT_Biped_JumpLand_C*)res;
}
void UBTT_Biped_JumpLand_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::isSprinting(bool& Flag, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsUsingSpeedModifier_ReturnValue, ETargetSpeedMode::Type CallFunc_GetTargetSpeedModifier_OutState, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.isSprinting"));
    struct Params_isSprinting {
        bool Flag; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_IsUsingSpeedModifier_ReturnValue; // 0x10
        ETargetSpeedMode::Type CallFunc_GetTargetSpeedModifier_OutState; // 0x11
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x12
    }; // Size: 0x13
    Params_isSprinting params{};
    params.Flag = (bool)Flag;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsUsingSpeedModifier_ReturnValue = (bool)CallFunc_IsUsingSpeedModifier_ReturnValue;
    params.CallFunc_GetTargetSpeedModifier_OutState = (ETargetSpeedMode::Type)CallFunc_GetTargetSpeedModifier_OutState;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    Flag = params.Flag;
}
void UBTT_Biped_JumpLand_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::CheckMovementMode() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.CheckMovementMode"));
    struct Params_CheckMovementMode {
    }; // Size: 0x0
    Params_CheckMovementMode params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::MovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_JumpLand.BTT_Biped_JumpLand_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_MovementModeChanged params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void UBTT_Biped_JumpLand_C::ExecuteUbergraph_BTT_Biped_JumpLand(int32_t EntryPoint, bool CallFunc_IsSprinting_Flag, AActor* K2Node_Event_OwnerActor_2) {}
