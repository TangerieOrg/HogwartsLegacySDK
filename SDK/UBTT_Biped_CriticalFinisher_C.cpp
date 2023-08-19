#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "AController.hpp"
#include "APawn.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAchievementManager.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Biped_CriticalFinisher_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNPC_Component.hpp"
#include "UObjectStateInfo.hpp"
#include "UUIManager.hpp"
void UBTT_Biped_CriticalFinisher_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ProtectCharacterFromDamage(AActor* InActor, bool Flag, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ProtectCharacterFromDamage"));
    struct Params_ProtectCharacterFromDamage {
        AActor* InActor; // 0x0
        bool Flag; // 0x8
        char pad_9[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ProtectCharacterFromDamage params{};
    params.InActor = (AActor*)InActor;
    params.Flag = (bool)Flag;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ApplyAchievement(UAchievementManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue, bool CallFunc_ApplyOneOfEachInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ApplyAchievement"));
    struct Params_ApplyAchievement {
        UAchievementManager* CallFunc_Get_ReturnValue; // 0x0
        FName CallFunc_GetDbId_ReturnValue; // 0x8
        bool CallFunc_ApplyOneOfEachInstance_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ApplyAchievement params{};
    params.CallFunc_Get_ReturnValue = (UAchievementManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_ApplyOneOfEachInstance_ReturnValue = (bool)CallFunc_ApplyOneOfEachInstance_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Biped_CriticalFinisher_C* UBTT_Biped_CriticalFinisher_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C");
    return (UBTT_Biped_CriticalFinisher_C*)res;
}
void UBTT_Biped_CriticalFinisher_C::DestroyAllMunitions(ABiped_Player* BipedPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.DestroyAllMunitions"));
    struct Params_DestroyAllMunitions {
        ABiped_Player* BipedPlayer; // 0x0
    }; // Size: 0x8
    Params_DestroyAllMunitions params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::CustActionEvt_FireWand_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireWand_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWand_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::AutoTargetOnlyTarget(APawn* Player, bool Flag, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.AutoTargetOnlyTarget"));
    struct Params_AutoTargetOnlyTarget {
        APawn* Player; // 0x0
        bool Flag; // 0x8
        char pad_9[0x7];
        AController* CallFunc_GetController_ReturnValue; // 0x10
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_AutoTargetOnlyTarget params{};
    params.Player = (APawn*)Player;
    params.Flag = (bool)Flag;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.EnableHUD"));
    struct Params_EnableHUD {
        bool Flag; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_EnableHUD params{};
    params.Flag = (bool)Flag;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::Enable_Auto_Target(ABiped_Player* BipedPlayer, bool Flag, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.Enable Auto Target"));
    struct Params_Enable_Auto_Target {
        ABiped_Player* BipedPlayer; // 0x0
        bool Flag; // 0x8
        char pad_9[0x7];
        AController* CallFunc_GetController_ReturnValue; // 0x10
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_Enable_Auto_Target params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.Flag = (bool)Flag;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::GetAbilityAndTimeDilationFromNPC(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetFinisherDamage_ReturnValue, bool CallFunc_FinisherWillKillTarget_ReturnValue, UNPC_Component* CallFunc_GetComponentByClass_ReturnValue, FGameplayTagContainer CallFunc_GetPlayerCriticalFinisherAbility_MunitionsTags, UClass* CallFunc_GetPlayerCriticalFinisherAbility_ReturnValue, bool CallFunc_CriticalFinisherAllowTimeDilation_ReturnValue, FGameplayTagContainer CallFunc_GetPlayerCriticalDamageAbility_MunitionsTags, UClass* CallFunc_GetPlayerCriticalDamageAbility_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.GetAbilityAndTimeDilationFromNPC"));
    struct Params_GetAbilityAndTimeDilationFromNPC {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        float CallFunc_GetFinisherDamage_ReturnValue; // 0x8
        bool CallFunc_FinisherWillKillTarget_ReturnValue; // 0xc
        char pad_d[0x3];
        UNPC_Component* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        FGameplayTagContainer CallFunc_GetPlayerCriticalFinisherAbility_MunitionsTags; // 0x18
        UClass* CallFunc_GetPlayerCriticalFinisherAbility_ReturnValue; // 0x38
        bool CallFunc_CriticalFinisherAllowTimeDilation_ReturnValue; // 0x40
        char pad_41[0x7];
        FGameplayTagContainer CallFunc_GetPlayerCriticalDamageAbility_MunitionsTags; // 0x48
        UClass* CallFunc_GetPlayerCriticalDamageAbility_ReturnValue; // 0x68
    }; // Size: 0x70
    Params_GetAbilityAndTimeDilationFromNPC params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetFinisherDamage_ReturnValue = (float)CallFunc_GetFinisherDamage_ReturnValue;
    params.CallFunc_FinisherWillKillTarget_ReturnValue = (bool)CallFunc_FinisherWillKillTarget_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UNPC_Component*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetPlayerCriticalFinisherAbility_MunitionsTags = (FGameplayTagContainer)CallFunc_GetPlayerCriticalFinisherAbility_MunitionsTags;
    params.CallFunc_GetPlayerCriticalFinisherAbility_ReturnValue = (UClass*)CallFunc_GetPlayerCriticalFinisherAbility_ReturnValue;
    params.CallFunc_CriticalFinisherAllowTimeDilation_ReturnValue = (bool)CallFunc_CriticalFinisherAllowTimeDilation_ReturnValue;
    params.CallFunc_GetPlayerCriticalDamageAbility_MunitionsTags = (FGameplayTagContainer)CallFunc_GetPlayerCriticalDamageAbility_MunitionsTags;
    params.CallFunc_GetPlayerCriticalDamageAbility_ReturnValue = (UClass*)CallFunc_GetPlayerCriticalDamageAbility_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::RestoreTimeDilation(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.RestoreTimeDilation"));
    struct Params_RestoreTimeDilation {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RestoreTimeDilation params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
AActor* UBTT_Biped_CriticalFinisher_C::GetTargetActor(APawn* BipedPlayer, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, AActor* CallFunc_GetBestLockOnActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.GetTargetActor"));
    struct Params_GetTargetActor {
        APawn* BipedPlayer; // 0x0
        AActor* ReturnValue; // 0x8
        AController* CallFunc_GetController_ReturnValue; // 0x10
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* CallFunc_GetBestAutoTargetActor_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x30
        char pad_31[0x7];
        AActor* CallFunc_GetBestLockOnActor_ReturnValue; // 0x38
    }; // Size: 0x40
    Params_GetTargetActor params{};
    params.BipedPlayer = (APawn*)BipedPlayer;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBestAutoTargetActor_ReturnValue = (AActor*)CallFunc_GetBestAutoTargetActor_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_GetBestLockOnActor_ReturnValue = (AActor*)CallFunc_GetBestLockOnActor_ReturnValue;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UBTT_Biped_CriticalFinisher_C::SendMunitionImpactToTarget(float Damage, FName Temp_name_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FHitResult CallFunc_MakeHitResult_ReturnValue, int32_t CallFunc_Array_AddUnique_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_SetOnFire_ReturnValue, FMunitionImpactData K2Node_MakeStruct_MunitionImpactData, bool CallFunc_SendMunitionImpactCombined_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SendMunitionImpactToTarget"));
    struct Params_SendMunitionImpactToTarget {
        float Damage; // 0x0
        FName Temp_name_Variable; // 0x4
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0xc
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x20
        bool CallFunc_HasTag_ReturnValue; // 0x2c
        char pad_2d[0x3];
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x30
        FVector CallFunc_Normal_ReturnValue; // 0x3c
        FHitResult CallFunc_MakeHitResult_ReturnValue; // 0x48
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0xd0
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0xd4
        bool CallFunc_IsValid_ReturnValue; // 0xe0
        char pad_e1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0xe8
        bool CallFunc_SetOnFire_ReturnValue; // 0xf0
        char pad_f1[0x7];
        FMunitionImpactData K2Node_MakeStruct_MunitionImpactData; // 0xf8
        bool CallFunc_SendMunitionImpactCombined_ReturnValue; // 0x1e8
    }; // Size: 0x1e9
    Params_SendMunitionImpactToTarget params{};
    params.Damage = (float)Damage;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_HasTag_ReturnValue = (bool)CallFunc_HasTag_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Normal_ReturnValue = (FVector)CallFunc_Normal_ReturnValue;
    params.CallFunc_MakeHitResult_ReturnValue = (FHitResult)CallFunc_MakeHitResult_ReturnValue;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_SetOnFire_ReturnValue = (bool)CallFunc_SetOnFire_ReturnValue;
    params.K2Node_MakeStruct_MunitionImpactData = (FMunitionImpactData)K2Node_MakeStruct_MunitionImpactData;
    params.CallFunc_SendMunitionImpactCombined_ReturnValue = (bool)CallFunc_SendMunitionImpactCombined_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::StartTimeDilationOnTarget(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.StartTimeDilationOnTarget"));
    struct Params_StartTimeDilationOnTarget {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartTimeDilationOnTarget params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::SetTargetTrackers(AActor* InActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.SetTargetTrackers"));
    struct Params_SetTargetTrackers {
        AActor* InActor; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SetTargetTrackers params{};
    params.InActor = (AActor*)InActor;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue = (AActor*)CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Biped_CriticalFinisher.BTT_Biped_CriticalFinisher_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Biped_CriticalFinisher_C::ExecuteUbergraph_BTT_Biped_CriticalFinisher(int32_t EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds) {}
