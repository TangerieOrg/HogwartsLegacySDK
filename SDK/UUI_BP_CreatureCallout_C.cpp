#include "AActor.hpp"
#include "ACreature_Character.hpp"
#include "ANPC_Character.hpp"
#include "APawn.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSlateBrush.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBorder.hpp"
#include "UCallOutComponent.hpp"
#include "UCanvasPanel.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UCreature_NurtureComponent.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_CreatureCallout_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UWidget.hpp"
void UUI_BP_CreatureCallout_C::SetHasOffscreenProxyActive(bool HasOffscreenProxy) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetHasOffscreenProxyActive"));
    struct Params_SetHasOffscreenProxyActive {
        bool HasOffscreenProxy; // 0x0
    }; // Size: 0x1
    Params_SetHasOffscreenProxyActive params{};
    params.HasOffscreenProxy = (bool)HasOffscreenProxy;
    ProcessEvent(func, &params);
}
UUI_BP_CreatureCallout_C* UUI_BP_CreatureCallout_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C");
    return (UUI_BP_CreatureCallout_C*)res;
}
void UUI_BP_CreatureCallout_C::targeted(ANPC_Character* NPC_Character, bool ShowName, bool ShowHealth, bool ShowBadge, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue, bool CallFunc_ShouldShowName_ReturnValue, bool CallFunc_ShouldShowHealthBar_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_ShouldShowBadge_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_AreAllies_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_IsNearDeathKneeling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.targeted"));
    struct Params_targeted {
        ANPC_Character* NPC_Character; // 0x0
        bool ShowName; // 0x8
        bool ShowHealth; // 0x9
        bool ShowBadge; // 0xa
        ESlateVisibility Temp_byte_Variable; // 0xb
        ESlateVisibility Temp_byte_Variable_1; // 0xc
        bool Temp_bool_Variable; // 0xd
        ESlateVisibility Temp_byte_Variable_2; // 0xe
        ESlateVisibility Temp_byte_Variable_3; // 0xf
        bool Temp_bool_Variable_1; // 0x10
        ESlateVisibility Temp_byte_Variable_4; // 0x11
        ESlateVisibility Temp_byte_Variable_5; // 0x12
        bool CallFunc_Not_PreBool_ReturnValue; // 0x13
        char pad_14[0x4];
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x18
        bool CallFunc_GetPlayingDemoBuild_ReturnValue; // 0x20
        bool CallFunc_ShouldShowName_ReturnValue; // 0x21
        bool CallFunc_ShouldShowHealthBar_ReturnValue; // 0x22
        bool CallFunc_BooleanOR_ReturnValue; // 0x23
        char pad_24[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x28
        bool CallFunc_ShouldShowBadge_ReturnValue; // 0x30
        char pad_31[0x7];
        APawn* CallFunc_GetPlayerPawn_ReturnValue; // 0x38
        bool CallFunc_AreAllies_ReturnValue; // 0x40
        ESlateVisibility K2Node_Select_Default; // 0x41
        ESlateVisibility K2Node_Select_Default_1; // 0x42
        char pad_43[0x5];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x48
        bool Temp_bool_Variable_2; // 0x50
        bool CallFunc_IsNearDeathKneeling_ReturnValue; // 0x51
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x52
        ESlateVisibility K2Node_Select_Default_2; // 0x53
        bool CallFunc_BooleanAND_ReturnValue; // 0x54
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x55
        char pad_56[0x2];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x58
        bool K2Node_DynamicCast_bSuccess; // 0x60
    }; // Size: 0x61
    Params_targeted params{};
    params.NPC_Character = (ANPC_Character*)NPC_Character;
    params.ShowName = (bool)ShowName;
    params.ShowHealth = (bool)ShowHealth;
    params.ShowBadge = (bool)ShowBadge;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.Temp_byte_Variable_5 = (ESlateVisibility)Temp_byte_Variable_5;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    params.CallFunc_GetPlayingDemoBuild_ReturnValue = (bool)CallFunc_GetPlayingDemoBuild_ReturnValue;
    params.CallFunc_ShouldShowName_ReturnValue = (bool)CallFunc_ShouldShowName_ReturnValue;
    params.CallFunc_ShouldShowHealthBar_ReturnValue = (bool)CallFunc_ShouldShowHealthBar_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_ShouldShowBadge_ReturnValue = (bool)CallFunc_ShouldShowBadge_ReturnValue;
    params.CallFunc_GetPlayerPawn_ReturnValue = (APawn*)CallFunc_GetPlayerPawn_ReturnValue;
    params.CallFunc_AreAllies_ReturnValue = (bool)CallFunc_AreAllies_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.CallFunc_IsNearDeathKneeling_ReturnValue = (bool)CallFunc_IsNearDeathKneeling_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
UWidget* UUI_BP_CreatureCallout_C::GetOffscreenIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.GetOffscreenIndicator"));
    struct Params_GetOffscreenIndicator {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffscreenIndicator params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UUI_BP_CreatureCallout_C::IsCreatureTame(ACreature_Character* Creature, bool& bIsTame, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, FName CallFunc_GetNurturingSpaceID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.IsCreatureTame"));
    struct Params_IsCreatureTame {
        ACreature_Character* Creature; // 0x0
        bool bIsTame; // 0x8
        char pad_9[0x7];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x10
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x18
        FName CallFunc_GetNurturingSpaceID_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_IsCreatureTame params{};
    params.Creature = (ACreature_Character*)Creature;
    params.bIsTame = (bool)bIsTame;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    params.CallFunc_GetNurturingSpaceID_ReturnValue = (FName)CallFunc_GetNurturingSpaceID_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
    bIsTame = params.bIsTame;
}
float UUI_BP_CreatureCallout_C::GetOutroDuration(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.GetOutroDuration"));
    struct Params_GetOutroDuration {
        int32_t OutroType; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetOutroDuration params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUI_BP_CreatureCallout_C::UpdateBarPercent(float HealthPercent, float DamageAmount, bool PreviouslyHidden, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateBarPercent"));
    struct Params_UpdateBarPercent {
        float HealthPercent; // 0x0
        float DamageAmount; // 0x4
        bool PreviouslyHidden; // 0x8
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x9
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0xa
        bool CallFunc_BooleanAND_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_UpdateBarPercent params{};
    params.HealthPercent = (float)HealthPercent;
    params.DamageAmount = (float)DamageAmount;
    params.PreviouslyHidden = (bool)PreviouslyHidden;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::AttackThreatDataChange(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.AttackThreatDataChange"));
    struct Params_AttackThreatDataChange {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_AttackThreatDataChange params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetupCreatureSpecificUIWild(AActor* CreatureCharacterActor, bool CallFunc_IsValid_ReturnValue, UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_GetIsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4, FString CallFunc_GetCreatureName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureSpecificUIWild"));
    struct Params_SetupCreatureSpecificUIWild {
        AActor* CreatureCharacterActor; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue_1; // 0x18
        char pad_19[0x7];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x20
        bool Temp_bool_Variable; // 0x28
        char pad_29[0x7];
        UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue_2; // 0x38
        bool CallFunc_GetCanBeCaptured_ReturnValue; // 0x39
        bool CallFunc_GetIsAlbino_ReturnValue; // 0x3a
        bool CallFunc_GetIsMale_ReturnValue; // 0x3b
        bool CallFunc_IsValid_ReturnValue_3; // 0x3c
        char pad_3d[0x3];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue; // 0x40
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1; // 0xc8
        FSlateBrush K2Node_Select_Default; // 0x150
        bool CallFunc_IsValid_ReturnValue_4; // 0x1d8
        char pad_1d9[0x7];
        FString CallFunc_GetCreatureName_ReturnValue; // 0x1e0
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x1f0
        char pad_1f1[0x7];
        UCreatureManager* CallFunc_Get_ReturnValue_1; // 0x1f8
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x200
    }; // Size: 0x208
    Params_SetupCreatureSpecificUIWild params{};
    params.CreatureCharacterActor = (AActor*)CreatureCharacterActor;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_NurtureComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue = (UCreatureDefinition*)CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_GetCanBeCaptured_ReturnValue = (bool)CallFunc_GetCanBeCaptured_ReturnValue;
    params.CallFunc_GetIsAlbino_ReturnValue = (bool)CallFunc_GetIsAlbino_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.CallFunc_MakeBrushFromTexture_ReturnValue = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue_1 = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue_1;
    params.K2Node_Select_Default = (FSlateBrush)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue_4 = (bool)CallFunc_IsValid_ReturnValue_4;
    params.CallFunc_GetCreatureName_ReturnValue = (FString)CallFunc_GetCreatureName_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UCreatureManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::UpdateCreatureSpecificUI(UCreatureState* CreatureState, bool ShouldMinimize, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetPlayerViewTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateCreatureSpecificUI"));
    struct Params_UpdateCreatureSpecificUI {
        UCreatureState* CreatureState; // 0x0
        bool ShouldMinimize; // 0x8
        bool CallFunc_IsAlbino_ReturnValue; // 0x9
        bool CallFunc_IsValid_ReturnValue; // 0xa
        char pad_b[0x5];
        FTransform CallFunc_GetPlayerViewTransform_ReturnValue; // 0x10
        FVector CallFunc_BreakTransform_Location; // 0x40
        FRotator CallFunc_BreakTransform_Rotation; // 0x4c
        FVector CallFunc_BreakTransform_Scale; // 0x58
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x64
        float CallFunc_Vector_DistanceSquared_ReturnValue; // 0x70
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x74
    }; // Size: 0x75
    Params_UpdateCreatureSpecificUI params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.ShouldMinimize = (bool)ShouldMinimize;
    params.CallFunc_IsAlbino_ReturnValue = (bool)CallFunc_IsAlbino_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetPlayerViewTransform_ReturnValue = (FTransform)CallFunc_GetPlayerViewTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Vector_DistanceSquared_ReturnValue = (float)CallFunc_Vector_DistanceSquared_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetupCreatureSpecificUI(AActor* CreatureCharacterActor, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable, FSlateBrush K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureSpecificUI"));
    struct Params_SetupCreatureSpecificUI {
        AActor* CreatureCharacterActor; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
        float CallFunc_GetUIHealthPercent_ReturnValue; // 0x18
        char pad_1c[0x4];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue; // 0x20
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1; // 0xa8
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x130
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x138
        bool CallFunc_IsAlbino_ReturnValue; // 0x140
        bool CallFunc_GetIsMale_ReturnValue; // 0x141
        bool Temp_bool_Variable; // 0x142
        char pad_143[0x5];
        FSlateBrush K2Node_Select_Default; // 0x148
    }; // Size: 0x1d0
    Params_SetupCreatureSpecificUI params{};
    params.CreatureCharacterActor = (AActor*)CreatureCharacterActor;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetUIHealthPercent_ReturnValue = (float)CallFunc_GetUIHealthPercent_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue_1 = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue_1;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    params.CallFunc_IsAlbino_ReturnValue = (bool)CallFunc_IsAlbino_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (FSlateBrush)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetCalloutVisibility(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetCalloutVisibility"));
    struct Params_SetCalloutVisibility {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_SetCalloutVisibility params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::UpdateCallOutUI(FName CharacterID, float BarPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
        FName CharacterID; // 0x0
        float BarPercent; // 0x8
    }; // Size: 0xc
    Params_UpdateCallOutUI params{};
    params.CharacterID = (FName)CharacterID;
    params.BarPercent = (float)BarPercent;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::AwareStateInfoChanged(bool bFromUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.AwareStateInfoChanged"));
    struct Params_AwareStateInfoChanged {
        bool bFromUpdate; // 0x0
    }; // Size: 0x1
    Params_AwareStateInfoChanged params{};
    params.bFromUpdate = (bool)bFromUpdate;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetIsOffscreenCallout(bool IsOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetIsOffscreenCallout"));
    struct Params_SetIsOffscreenCallout {
        bool IsOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetIsOffscreenCallout params{};
    params.IsOffscreen = (bool)IsOffscreen;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupWidget"));
    struct Params_SetupWidget {
        AActor* Parent; // 0x0
        UCallOutComponent* CallOutComponent; // 0x8
    }; // Size: 0x10
    Params_SetupWidget params{};
    params.Parent = (AActor*)Parent;
    params.CallOutComponent = (UCallOutComponent*)CallOutComponent;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::ShowWidget(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.ShowWidget"));
    struct Params_ShowWidget {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_ShowWidget params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::SetupCreatureUI(AActor* CreatureActor, bool IsTamed) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.SetupCreatureUI"));
    struct Params_SetupCreatureUI {
        AActor* CreatureActor; // 0x0
        bool IsTamed; // 0x8
    }; // Size: 0x9
    Params_SetupCreatureUI params{};
    params.CreatureActor = (AActor*)CreatureActor;
    params.IsTamed = (bool)IsTamed;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::HealthBarUpdate(AActor* Target, float InHealthChange, bool IndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_CreatureCallout.UI_BP_CreatureCallout_C.HealthBarUpdate"));
    struct Params_HealthBarUpdate {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool IndicateHUD; // 0xc
    }; // Size: 0xd
    Params_HealthBarUpdate params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.IndicateHUD = (bool)IndicateHUD;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureCallout_C::ExecuteUbergraph_UI_BP_CreatureCallout(int32_t EntryPoint, bool K2Node_Event_IsVisible, bool K2Node_Event_Revealio_1, bool K2Node_Event_bFromUpdate, bool K2Node_Event_HasOffscreenProxy, bool K2Node_Event_IsOffscreen, FName K2Node_Event_CharacterID, float K2Node_Event_BarPercent, AActor* K2Node_Event_Parent, UCallOutComponent* K2Node_Event_CallOutComponent, bool K2Node_Event_Revealio, AActor* K2Node_Event_CreatureActor, bool K2Node_Event_IsTamed, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetDbId_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_CustomEvent_Target, float K2Node_CustomEvent_InHealthChange, bool K2Node_CustomEvent_IndicateHUD, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreatureTame_bIsTame, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue) {}
