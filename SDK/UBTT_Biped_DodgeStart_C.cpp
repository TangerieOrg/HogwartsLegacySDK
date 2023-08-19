#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AChannelingSpellTool.hpp"
#include "ACharacter.hpp"
#include "AController.hpp"
#include "ALumosSpellTool.hpp"
#include "APawn.hpp"
#include "ASpellTool.hpp"
#include "AWandTool.hpp"
#include "ECollisionResponse.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_DodgeStart_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBTT_Biped_DodgeStart_C::LockTarget(bool Condition, AActor* InTargetActor, ABiped_Player* NewLocalVar_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.LockTarget"));
    struct Params_LockTarget {
        bool Condition; // 0x0
        char pad_1[0x7];
        AActor* InTargetActor; // 0x8
        ABiped_Player* NewLocalVar_2; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        AController* CallFunc_GetController_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
    }; // Size: 0x31
    Params_LockTarget params{};
    params.Condition = (bool)Condition;
    params.InTargetActor = (AActor*)InTargetActor;
    params.NewLocalVar_2 = (ABiped_Player*)NewLocalVar_2;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
UBTT_Biped_DodgeStart_C* UBTT_Biped_DodgeStart_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C");
    return (UBTT_Biped_DodgeStart_C*)res;
}
void UBTT_Biped_DodgeStart_C::FlushQueuedActions(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess) {}
void UBTT_Biped_DodgeStart_C::CancelChannelSpell(ABiped_Character* BipedCharacter, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, AChannelingSpellTool* K2Node_DynamicCast_AsChanneling_Spell_Tool, bool K2Node_DynamicCast_bSuccess, ALumosSpellTool* K2Node_DynamicCast_AsLumos_Spell_Tool, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CancelChannelSpell"));
    struct Params_CancelChannelSpell {
        ABiped_Character* BipedCharacter; // 0x0
        AWandTool* CallFunc_GetWand_ReturnValue; // 0x8
        ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue; // 0x10
        AChannelingSpellTool* K2Node_DynamicCast_AsChanneling_Spell_Tool; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ALumosSpellTool* K2Node_DynamicCast_AsLumos_Spell_Tool; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_CancelChannelSpell params{};
    params.BipedCharacter = (ABiped_Character*)BipedCharacter;
    params.CallFunc_GetWand_ReturnValue = (AWandTool*)CallFunc_GetWand_ReturnValue;
    params.CallFunc_GetActiveSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetActiveSpellTool_ReturnValue;
    params.K2Node_DynamicCast_AsChanneling_Spell_Tool = (AChannelingSpellTool*)K2Node_DynamicCast_AsChanneling_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsLumos_Spell_Tool = (ALumosSpellTool*)K2Node_DynamicCast_AsLumos_Spell_Tool;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::UnlockTarget(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.UnlockTarget"));
    struct Params_UnlockTarget {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        AController* CallFunc_GetController_ReturnValue; // 0x8
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_UnlockTarget params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::CheckForAutoFireAfterDodge(FVariantMapHandle NewLocalVar_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue, FVariantMapHandle K2Node_MakeStruct_VariantMapHandle, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue, bool CallFunc_GetVariantFVector_FromHandle_bFound, FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CheckForAutoFireAfterDodge"));
    struct Params_CheckForAutoFireAfterDodge {
        FVariantMapHandle NewLocalVar_1; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue; // 0x10
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x18
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x20
        int32_t CallFunc_GetValueAsInt_ReturnValue; // 0x28
        FVariantMapHandle K2Node_MakeStruct_VariantMapHandle; // 0x2c
        bool CallFunc_GetVariantBool_FromHandle_bFound; // 0x30
        bool CallFunc_GetVariantBool_FromHandle_ReturnValue; // 0x31
        bool CallFunc_GetVariantFVector_FromHandle_bFound; // 0x32
        char pad_33[0x1];
        FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue; // 0x34
        bool CallFunc_GetVariantInt32_FromHandle_bFound; // 0x40
        char pad_41[0x3];
        int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue; // 0x44
    }; // Size: 0x48
    Params_CheckForAutoFireAfterDodge params{};
    params.NewLocalVar_1 = (FVariantMapHandle)NewLocalVar_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetBipedAnimInstance_ReturnValue = (UBiped_AnimInstance*)CallFunc_GetBipedAnimInstance_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsInt_ReturnValue = (int32_t)CallFunc_GetValueAsInt_ReturnValue;
    params.K2Node_MakeStruct_VariantMapHandle = (FVariantMapHandle)K2Node_MakeStruct_VariantMapHandle;
    params.CallFunc_GetVariantBool_FromHandle_bFound = (bool)CallFunc_GetVariantBool_FromHandle_bFound;
    params.CallFunc_GetVariantBool_FromHandle_ReturnValue = (bool)CallFunc_GetVariantBool_FromHandle_ReturnValue;
    params.CallFunc_GetVariantFVector_FromHandle_bFound = (bool)CallFunc_GetVariantFVector_FromHandle_bFound;
    params.CallFunc_GetVariantFVector_FromHandle_ReturnValue = (FVector)CallFunc_GetVariantFVector_FromHandle_ReturnValue;
    params.CallFunc_GetVariantInt32_FromHandle_bFound = (bool)CallFunc_GetVariantInt32_FromHandle_bFound;
    params.CallFunc_GetVariantInt32_FromHandle_ReturnValue = (int32_t)CallFunc_GetVariantInt32_FromHandle_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::Stop(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.Stop"));
    struct Params_Stop {
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x0
        UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_Stop params{};
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Anim_Instance = (UAmbulatory_AnimInstance*)K2Node_DynamicCast_AsAmbulatory_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ToggleDamageCollision(ECollisionResponse CollisionResponse, AActor* OwnerActor, AActor* NewLocalVar_0) {}
void UBTT_Biped_DodgeStart_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ToggleLockOnCamera"));
    struct Params_ToggleLockOnCamera {
        UObject* Object; // 0x0
        bool Allowed; // 0x8
        char pad_9[0x7];
        APawn* K2Node_DynamicCast_AsPawn; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AController* CallFunc_GetController_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_ToggleLockOnCamera params{};
    params.Object = (UObject*)Object;
    params.Allowed = (bool)Allowed;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ExecuteUbergraph_BTT_Biped_DodgeStart(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTT_Biped_DodgeStart_C::CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::BlinkTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.BlinkTimerExpired"));
    struct Params_BlinkTimerExpired {
    }; // Size: 0x0
    Params_BlinkTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::AimAtTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.AimAtTimerExpired"));
    struct Params_AimAtTimerExpired {
    }; // Size: 0x0
    Params_AimAtTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_DodgeStart_C::LockTargetTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_DodgeStart.BTT_Biped_DodgeStart_C.LockTargetTimerExpired"));
    struct Params_LockTargetTimerExpired {
    }; // Size: 0x0
    Params_LockTargetTimerExpired params{};
    ProcessEvent(func, &params);
}
