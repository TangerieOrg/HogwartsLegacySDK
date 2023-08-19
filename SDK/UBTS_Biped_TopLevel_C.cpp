#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "ABP_StealthTakedownInteractActor_C.hpp"
#include "ABase_Character.hpp"
#include "ABiped_Character.hpp"
#include "ABiped_Player.hpp"
#include "ABiped_PlayerController.hpp"
#include "ACameraStackLookAtTargetActor.hpp"
#include "ACharacter.hpp"
#include "AController.hpp"
#include "AForagable.hpp"
#include "AHUD.hpp"
#include "AHerb.hpp"
#include "AInventoryItemTool.hpp"
#include "AInventoryObject.hpp"
#include "ANPC_Character.hpp"
#include "APawn.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "ASimpleInteractObject.hpp"
#include "ATool.hpp"
#include "AWandTool.hpp"
#include "AWorldObject.hpp"
#include "EBTCustomActionType\Type.hpp"
#include "EInputDeviceUsed.hpp"
#include "EKnowledgeLevel.hpp"
#include "ELandingType\Type.hpp"
#include "EMovementMode.hpp"
#include "ESpeedModifierType\Type.hpp"
#include "EUIQActionBarType.hpp"
#include "FDamageInfo.hpp"
#include "FForcedConversation.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSurfaceTypeChanged.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAISense.hpp"
#include "UAblAbilityContext.hpp"
#include "UActorComponent.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTS_Biped_TopLevel_C.hpp"
#include "UBTService_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UCognitionComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UCombativePlantComponent.hpp"
#include "UCreature_RiderComponent.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UKnowledgeManager.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UParticleSystemComponent.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_GadgetWheel_C.hpp"
#include "UUI_BP_PhoenixHUDWidget_C.hpp"
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_2(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_2"));
    struct Params_GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_2 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_2 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2"));
    struct Params_CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GetButtonKeyValue(FName& KeyName, bool& Pressed, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetButtonKeyValue"));
    struct Params_GetButtonKeyValue {
        FName KeyName; // 0x0
        bool Pressed; // 0x8
        char pad_9[0x7];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
        bool CallFunc_GetValueAsBool_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetButtonKeyValue params{};
    params.KeyName = (FName)KeyName;
    params.Pressed = (bool)Pressed;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsBool_ReturnValue = (bool)CallFunc_GetValueAsBool_ReturnValue;
    ProcessEvent(func, &params);
    KeyName = params.KeyName;
    Pressed = params.Pressed;
}
UBTS_Biped_TopLevel_C* UBTS_Biped_TopLevel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C");
    return (UBTS_Biped_TopLevel_C*)res;
}
void UBTS_Biped_TopLevel_C::HealthChanged(AActor* Actor, float HealthChange, bool IndicateHUD, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue) {}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_19(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_19"));
    struct Params_InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_19 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_19 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::IsItemWheelAvailable(bool& IsAvailable, bool FoundItem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsItemWheelAvailable"));
    struct Params_IsItemWheelAvailable {
        bool IsAvailable; // 0x0
        bool FoundItem; // 0x1
        char pad_2[0x2];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        FName CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        bool CallFunc_IsUnlocked_ReturnValue; // 0x1c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1d
        bool CallFunc_BooleanOR_ReturnValue; // 0x1e
    }; // Size: 0x1f
    Params_IsItemWheelAvailable params{};
    params.IsAvailable = (bool)IsAvailable;
    params.FoundItem = (bool)FoundItem;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    IsAvailable = params.IsAvailable;
}
void UBTS_Biped_TopLevel_C::CastTwitchSpell(int32_t SpellIndex, FString CompendiumPage, bool CallFunc_CheckForSpellDupes_Allowed, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_QuickActionInteract_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_2, int32_t CallFunc_GetActiveGroupIndex_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, EUIQActionBarType CallFunc_GetItemType_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CastTwitchSpell"));
    struct Params_CastTwitchSpell {
        int32_t SpellIndex; // 0x0
        char pad_4[0x4];
        FString CompendiumPage; // 0x8
        bool CallFunc_CheckForSpellDupes_Allowed; // 0x18
        char pad_19[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x20
        AActor* CallFunc_GetActorOwner_ReturnValue_1; // 0x28
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x3c
        bool CallFunc_QuickActionInteract_ReturnValue; // 0x40
        char pad_41[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue_2; // 0x48
        int32_t CallFunc_GetActiveGroupIndex_ReturnValue; // 0x50
        FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue; // 0x54
        EUIQActionBarType CallFunc_GetItemType_ReturnValue; // 0x58
        char pad_59[0x3];
        FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue; // 0x5c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x60
        bool CallFunc_Not_PreBool_ReturnValue; // 0x61
    }; // Size: 0x62
    Params_CastTwitchSpell params{};
    params.SpellIndex = (int32_t)SpellIndex;
    params.CompendiumPage = (FString)CompendiumPage;
    params.CallFunc_CheckForSpellDupes_Allowed = (bool)CallFunc_CheckForSpellDupes_Allowed;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_1 = (AActor*)CallFunc_GetActorOwner_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_QuickActionInteract_ReturnValue = (bool)CallFunc_QuickActionInteract_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_2 = (AActor*)CallFunc_GetActorOwner_ReturnValue_2;
    params.CallFunc_GetActiveGroupIndex_ReturnValue = (int32_t)CallFunc_GetActiveGroupIndex_ReturnValue;
    params.CallFunc_CreateVariantMap_ReturnValue = (FVariantMapHandle)CallFunc_CreateVariantMap_ReturnValue;
    params.CallFunc_GetItemType_ReturnValue = (EUIQActionBarType)CallFunc_GetItemType_ReturnValue;
    params.CallFunc_BroadcastAction_Actor_ReturnValue = (FVariantMapHandle)CallFunc_BroadcastAction_Actor_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12"));
    struct Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GotoTargetFactSheet(FString CompendiumCategory, FName TargetId, AActor* Target, FString DestCompendiumPage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString Temp_string_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_GetSubjectCategoryFromSubject_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, UKnowledgeManager* CallFunc_Get_ReturnValue, FString K2Node_Select_Default, EKnowledgeLevel CallFunc_GetPlayerKnowledgeLevel_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, UKnowledgeManager* CallFunc_Get_ReturnValue_1, FName CallFunc_IsKnowledgeSubject_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue, FName CallFunc_GetDbId_ReturnValue, AActor* CallFunc_GetBestTarget_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FString Temp_string_Variable_1, UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue_1, AActor* CallFunc_GetBestTarget_ReturnValue_1, FString K2Node_Select_Default_1, UUIManager* CallFunc_Get_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GotoTargetFactSheet"));
    struct Params_GotoTargetFactSheet {
        FString CompendiumCategory; // 0x0
        FName TargetId; // 0x10
        AActor* Target; // 0x18
        FString DestCompendiumPage; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue_1; // 0x31
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x32
        char pad_33[0x5];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x38
        FString Temp_string_Variable; // 0x48
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x58
        char pad_59[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x60
        FString CallFunc_GetSubjectCategoryFromSubject_ReturnValue; // 0x70
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x80
        bool Temp_bool_Variable; // 0x90
        bool Temp_bool_Variable_1; // 0x91
        char pad_92[0x6];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x98
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0xa8
        UKnowledgeManager* CallFunc_Get_ReturnValue; // 0xb8
        FString K2Node_Select_Default; // 0xc0
        EKnowledgeLevel CallFunc_GetPlayerKnowledgeLevel_ReturnValue; // 0xd0
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0xd1
        char pad_d2[0x6];
        UKnowledgeManager* CallFunc_Get_ReturnValue_1; // 0xd8
        FName CallFunc_IsKnowledgeSubject_ReturnValue; // 0xe0
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0xe8
        char pad_e9[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0xec
        char pad_f4[0x4];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0xf8
        UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x100
        FName CallFunc_GetDbId_ReturnValue; // 0x108
        AActor* CallFunc_GetBestTarget_ReturnValue; // 0x110
        APlayerController* CallFunc_GetPlayerController_ReturnValue_1; // 0x118
        FString Temp_string_Variable_1; // 0x120
        UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x130
        AActor* CallFunc_GetBestTarget_ReturnValue_1; // 0x138
        FString K2Node_Select_Default_1; // 0x140
        UUIManager* CallFunc_Get_ReturnValue_2; // 0x150
    }; // Size: 0x158
    Params_GotoTargetFactSheet params{};
    params.CompendiumCategory = (FString)CompendiumCategory;
    params.TargetId = (FName)TargetId;
    params.Target = (AActor*)Target;
    params.DestCompendiumPage = (FString)DestCompendiumPage;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_GetSubjectCategoryFromSubject_ReturnValue = (FString)CallFunc_GetSubjectCategoryFromSubject_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Get_ReturnValue = (UKnowledgeManager*)CallFunc_Get_ReturnValue;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    params.CallFunc_GetPlayerKnowledgeLevel_ReturnValue = (EKnowledgeLevel)CallFunc_GetPlayerKnowledgeLevel_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UKnowledgeManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_IsKnowledgeSubject_ReturnValue = (FName)CallFunc_IsKnowledgeSubject_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCognitionComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_GetBestTarget_ReturnValue = (AActor*)CallFunc_GetBestTarget_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue_1 = (APlayerController*)CallFunc_GetPlayerController_ReturnValue_1;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCognitionComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_GetBestTarget_ReturnValue_1 = (AActor*)CallFunc_GetBestTarget_ReturnValue_1;
    params.K2Node_Select_Default_1 = (FString)K2Node_Select_Default_1;
    params.CallFunc_Get_ReturnValue_2 = (UUIManager*)CallFunc_Get_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DeselectTwitchSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ATool* CallFunc_GetActiveTool_ReturnValue, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DeselectTwitchSpell"));
    struct Params_DeselectTwitchSpell {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        ATool* CallFunc_GetActiveTool_ReturnValue; // 0x8
        AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_DeselectTwitchSpell params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetActiveTool_ReturnValue = (ATool*)CallFunc_GetActiveTool_ReturnValue;
    params.K2Node_DynamicCast_AsInventory_Item_Tool = (AInventoryItemTool*)K2Node_DynamicCast_AsInventory_Item_Tool;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::EnterStealthMode(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EnterStealthMode"));
    struct Params_EnterStealthMode {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_EnterStealthMode params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_7"));
    struct Params_InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SelectedLockedDiamond(int32_t Current, int32_t NEW, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SelectedLockedDiamond"));
    struct Params_SelectedLockedDiamond {
        int32_t Current; // 0x0
        int32_t NEW; // 0x4
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SelectedLockedDiamond params{};
    params.Current = (int32_t)Current;
    params.NEW = (int32_t)NEW;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Interact(AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetItemCount_ReturnValue, FName CallFunc_GetItemID_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_3, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {}
void UBTS_Biped_TopLevel_C::EndAimMode(APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EndAimMode"));
    struct Params_EndAimMode {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_EndAimMode params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SetNextLightWandCast(bool Casual, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetNextLightWandCast"));
    struct Params_SetNextLightWandCast {
        bool Casual; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AWandTool* CallFunc_GetWand_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ClassClass_ReturnValue; // 0x28
        bool CallFunc_EqualEqual_ClassClass_ReturnValue_1; // 0x29
        bool CallFunc_BooleanOR_ReturnValue; // 0x2a
    }; // Size: 0x2b
    Params_SetNextLightWandCast params{};
    params.Casual = (bool)Casual;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetWand_ReturnValue = (AWandTool*)CallFunc_GetWand_ReturnValue;
    params.CallFunc_EqualEqual_ClassClass_ReturnValue = (bool)CallFunc_EqualEqual_ClassClass_ReturnValue;
    params.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = (bool)CallFunc_EqualEqual_ClassClass_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_102(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_102"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_102 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_102 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StartAimMode(APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StartAimMode"));
    struct Params_StartAimMode {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
    }; // Size: 0x11
    Params_StartAimMode params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_4"));
    struct Params_CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FlushQueuedActions(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GetButtonQueueTimer(FName KeyName, float& Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GetButtonQueueTimer"));
    struct Params_GetButtonQueueTimer {
        FName KeyName; // 0x0
        float Value; // 0x8
        char pad_c[0x4];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
        float CallFunc_GetValueAsFloat_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetButtonQueueTimer params{};
    params.KeyName = (FName)KeyName;
    params.Value = (float)Value;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetValueAsFloat_ReturnValue = (float)CallFunc_GetValueAsFloat_ReturnValue;
    ProcessEvent(func, &params);
    Value = params.Value;
}
void UBTS_Biped_TopLevel_C::SetOppugnoSenseEnabled(bool Enabled, AActor* CallFunc_GetActorOwner_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetOppugnoSenseEnabled"));
    struct Params_SetOppugnoSenseEnabled {
        bool Enabled; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        APawn* K2Node_DynamicCast_AsPawn; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x19
        char pad_1a[0x6];
        AController* CallFunc_GetController_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_SetOppugnoSenseEnabled params{};
    params.Enabled = (bool)Enabled;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_23(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_23"));
    struct Params_CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_23 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_23 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
bool UBTS_Biped_TopLevel_C::InHogwarts(FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsPlayerInWorld_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InHogwarts"));
    struct Params_InHogwarts {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x4
        bool CallFunc_IsPlayerInWorld_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_InHogwarts params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_IsPlayerInWorld_ReturnValue = (bool)CallFunc_IsPlayerInWorld_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTS_Biped_TopLevel_C::PlayLootPickup(AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayLootPickup"));
    struct Params_PlayLootPickup {
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x0
        bool CallFunc_EvaluateFilterOnActor_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PlayLootPickup params{};
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StealthInteractTargetSighted(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FString CallFunc_DbReadMiscSaveDataItem_outValue, bool CallFunc_DbReadMiscSaveDataItem_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_CastToBoolean_ReturnValue, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StealthInteractTargetSighted"));
    struct Params_StealthInteractTargetSighted {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0x8
        FString CallFunc_GetDisplayName_ReturnValue; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2; // 0x20
        FString CallFunc_DbReadMiscSaveDataItem_outValue; // 0x28
        bool CallFunc_DbReadMiscSaveDataItem_ReturnValue; // 0x38
        char pad_39[0x7];
        FString CallFunc_GetDisplayName_ReturnValue_1; // 0x40
        bool CallFunc_CastToBoolean_ReturnValue; // 0x50
        bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue; // 0x51
        bool CallFunc_Not_PreBool_ReturnValue; // 0x52
    }; // Size: 0x53
    Params_StealthInteractTargetSighted params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_2 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_2;
    params.CallFunc_DbReadMiscSaveDataItem_outValue = (FString)CallFunc_DbReadMiscSaveDataItem_outValue;
    params.CallFunc_DbReadMiscSaveDataItem_ReturnValue = (bool)CallFunc_DbReadMiscSaveDataItem_ReturnValue;
    params.CallFunc_GetDisplayName_ReturnValue_1 = (FString)CallFunc_GetDisplayName_ReturnValue_1;
    params.CallFunc_CastToBoolean_ReturnValue = (bool)CallFunc_CastToBoolean_ReturnValue;
    params.CallFunc_DbWriteMiscSaveDataItem_ReturnValue = (bool)CallFunc_DbWriteMiscSaveDataItem_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InteractDebugString(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractDebugString"));
    struct Params_InteractDebugString {
        FString inString; // 0x0
    }; // Size: 0x10
    Params_InteractDebugString params{};
    params.inString = (FString)inString;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::HandleLedgeDetected_NoJump(AActor* OwningActor) {}
void UBTS_Biped_TopLevel_C::CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43"));
    struct Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
bool UBTS_Biped_TopLevel_C::IsSimpleInteractObject(AActor* Actor, ASimpleInteractObject* K2Node_DynamicCast_AsSimple_Interact_Object, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsSimpleInteractObject"));
    struct Params_IsSimpleInteractObject {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        ASimpleInteractObject* K2Node_DynamicCast_AsSimple_Interact_Object; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_IsSimpleInteractObject params{};
    params.Actor = (AActor*)Actor;
    params.K2Node_DynamicCast_AsSimple_Interact_Object = (ASimpleInteractObject*)K2Node_DynamicCast_AsSimple_Interact_Object;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTS_Biped_TopLevel_C::HandleAnalyticsAndKnowledge(AActor* Actor, UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.HandleAnalyticsAndKnowledge"));
    struct Params_HandleAnalyticsAndKnowledge {
        AActor* Actor; // 0x0
        UKnowledgeManager* CallFunc_Get_ReturnValue; // 0x8
        FName CallFunc_GetDbId_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_HandleAnalyticsAndKnowledge params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_Get_ReturnValue = (UKnowledgeManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    ProcessEvent(func, &params);
}
bool UBTS_Biped_TopLevel_C::IsTwoHandChest(AActor* Actor, bool CallFunc_DoesImplementInterface_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsTwoHandChest"));
    struct Params_IsTwoHandChest {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
        bool CallFunc_DoesImplementInterface_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_IsTwoHandChest params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_DoesImplementInterface_ReturnValue = (bool)CallFunc_DoesImplementInterface_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTS_Biped_TopLevel_C::IsLootPickup(AActor* Actor, bool CallFunc_IsTwoHandChest_ReturnValue, UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, AInventoryObject* K2Node_DynamicCast_AsInventory_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess_2, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.IsLootPickup"));
    struct Params_IsLootPickup {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
        bool CallFunc_IsTwoHandChest_ReturnValue; // 0x9
        char pad_a[0x6];
        UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_Not_PreBool_ReturnValue; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x19
        bool CallFunc_ActorHasTag_ReturnValue; // 0x1a
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x1b
        char pad_1c[0x4];
        AInventoryObject* K2Node_DynamicCast_AsInventory_Object; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_BooleanAND_ReturnValue; // 0x29
        char pad_2a[0x6];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_IsAlive_ReturnValue; // 0x39
        char pad_3a[0x6];
        ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x40
        bool CallFunc_IsValid_ReturnValue_1; // 0x48
        char pad_49[0x7];
        AForagable* K2Node_DynamicCast_AsForagable; // 0x50
        bool K2Node_DynamicCast_bSuccess_2; // 0x58
        char pad_59[0x7];
        AHerb* K2Node_DynamicCast_AsHerb; // 0x60
        bool K2Node_DynamicCast_bSuccess_3; // 0x68
    }; // Size: 0x69
    Params_IsLootPickup params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_IsTwoHandChest_ReturnValue = (bool)CallFunc_IsTwoHandChest_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCombativePlantComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_ActorHasTag_ReturnValue = (bool)CallFunc_ActorHasTag_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.K2Node_DynamicCast_AsInventory_Object = (AInventoryObject*)K2Node_DynamicCast_AsInventory_Object;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsAlive_ReturnValue = (bool)CallFunc_IsAlive_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (ULootDropComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.K2Node_DynamicCast_AsForagable = (AForagable*)K2Node_DynamicCast_AsForagable;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_DynamicCast_AsHerb = (AHerb*)K2Node_DynamicCast_AsHerb;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTS_Biped_TopLevel_C::SetInteractTargetAllowed(bool Allowed, AActor* CallFunc_GetActorOwner_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetInteractTargetAllowed"));
    struct Params_SetInteractTargetAllowed {
        bool Allowed; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        FString CallFunc_Conv_BoolToString_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
    }; // Size: 0x30
    Params_SetInteractTargetAllowed params{};
    params.Allowed = (bool)Allowed;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_Conv_BoolToString_ReturnValue = (FString)CallFunc_Conv_BoolToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OnInteractTargetChanged(AActor* NewTarget, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, APlayerController* CallFunc_GetPlayerController_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetChanged"));
    struct Params_OnInteractTargetChanged {
        AActor* NewTarget; // 0x0
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_OnInteractTargetChanged params{};
    params.NewTarget = (AActor*)NewTarget;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::AdditiveReaction(AActor* ReactingActor, UClass* InAblAbilitClass, AActor* InInstigator, FVector ImpactDirection, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTS_Biped_TopLevel_C::CollectItem(FName ItemId, int32_t ItemCount, AActor* Actor, int32_t CallFunc_CanAddItem_ReturnValue) {}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83"));
    struct Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::PutOppugnoTargetInBlackboard(FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestOppugnoActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PutOppugnoTargetInBlackboard"));
    struct Params_PutOppugnoTargetInBlackboard {
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x0
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x8
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x10
        AController* CallFunc_GetController_ReturnValue; // 0x18
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        AActor* CallFunc_GetBestOppugnoActor_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_PutOppugnoTargetInBlackboard params{};
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBestOppugnoActor_ReturnValue = (AActor*)CallFunc_GetBestOppugnoActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DoFallDamage(float LandingDamage, float FallHeight, float CallFunc_Subtract_FloatFloat_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo, bool CallFunc_DoDamageTarget_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_GetContextOnActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_3, bool CallFunc_KillTarget_ReturnValue, bool CallFunc_HasAbilityTagBP_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoFallDamage"));
    struct Params_DoFallDamage {
        float LandingDamage; // 0x0
        float FallHeight; // 0x4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        char pad_c[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x10
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x18
        char pad_19[0x7];
        FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo; // 0x20
        bool CallFunc_DoDamageTarget_ReturnValue; // 0x1e8
        char pad_1e9[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x1f0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x1f8
        float CallFunc_BreakVector_X; // 0x204
        float CallFunc_BreakVector_Y; // 0x208
        float CallFunc_BreakVector_Z; // 0x20c
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x210
        char pad_214[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1; // 0x218
        bool CallFunc_GetContextOnActor_ReturnValue; // 0x220
        char pad_221[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2; // 0x228
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_3; // 0x230
        bool CallFunc_KillTarget_ReturnValue; // 0x238
        bool CallFunc_HasAbilityTagBP_ReturnValue; // 0x239
        char pad_23a[0x2];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x23c
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x240
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x244
        bool CallFunc_InRange_FloatFloat_ReturnValue; // 0x245
    }; // Size: 0x246
    Params_DoFallDamage params{};
    params.LandingDamage = (float)LandingDamage;
    params.FallHeight = (float)FallHeight;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_DoDamageTarget_OutDamageInfo = (FDamageInfo)CallFunc_DoDamageTarget_OutDamageInfo;
    params.CallFunc_DoDamageTarget_ReturnValue = (bool)CallFunc_DoDamageTarget_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_1 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_1;
    params.CallFunc_GetContextOnActor_ReturnValue = (bool)CallFunc_GetContextOnActor_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_2 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_2;
    params.CallFunc_GetTheBipedPlayer_ReturnValue_3 = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue_3;
    params.CallFunc_KillTarget_ReturnValue = (bool)CallFunc_KillTarget_ReturnValue;
    params.CallFunc_HasAbilityTagBP_ReturnValue = (bool)CallFunc_HasAbilityTagBP_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_InRange_FloatFloat_ReturnValue = (bool)CallFunc_InRange_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ClearTrackedStudentBeacon(AActor* Actor, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStudentLocatorBeaconActive_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ClearTrackedStudentBeacon"));
    struct Params_ClearTrackedStudentBeacon {
        AActor* Actor; // 0x0
        FName CallFunc_GetDbId_ReturnValue; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        bool CallFunc_IsStudentLocatorBeaconActive_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ClearTrackedStudentBeacon params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_IsStudentLocatorBeaconActive_ReturnValue = (bool)CallFunc_IsStudentLocatorBeaconActive_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Pickup(UObject* PickupObject, FVector PickupTargetLocation, AActor* PickupActor, AActor* CallFunc_GetActorOwner_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, AWorldObject* K2Node_DynamicCast_AsWorld_Object, bool K2Node_DynamicCast_bSuccess_1, AInventoryObject* K2Node_DynamicCast_AsInventory_Object, bool K2Node_DynamicCast_bSuccess_2, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GetIsInspectableBP_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UActorComponent* K2Node_DynamicCast_AsActor_Component, bool K2Node_DynamicCast_bSuccess_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess_5, AHerb* K2Node_DynamicCast_AsHerb_1, bool K2Node_DynamicCast_bSuccess_6, FVector CallFunc_Add_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Pickup"));
    struct Params_Pickup {
        UObject* PickupObject; // 0x0
        FVector PickupTargetLocation; // 0x8
        char pad_14[0x4];
        AActor* PickupActor; // 0x18
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x20
        FString CallFunc_GetObjectName_ReturnValue; // 0x28
        AHerb* K2Node_DynamicCast_AsHerb; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x58
        UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x68
        bool CallFunc_IsValid_ReturnValue; // 0x70
        char pad_71[0x7];
        AWorldObject* K2Node_DynamicCast_AsWorld_Object; // 0x78
        bool K2Node_DynamicCast_bSuccess_1; // 0x80
        char pad_81[0x7];
        AInventoryObject* K2Node_DynamicCast_AsInventory_Object; // 0x88
        bool K2Node_DynamicCast_bSuccess_2; // 0x90
        char pad_91[0x7];
        AActor* K2Node_DynamicCast_AsActor; // 0x98
        bool K2Node_DynamicCast_bSuccess_3; // 0xa0
        bool CallFunc_IsValid_ReturnValue_1; // 0xa1
        char pad_a2[0x2];
        FName CallFunc_GetDbId_ReturnValue; // 0xa4
        char pad_ac[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0xb0
        bool CallFunc_GetIsInspectableBP_ReturnValue; // 0xc0
        char pad_c1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc4
        UActorComponent* K2Node_DynamicCast_AsActor_Component; // 0xc8
        bool K2Node_DynamicCast_bSuccess_4; // 0xd0
        char pad_d1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xd4
        AActor* CallFunc_GetOwner_ReturnValue; // 0xd8
        AForagable* K2Node_DynamicCast_AsForagable; // 0xe0
        bool K2Node_DynamicCast_bSuccess_5; // 0xe8
        char pad_e9[0x7];
        AHerb* K2Node_DynamicCast_AsHerb_1; // 0xf0
        bool K2Node_DynamicCast_bSuccess_6; // 0xf8
        char pad_f9[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0xfc
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x108
        bool CallFunc_ActorHasTag_ReturnValue; // 0x110
        char pad_111[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0x114
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x118
    }; // Size: 0x124
    Params_Pickup params{};
    params.PickupObject = (UObject*)PickupObject;
    params.PickupTargetLocation = (FVector)PickupTargetLocation;
    params.PickupActor = (AActor*)PickupActor;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetObjectName_ReturnValue = (FString)CallFunc_GetObjectName_ReturnValue;
    params.K2Node_DynamicCast_AsHerb = (AHerb*)K2Node_DynamicCast_AsHerb;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCombativePlantComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_DynamicCast_AsWorld_Object = (AWorldObject*)K2Node_DynamicCast_AsWorld_Object;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsInventory_Object = (AInventoryObject*)K2Node_DynamicCast_AsInventory_Object;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetIsInspectableBP_ReturnValue = (bool)CallFunc_GetIsInspectableBP_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.K2Node_DynamicCast_AsActor_Component = (UActorComponent*)K2Node_DynamicCast_AsActor_Component;
    params.K2Node_DynamicCast_bSuccess_4 = (bool)K2Node_DynamicCast_bSuccess_4;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsForagable = (AForagable*)K2Node_DynamicCast_AsForagable;
    params.K2Node_DynamicCast_bSuccess_5 = (bool)K2Node_DynamicCast_bSuccess_5;
    params.K2Node_DynamicCast_AsHerb_1 = (AHerb*)K2Node_DynamicCast_AsHerb_1;
    params.K2Node_DynamicCast_bSuccess_6 = (bool)K2Node_DynamicCast_bSuccess_6;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    params.CallFunc_ActorHasTag_ReturnValue = (bool)CallFunc_ActorHasTag_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_56(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_56"));
    struct Params_CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_56 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_56 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CheckForSpellDupes(bool& Allowed, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CheckForSpellDupes"));
    struct Params_CheckForSpellDupes {
        bool Allowed; // 0x0
        char pad_1[0x3];
        float CallFunc_GetGameTimeInSeconds_ReturnValue; // 0x4
        float CallFunc_GetGameTimeInSeconds_ReturnValue_1; // 0x8
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0xc
    }; // Size: 0xd
    Params_CheckForSpellDupes params{};
    params.Allowed = (bool)Allowed;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue = (float)CallFunc_GetGameTimeInSeconds_ReturnValue;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = (float)CallFunc_GetGameTimeInSeconds_ReturnValue_1;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    Allowed = params.Allowed;
}
void UBTS_Biped_TopLevel_C::LootContainer(AActor* LootTargetActor, AActor* LootActor, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActorOwner_ReturnValue, int32_t CallFunc_Get_Inventory_Count_ReturnCount, bool CallFunc_LessEqual_IntInt_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTakingObjectStealing_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.LootContainer"));
    struct Params_LootContainer {
        AActor* LootTargetActor; // 0x0
        AActor* LootActor; // 0x8
        UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x28
        int32_t CallFunc_Get_Inventory_Count_ReturnCount; // 0x30
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x34
        char pad_35[0x3];
        AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character_1; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
        bool CallFunc_IsTakingObjectStealing_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_LootContainer params{};
    params.LootTargetActor = (AActor*)LootTargetActor;
    params.LootActor = (AActor*)LootActor;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCognitionStimuliSourceComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Character = (AAmbulatory_Character*)K2Node_DynamicCast_AsAmbulatory_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_Get_Inventory_Count_ReturnCount = (int32_t)CallFunc_Get_Inventory_Count_ReturnCount;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Character_1 = (AAmbulatory_Character*)K2Node_DynamicCast_AsAmbulatory_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsTakingObjectStealing_ReturnValue = (bool)CallFunc_IsTakingObjectStealing_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109"));
    struct Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FireSimpleSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FireSimpleSpell"));
    struct Params_FireSimpleSpell {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue; // 0x8
        FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FireSimpleSpell params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_CreateVariantMap_ReturnValue = (FVariantMapHandle)CallFunc_CreateVariantMap_ReturnValue;
    params.CallFunc_BroadcastAction_Actor_ReturnValue = (FVariantMapHandle)CallFunc_BroadcastAction_Actor_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Looting(AActor* Actor, FName CallFunc_GetStatName_ReturnValue, ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Looting"));
    struct Params_Looting {
        AActor* Actor; // 0x0
        FName CallFunc_GetStatName_ReturnValue; // 0x8
        ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_Looting params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (ULootDropComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100"));
    struct Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_105(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_105"));
    struct Params_InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_105 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_105 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108"));
    struct Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InteractCanceled(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, UObject* CallFunc_GetValueAsObject_ReturnValue, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess) {}
void UBTS_Biped_TopLevel_C::InteractInitiated(float LocalInventoryCost, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, int32_t Temp_int_Array_Index_Variable, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue) {}
void UBTS_Biped_TopLevel_C::CheckInteractTargetAllowed(AActor* Actor, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, bool CallFunc_EvaluateFilterOnActor_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue_2, bool CallFunc_EvaluateFilterOnActor_ReturnValue_2, bool CallFunc_IsSimpleInteractObject_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_3, bool CallFunc_EvaluateFilterOnActor_ReturnValue_3, bool CallFunc_IsTwoHandChest_ReturnValue, bool CallFunc_IsLootPickup_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CheckInteractTargetAllowed"));
    struct Params_CheckInteractTargetAllowed {
        AActor* Actor; // 0x0
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        AActor* CallFunc_GetActorOwner_ReturnValue_1; // 0x10
        bool CallFunc_EvaluateFilterOnActor_ReturnValue; // 0x18
        bool CallFunc_EvaluateFilterOnActor_ReturnValue_1; // 0x19
        char pad_1a[0x6];
        AActor* CallFunc_GetActorOwner_ReturnValue_2; // 0x20
        bool CallFunc_EvaluateFilterOnActor_ReturnValue_2; // 0x28
        bool CallFunc_IsSimpleInteractObject_ReturnValue; // 0x29
        char pad_2a[0x6];
        AActor* CallFunc_GetActorOwner_ReturnValue_3; // 0x30
        bool CallFunc_EvaluateFilterOnActor_ReturnValue_3; // 0x38
        bool CallFunc_IsTwoHandChest_ReturnValue; // 0x39
        bool CallFunc_IsLootPickup_ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_CheckInteractTargetAllowed params{};
    params.Actor = (AActor*)Actor;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_1 = (AActor*)CallFunc_GetActorOwner_ReturnValue_1;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue_1 = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue_1;
    params.CallFunc_GetActorOwner_ReturnValue_2 = (AActor*)CallFunc_GetActorOwner_ReturnValue_2;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue_2 = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue_2;
    params.CallFunc_IsSimpleInteractObject_ReturnValue = (bool)CallFunc_IsSimpleInteractObject_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_3 = (AActor*)CallFunc_GetActorOwner_ReturnValue_3;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue_3 = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue_3;
    params.CallFunc_IsTwoHandChest_ReturnValue = (bool)CallFunc_IsTwoHandChest_ReturnValue;
    params.CallFunc_IsLootPickup_ReturnValue = (bool)CallFunc_IsLootPickup_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OnInteractTargetLost(AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetLost"));
    struct Params_OnInteractTargetLost {
        AActor* OldTarget; // 0x0
    }; // Size: 0x8
    Params_OnInteractTargetLost params{};
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_107(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_107"));
    struct Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_107 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_107 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88"));
    struct Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_57(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_57"));
    struct Params_CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_57 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_57 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_42(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_42"));
    struct Params_InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_42 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_42 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OnInteractTargetSighted(AActor* Target, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnInteractTargetSighted"));
    struct Params_OnInteractTargetSighted {
        AActor* Target; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_OnInteractTargetSighted params{};
    params.Target = (AActor*)Target;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::HandleLedgeDetected(AActor* OwningActor, UTutorialSystem* CallFunc_Get_ReturnValue) {}
void UBTS_Biped_TopLevel_C::CreateItemWheel(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_GadgetWheel_C* CallFunc_Create_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CreateItemWheel"));
    struct Params_CreateItemWheel {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        UUI_BP_GadgetWheel_C* CallFunc_Create_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateItemWheel params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_GadgetWheel_C*)CallFunc_Create_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CleanupItemWheel(UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CleanupItemWheel"));
    struct Params_CleanupItemWheel {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CleanupItemWheel params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Handle_Owl_Mail_Button(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, UUI_BP_PhoenixHUDWidget_C* K2Node_DynamicCast_AsUI_BP_Phoenix_HUDWidget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasUnreadMailNotification_bUnreadMail) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Handle Owl Mail Button"));
    struct Params_Handle_Owl_Mail_Button {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x10
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x18
        char pad_19[0x7];
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x29
        char pad_2a[0x6];
        UUI_BP_PhoenixHUDWidget_C* K2Node_DynamicCast_AsUI_BP_Phoenix_HUDWidget; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_HasUnreadMailNotification_bUnreadMail; // 0x39
    }; // Size: 0x3a
    Params_Handle_Owl_Mail_Button params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Phoenix_HUDWidget = (UUI_BP_PhoenixHUDWidget_C*)K2Node_DynamicCast_AsUI_BP_Phoenix_HUDWidget;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_HasUnreadMailNotification_bUnreadMail = (bool)CallFunc_HasUnreadMailNotification_bUnreadMail;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GetSwimAbility(EMovementMode PrevMovementMode, UClass*& Ability, bool K2Node_SwitchEnum_CmpSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue) {}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::AdjustSpellWheelIndex(int32_t Direction, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.AdjustSpellWheelIndex"));
    struct Params_AdjustSpellWheelIndex {
        int32_t Direction; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x8
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_AdjustSpellWheelIndex params{};
    params.Direction = (int32_t)Direction;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::RevelioMount(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.RevelioMount"));
    struct Params_RevelioMount {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RevelioMount params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90"));
    struct Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Stick_Click(bool OnlyOn, bool OnlyOff, AActor* CallFunc_GetActorOwner_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Stick Click"));
    struct Params_Stick_Click {
        bool OnlyOn; // 0x0
        bool OnlyOff; // 0x1
        char pad_2[0x6];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        APawn* K2Node_DynamicCast_AsPawn; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AController* CallFunc_GetController_ReturnValue; // 0x20
        ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
    }; // Size: 0x31
    Params_Stick_Click params{};
    params.OnlyOn = (bool)OnlyOn;
    params.OnlyOff = (bool)OnlyOff;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetController_ReturnValue = (AController*)CallFunc_GetController_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player_Controller = (ABiped_PlayerController*)K2Node_DynamicCast_AsBiped_Player_Controller;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_3"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_58(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_58"));
    struct Params_CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_58 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_58 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_39(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_39"));
    struct Params_InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_39 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_39 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::UpdateCameraLookAtHeadTrackingTarget(ACameraStackLookAtTargetActor* CallFunc_GetLookAtTargetActorWithStrength_ReturnValue, ACameraStackLookAtTargetActor* CallFunc_GetLookAtTargetActorWithStrength_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_23(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_23"));
    struct Params_InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_23 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_23 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_11(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_11"));
    struct Params_GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_11 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_11 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Dodge(bool FakeDodge, AActor* CallFunc_GetActorOwner_ReturnValue, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Dodge"));
    struct Params_Dodge {
        bool FakeDodge; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue_1; // 0x20
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue; // 0x38
    }; // Size: 0x40
    Params_Dodge params{};
    params.FakeDodge = (bool)FakeDodge;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_RiderComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_1 = (AActor*)CallFunc_GetActorOwner_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetGameLogicObject_ReturnValue = (UGameLogicObject*)CallFunc_GetGameLogicObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_6(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_6"));
    struct Params_GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_6 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_6 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::Teleported(AAmbulatory_Character* InCharacter, FVector InAmountDisplaced, FRotator InAmoundRotated, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.Teleported"));
    struct Params_Teleported {
        AAmbulatory_Character* InCharacter; // 0x0
        FVector InAmountDisplaced; // 0x8
        FRotator InAmoundRotated; // 0x14
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        float CallFunc_BreakVector_X; // 0x2c
        float CallFunc_BreakVector_Y; // 0x30
        float CallFunc_BreakVector_Z; // 0x34
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_Teleported params{};
    params.InCharacter = (AAmbulatory_Character*)InCharacter;
    params.InAmountDisplaced = (FVector)InAmountDisplaced;
    params.InAmoundRotated = (FRotator)InAmoundRotated;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StartSprint(ESpeedModifierType::Type SpeedModType, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, bool CallFunc_IsActorDisillusioned_ReturnValue) {}
void UBTS_Biped_TopLevel_C::SpreadFeed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SpreadFeed"));
    struct Params_SpreadFeed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SpreadFeed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GetReactorTags(FGameplayTagContainer MunitionTags, FGameplayTagContainer& ReactorTags, FGameplayTagContainer ReactorTagsTemp, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1) {}
void UBTS_Biped_TopLevel_C::StoreImpactValuesOnBlackboard(UClass* AbilityClass, AActor* ImpactInstigator, FVector TraceDirection, FVector ImpactPoint, FVector ImpactNormal, AActor* HitActor, FName HitBoneName, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StoreImpactValuesOnBlackboard"));
    struct Params_StoreImpactValuesOnBlackboard {
        UClass* AbilityClass; // 0x0
        AActor* ImpactInstigator; // 0x8
        FVector TraceDirection; // 0x10
        FVector ImpactPoint; // 0x1c
        FVector ImpactNormal; // 0x28
        char pad_34[0x4];
        AActor* HitActor; // 0x38
        FName HitBoneName; // 0x40
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x48
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x50
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x58
        FName CallFunc_MakeLiteralName_ReturnValue_3; // 0x60
        FName CallFunc_MakeLiteralName_ReturnValue_4; // 0x68
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x70
        FName CallFunc_MakeLiteralName_ReturnValue_5; // 0x78
    }; // Size: 0x80
    Params_StoreImpactValuesOnBlackboard params{};
    params.AbilityClass = (UClass*)AbilityClass;
    params.ImpactInstigator = (AActor*)ImpactInstigator;
    params.TraceDirection = (FVector)TraceDirection;
    params.ImpactPoint = (FVector)ImpactPoint;
    params.ImpactNormal = (FVector)ImpactNormal;
    params.HitActor = (AActor*)HitActor;
    params.HitBoneName = (FName)HitBoneName;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_MakeLiteralName_ReturnValue_3 = (FName)CallFunc_MakeLiteralName_ReturnValue_3;
    params.CallFunc_MakeLiteralName_ReturnValue_4 = (FName)CallFunc_MakeLiteralName_ReturnValue_4;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_5 = (FName)CallFunc_MakeLiteralName_ReturnValue_5;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CastFinisher(int32_t FinisherIndex, AActor* CallFunc_GetActorOwner_ReturnValue, AWandTool* Temp_object_Variable, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1) {}
void UBTS_Biped_TopLevel_C::CompleteTwitchSpell(int32_t SpellIndex, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CompleteTwitchSpell"));
    struct Params_CompleteTwitchSpell {
        int32_t SpellIndex; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        AActor* CallFunc_GetActorOwner_ReturnValue_1; // 0x10
        FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue; // 0x18
        FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue; // 0x1c
        FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue_1; // 0x20
    }; // Size: 0x24
    Params_CompleteTwitchSpell params{};
    params.SpellIndex = (int32_t)SpellIndex;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue_1 = (AActor*)CallFunc_GetActorOwner_ReturnValue_1;
    params.CallFunc_BroadcastAction_Actor_ReturnValue = (FVariantMapHandle)CallFunc_BroadcastAction_Actor_ReturnValue;
    params.CallFunc_CreateVariantMap_ReturnValue = (FVariantMapHandle)CallFunc_CreateVariantMap_ReturnValue;
    params.CallFunc_BroadcastAction_Actor_ReturnValue_1 = (FVariantMapHandle)CallFunc_BroadcastAction_Actor_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StopSprint(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue) {}
void UBTS_Biped_TopLevel_C::SetButtonQueueTimer(FName NewParam, float Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetButtonQueueTimer"));
    struct Params_SetButtonQueueTimer {
        FName NewParam; // 0x0
        float Value; // 0x8
        char pad_c[0x4];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetButtonQueueTimer params{};
    params.NewParam = (FName)NewParam;
    params.Value = (float)Value;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_73(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_73"));
    struct Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_73 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_73 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SetButtonKeyValue(FName KeyName, bool Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SetButtonKeyValue"));
    struct Params_SetButtonKeyValue {
        FName KeyName; // 0x0
        bool Value; // 0x8
        char pad_9[0x7];
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetButtonKeyValue params{};
    params.KeyName = (FName)KeyName;
    params.Value = (bool)Value;
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_13(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_13"));
    struct Params_GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_13 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_13 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_55(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_55"));
    struct Params_CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_55 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_55 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_54(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_54"));
    struct Params_CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_54 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_54 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_HealthButton_K2Node_CustomInputActionEvent_106(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_HealthButton_K2Node_CustomInputActionEvent_106"));
    struct Params_InpActEvt_HealthButton_K2Node_CustomInputActionEvent_106 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_HealthButton_K2Node_CustomInputActionEvent_106 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_101(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_101"));
    struct Params_InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_101 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_101 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99"));
    struct Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_98(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_98"));
    struct Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_98 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_98 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97"));
    struct Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96"));
    struct Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_95(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_95"));
    struct Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_95 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_95 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OpenChest(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OpenChest"));
    struct Params_OpenChest {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_OpenChest params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_76(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_76"));
    struct Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_76 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_76 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94"));
    struct Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93"));
    struct Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_18(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_18"));
    struct Params_InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_18 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_18 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_92(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_92"));
    struct Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_92 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_92 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91"));
    struct Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_89(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_89"));
    struct Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_89 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_89 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87"));
    struct Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_86(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_86"));
    struct Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_86 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_86 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::PlayerInputSoonToBeRemoved0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerInputSoonToBeRemoved"));
    struct Params_PlayerInputSoonToBeRemoved {
    }; // Size: 0x0
    Params_PlayerInputSoonToBeRemoved params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_85(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_85"));
    struct Params_InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_85 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_85 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84"));
    struct Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_82(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_82"));
    struct Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_82 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_82 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_81(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_81"));
    struct Params_InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_81 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_81 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_80(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_80"));
    struct Params_InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_80 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_80 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_78(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_78"));
    struct Params_InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_78 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_78 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_79(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_79"));
    struct Params_InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_79 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_79 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_53(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_53"));
    struct Params_CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_53 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_53 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77"));
    struct Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_45(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_45"));
    struct Params_CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_45 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_45 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75"));
    struct Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74"));
    struct Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_52(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_52"));
    struct Params_CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_52 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_52 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SurfaceTypeChanged(UObject* Caller, FSurfaceTypeChanged& SurfaceTypeChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SurfaceTypeChanged"));
    struct Params_SurfaceTypeChanged {
        UObject* Caller; // 0x0
        FSurfaceTypeChanged SurfaceTypeChanged; // 0x8
    }; // Size: 0x1c
    Params_SurfaceTypeChanged params{};
    params.Caller = (UObject*)Caller;
    params.SurfaceTypeChanged = (FSurfaceTypeChanged)SurfaceTypeChanged;
    ProcessEvent(func, &params);
    SurfaceTypeChanged = params.SurfaceTypeChanged;
}
void UBTS_Biped_TopLevel_C::CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_51(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_51"));
    struct Params_CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_51 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_51 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_70(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_70"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_70 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_70 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_69(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_69"));
    struct Params_InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_69 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_69 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_17(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_17"));
    struct Params_CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_17 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_17 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_12(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_12"));
    struct Params_GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_12 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_12 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_27(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_27"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_27 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_27 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68"));
    struct Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::WalkStopTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.WalkStopTimerExpired"));
    struct Params_WalkStopTimerExpired {
    }; // Size: 0x0
    Params_WalkStopTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67"));
    struct Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_66(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_66"));
    struct Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_66 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_66 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_65(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_65"));
    struct Params_InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_65 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_65 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::PlayerTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerTeleported"));
    struct Params_PlayerTeleported {
        AAmbulatory_Character* TeleportedCharacter; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_PlayerTeleported params{};
    params.TeleportedCharacter = (AAmbulatory_Character*)TeleportedCharacter;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_64(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_64"));
    struct Params_InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_64 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_64 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63"));
    struct Params_InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_62(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_62"));
    struct Params_InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_62 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_62 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_61(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_61"));
    struct Params_InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_61 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_61 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_44(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_44"));
    struct Params_CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_44 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_44 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_47(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_47"));
    struct Params_InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_47 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_47 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_60(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_60"));
    struct Params_InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_60 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_60 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_57(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_57"));
    struct Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_57 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_57 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_54(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_54"));
    struct Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_54 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_54 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56"));
    struct Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55"));
    struct Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_53(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_53"));
    struct Params_InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_53 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_53 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_InteractButton_K2Node_CustomInputActionEvent_49(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_InteractButton_K2Node_CustomInputActionEvent_49"));
    struct Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_49 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_InteractButton_K2Node_CustomInputActionEvent_49 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50"));
    struct Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49"));
    struct Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_48(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_48"));
    struct Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_48 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_48 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_48(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_48"));
    struct Params_InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_48 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_48 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_44(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_44"));
    struct Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_44 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_44 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SlowMo_K2Node_CustomInputActionEvent_43(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SlowMo_K2Node_CustomInputActionEvent_43"));
    struct Params_InpActEvt_SlowMo_K2Node_CustomInputActionEvent_43 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SlowMo_K2Node_CustomInputActionEvent_43 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_47(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_47"));
    struct Params_CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_47 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_47 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_LockOn_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SprintButton_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_3"));
    struct Params_CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_46(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_46"));
    struct Params_CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_46 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_46 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_41(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_41"));
    struct Params_InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_41 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_41 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_40(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_40"));
    struct Params_InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_40 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_40 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42"));
    struct Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_39(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_39"));
    struct Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_39 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_39 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_41(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_41"));
    struct Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_41 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_41 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40"));
    struct Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38"));
    struct Params_CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_37(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_37"));
    struct Params_CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_37 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_37 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_Teleport_K2Node_BTCustomActionEvent_36(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Teleport_K2Node_BTCustomActionEvent_36"));
    struct Params_CustActionEvt_Teleport_K2Node_BTCustomActionEvent_36 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Teleport_K2Node_BTCustomActionEvent_36 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_30(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_30"));
    struct Params_CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_30 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_30 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_35(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_35"));
    struct Params_CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_35 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_35 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_20(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_20"));
    struct Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_20 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_20 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_34(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_34"));
    struct Params_CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_34 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_34 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_33(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_33"));
    struct Params_CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_33 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_33 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35"));
    struct Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_32(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_32"));
    struct Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_32 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_32 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InteractTargetChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetChanged"));
    struct Params_InteractTargetChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractTargetChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31"));
    struct Params_CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_29(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_29"));
    struct Params_CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_29 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_29 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28"));
    struct Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_19(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_19"));
    struct Params_CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_19 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_19 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_26(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_26"));
    struct Params_CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_26 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_26 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GoToBed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GoToBed"));
    struct Params_GoToBed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_GoToBed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_25(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_25"));
    struct Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_25 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_25 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_24(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_24"));
    struct Params_CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_24 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_24 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_4"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OnLoaded_78E5F47E4DA3EB293495B4AB0017E703(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnLoaded_78E5F47E4DA3EB293495B4AB0017E703"));
    struct Params_OnLoaded_78E5F47E4DA3EB293495B4AB0017E703 {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_78E5F47E4DA3EB293495B4AB0017E703 params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_22(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_22"));
    struct Params_CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_22 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_22 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_36(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_36"));
    struct Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_36 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_36 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_Landed_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_Landed_K2Node_BTCustomActionEvent_8"));
    struct Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_Landed_K2Node_BTCustomActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_21(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_21"));
    struct Params_CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_21 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_21 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18"));
    struct Params_CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_16(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_16"));
    struct Params_CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_16 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_16 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_15(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_15"));
    struct Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_15 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_15 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_7"));
    struct Params_CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_14(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_14"));
    struct Params_CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_14 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_14 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_13(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_13"));
    struct Params_CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_13 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_13 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_12"));
    struct Params_CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_5"));
    struct Params_CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34"));
    struct Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_33(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_33"));
    struct Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_33 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_33 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32"));
    struct Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FastTravelViaMissionFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaMissionFinished"));
    struct Params_FastTravelViaMissionFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FastTravelViaMissionFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_JumpButton_K2Node_CustomInputActionEvent_31(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_JumpButton_K2Node_CustomInputActionEvent_31"));
    struct Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_31 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_JumpButton_K2Node_CustomInputActionEvent_31 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_11"));
    struct Params_CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_10(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_10"));
    struct Params_GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_10 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_10 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_10"));
    struct Params_CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_9"));
    struct Params_CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_30(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_30"));
    struct Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_30 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_30 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_25(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_25"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_25 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_25 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26"));
    struct Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_9(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_9"));
    struct Params_GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_9 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_9 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_24(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_24"));
    struct Params_InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_24 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_24 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_6"));
    struct Params_CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_22(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_22"));
    struct Params_InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_22 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_22 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_21(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_21"));
    struct Params_InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_21 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_21 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_20(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_20"));
    struct Params_InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_20 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_20 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_17(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_17"));
    struct Params_InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_17 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_17 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_LockOn_K2Node_CustomInputActionEvent_16(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_16"));
    struct Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_16 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_16 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InteractTargetSighted(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetSighted"));
    struct Params_InteractTargetSighted {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractTargetSighted params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_LockOn_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_15"));
    struct Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_15 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_15 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14"));
    struct Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SprintButton_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_13"));
    struct Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_13 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_13 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9"));
    struct Params_InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_8(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_8"));
    struct Params_GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_8 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_8 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::PlayerCharacterDied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PlayerCharacterDied"));
    struct Params_PlayerCharacterDied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PlayerCharacterDied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11"));
    struct Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::NearMissTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.NearMissTimerExpired"));
    struct Params_NearMissTimerExpired {
    }; // Size: 0x0
    Params_NearMissTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_10"));
    struct Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_8"));
    struct Params_InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CastFailedTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CastFailedTimerExpired"));
    struct Params_CastFailedTimerExpired {
    }; // Size: 0x0
    Params_CastFailedTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_0"));
    struct Params_CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_7(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_7"));
    struct Params_GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_7 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_7 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_5(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_5"));
    struct Params_GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_5 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_5 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_4(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_4"));
    struct Params_GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_4 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_4 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_3(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_3"));
    struct Params_GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_3 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_3 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.MunitionImpactDamage"));
    struct Params_MunitionImpactDamage {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_MunitionImpactDamage params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UBTS_Biped_TopLevel_C::CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_1"));
    struct Params_CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FastTravelViaMapFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaMapFinished"));
    struct Params_FastTravelViaMapFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FastTravelViaMapFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::AdditiveReactionComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.AdditiveReactionComplete"));
    struct Params_AdditiveReactionComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AdditiveReactionComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_6"));
    struct Params_InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5"));
    struct Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4"));
    struct Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_LockOn_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InpActEvt_LockOn_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InpActEvt_LockOn_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_LockOn_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_1(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_1"));
    struct Params_GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_1 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_1 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StupefyTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StupefyTimerExpired"));
    struct Params_StupefyTimerExpired {
    }; // Size: 0x0
    Params_StupefyTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ExitStealthMode(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ExitStealthMode"));
    struct Params_ExitStealthMode {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ExitStealthMode params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StupefyExpelliarmusTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StupefyExpelliarmusTimerExpired"));
    struct Params_StupefyExpelliarmusTimerExpired {
    }; // Size: 0x0
    Params_StupefyExpelliarmusTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ItemMenuTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ItemMenuTimerExpired"));
    struct Params_ItemMenuTimerExpired {
    }; // Size: 0x0
    Params_ItemMenuTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CloseWheel() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CloseWheel"));
    struct Params_CloseWheel {
    }; // Size: 0x0
    Params_CloseWheel params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::RevelioMountTriggered() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.RevelioMountTriggered"));
    struct Params_RevelioMountTriggered {
    }; // Size: 0x0
    Params_RevelioMountTriggered params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ActivateActionsOnHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ActivateActionsOnHUD"));
    struct Params_ActivateActionsOnHUD {
    }; // Size: 0x0
    Params_ActivateActionsOnHUD params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OppugnoTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OppugnoTimerExpired"));
    struct Params_OppugnoTimerExpired {
    }; // Size: 0x0
    Params_OppugnoTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ResetWalkToggle_Idle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetWalkToggle_Idle"));
    struct Params_ResetWalkToggle_Idle {
    }; // Size: 0x0
    Params_ResetWalkToggle_Idle params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::EnterFloo(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.EnterFloo"));
    struct Params_EnterFloo {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_EnterFloo params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::PutDownCarry(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.PutDownCarry"));
    struct Params_PutDownCarry {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PutDownCarry params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CatchCarry(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CatchCarry"));
    struct Params_CatchCarry {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CatchCarry params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DoPickup(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoPickup"));
    struct Params_DoPickup {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DoPickup params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::StationAbilityComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.StationAbilityComplete"));
    struct Params_StationAbilityComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationAbilityComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ForcedTalk(UObject* Caller, FForcedConversation& FForcedConversation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ForcedTalk"));
    struct Params_ForcedTalk {
        UObject* Caller; // 0x0
        FForcedConversation FForcedConversation; // 0x8
    }; // Size: 0x18
    Params_ForcedTalk params{};
    params.Caller = (UObject*)Caller;
    params.FForcedConversation = (FForcedConversation)FForcedConversation;
    ProcessEvent(func, &params);
    FForcedConversation = params.FForcedConversation;
}
void UBTS_Biped_TopLevel_C::TSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.TSighted"));
    struct Params_TSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DropCarry(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DropCarry"));
    struct Params_DropCarry {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DropCarry params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::NewHealthItemSelected(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.NewHealthItemSelected"));
    struct Params_NewHealthItemSelected {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_NewHealthItemSelected params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DodgeTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DodgeTimerExpired"));
    struct Params_DodgeTimerExpired {
    }; // Size: 0x0
    Params_DodgeTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FastTravelViaCrimeSceneFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FastTravelViaCrimeSceneFinished"));
    struct Params_FastTravelViaCrimeSceneFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FastTravelViaCrimeSceneFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::OnMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.OnMovementModeChanged"));
    struct Params_OnMovementModeChanged {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_OnMovementModeChanged params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SprintStopTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SprintStopTimerExpired"));
    struct Params_SprintStopTimerExpired {
    }; // Size: 0x0
    Params_SprintStopTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::CreatureMountComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.CreatureMountComplete"));
    struct Params_CreatureMountComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CreatureMountComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ResetKeyboardSprintWalkToggle(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetKeyboardSprintWalkToggle"));
    struct Params_ResetKeyboardSprintWalkToggle {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResetKeyboardSprintWalkToggle params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::FieldGuideTimerHandleExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.FieldGuideTimerHandleExpired"));
    struct Params_FieldGuideTimerHandleExpired {
    }; // Size: 0x0
    Params_FieldGuideTimerHandleExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::InteractTargetLost(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.InteractTargetLost"));
    struct Params_InteractTargetLost {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractTargetLost params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ResetShouldSprintOnStartMoving() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.ResetShouldSprintOnStartMoving"));
    struct Params_ResetShouldSprintOnStartMoving {
    }; // Size: 0x0
    Params_ResetShouldSprintOnStartMoving params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::DoPickupAnimation(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.DoPickupAnimation"));
    struct Params_DoPickupAnimation {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_DoPickupAnimation params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::SprintTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.SprintTimerExpired"));
    struct Params_SprintTimerExpired {
    }; // Size: 0x0
    Params_SprintTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::LockOnTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTS_Biped_TopLevel.BTS_Biped_TopLevel_C.LockOnTimerExpired"));
    struct Params_LockOnTimerExpired {
    }; // Size: 0x0
    Params_LockOnTimerExpired params{};
    ProcessEvent(func, &params);
}
void UBTS_Biped_TopLevel_C::ExecuteUbergraph_BTS_Biped_TopLevel(int32_t EntryPoint) {}
