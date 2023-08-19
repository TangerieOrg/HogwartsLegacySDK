#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "EUIHealthBarType.hpp"
#include "FGameplayTag.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UCreature_NurtureComponent.hpp"
#include "UFunction.hpp"
#include "UGameplayModComponent.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UInvalidationBox.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUI_BP_NPCHealthMeter_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_NPCHealthMeter_C::PlayFadeAnimation(bool FadeIn, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.PlayFadeAnimation"));
    struct Params_PlayFadeAnimation {
        bool FadeIn; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_PlayFadeAnimation params{};
    params.FadeIn = (bool)FadeIn;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
UUI_BP_NPCHealthMeter_C* UUI_BP_NPCHealthMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C");
    return (UUI_BP_NPCHealthMeter_C*)res;
}
void UUI_BP_NPCHealthMeter_C::CheckForNewTarget(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CheckForNewTarget"));
    struct Params_CheckForNewTarget {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CheckForNewTarget params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetLevelTextColor(float Level, bool Temp_bool_Variable, FName Temp_name_Variable, FName Temp_name_Variable_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UGameplayModComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetModBlackboardValue_OutValue, bool CallFunc_GetModBlackboardValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FName K2Node_Select_Default, FLinearColor CallFunc_GetColorByTag_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetLevelTextColor"));
    struct Params_SetLevelTextColor {
        float Level; // 0x0
        bool Temp_bool_Variable; // 0x4
        char pad_5[0x3];
        FName Temp_name_Variable; // 0x8
        FName Temp_name_Variable_1; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x20
        UGameplayModComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        float CallFunc_GetModBlackboardValue_OutValue; // 0x30
        bool CallFunc_GetModBlackboardValue_ReturnValue; // 0x34
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x35
        char pad_36[0x2];
        FName K2Node_Select_Default; // 0x38
        FLinearColor CallFunc_GetColorByTag_ReturnValue; // 0x40
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x50
    }; // Size: 0x78
    Params_SetLevelTextColor params{};
    params.Level = (float)Level;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UGameplayModComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetModBlackboardValue_OutValue = (float)CallFunc_GetModBlackboardValue_OutValue;
    params.CallFunc_GetModBlackboardValue_ReturnValue = (bool)CallFunc_GetModBlackboardValue_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.K2Node_Select_Default = (FName)K2Node_Select_Default;
    params.CallFunc_GetColorByTag_ReturnValue = (FLinearColor)CallFunc_GetColorByTag_ReturnValue;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::RemoveStealthDamageIndication(UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.RemoveStealthDamageIndication"));
    struct Params_RemoveStealthDamageIndication {
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x0
        float CallFunc_GetHealthPercentage_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RemoveStealthDamageIndication params{};
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetHealthPercentage_ReturnValue = (float)CallFunc_GetHealthPercentage_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::TargetAcquired(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.TargetAcquired"));
    struct Params_TargetAcquired {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_TargetAcquired params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetCurrentTargetActor(AActor* TargetActor, bool ShowName, bool ShowHealth, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetCurrentTargetActor"));
    struct Params_SetCurrentTargetActor {
        AActor* TargetActor; // 0x0
        bool ShowName; // 0x8
        bool ShowHealth; // 0x9
        bool CallFunc_IsValid_ReturnValue; // 0xa
    }; // Size: 0xb
    Params_SetCurrentTargetActor params{};
    params.TargetActor = (AActor*)TargetActor;
    params.ShowName = (bool)ShowName;
    params.ShowHealth = (bool)ShowHealth;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::UpdateStealthKillStatus(bool InStealthRange, float StealthDamage, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_SpellWillKillTarget_OutDamage, bool CallFunc_SpellWillKillTarget_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.UpdateStealthKillStatus"));
    struct Params_UpdateStealthKillStatus {
        bool InStealthRange; // 0x0
        char pad_1[0x3];
        float StealthDamage; // 0x4
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
        float CallFunc_GetHealth_ReturnValue; // 0x18
        float CallFunc_SpellWillKillTarget_OutDamage; // 0x1c
        bool CallFunc_SpellWillKillTarget_ReturnValue; // 0x20
        char pad_21[0x3];
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x24
        float CallFunc_FMax_ReturnValue; // 0x28
        float CallFunc_GetMaxHealth_ReturnValue; // 0x2c
        float CallFunc_GetHealthPercentage_ReturnValue; // 0x30
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x34
    }; // Size: 0x38
    Params_UpdateStealthKillStatus params{};
    params.InStealthRange = (bool)InStealthRange;
    params.StealthDamage = (float)StealthDamage;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetHealth_ReturnValue = (float)CallFunc_GetHealth_ReturnValue;
    params.CallFunc_SpellWillKillTarget_OutDamage = (float)CallFunc_SpellWillKillTarget_OutDamage;
    params.CallFunc_SpellWillKillTarget_ReturnValue = (bool)CallFunc_SpellWillKillTarget_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_FMax_ReturnValue = (float)CallFunc_FMax_ReturnValue;
    params.CallFunc_GetMaxHealth_ReturnValue = (float)CallFunc_GetMaxHealth_ReturnValue;
    params.CallFunc_GetHealthPercentage_ReturnValue = (float)CallFunc_GetHealthPercentage_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetHealthBarColor(EUIHealthBarType HealthBarType, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FName Temp_name_Variable, FName Temp_name_Variable_1, FName K2Node_Select_Default, FLinearColor CallFunc_GetColorByTag_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetHealthBarColor"));
    struct Params_SetHealthBarColor {
        EUIHealthBarType HealthBarType; // 0x0
        bool Temp_bool_Variable; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2
        char pad_3[0x1];
        FName Temp_name_Variable; // 0x4
        FName Temp_name_Variable_1; // 0xc
        FName K2Node_Select_Default; // 0x14
        FLinearColor CallFunc_GetColorByTag_ReturnValue; // 0x1c
    }; // Size: 0x2c
    Params_SetHealthBarColor params{};
    params.HealthBarType = (EUIHealthBarType)HealthBarType;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.K2Node_Select_Default = (FName)K2Node_Select_Default;
    params.CallFunc_GetColorByTag_ReturnValue = (FLinearColor)CallFunc_GetColorByTag_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::HealthChanged(AActor* Target, float Health, bool Not_sure, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.HealthChanged"));
    struct Params_HealthChanged {
        AActor* Target; // 0x0
        float Health; // 0x8
        bool Not_sure; // 0xc
        bool CallFunc_IsValid_ReturnValue; // 0xd
        char pad_e[0x2];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x18
        float CallFunc_GetUIHealthPercent_ReturnValue; // 0x20
        bool CallFunc_NearlyEqual_FloatFloat_ReturnValue; // 0x24
    }; // Size: 0x25
    Params_HealthChanged params{};
    params.Target = (AActor*)Target;
    params.Health = (float)Health;
    params.Not_sure = (bool)Not_sure;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetUIHealthPercent_ReturnValue = (float)CallFunc_GetUIHealthPercent_ReturnValue;
    params.CallFunc_NearlyEqual_FloatFloat_ReturnValue = (bool)CallFunc_NearlyEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::CreatureInfo(AActor* InCreature, UCreature_NurtureComponent* NurtureComponent, UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCreatureCaptured_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_IsValid_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CreatureInfo"));
    struct Params_CreatureInfo {
        AActor* InCreature; // 0x0
        UCreature_NurtureComponent* NurtureComponent; // 0x8
        UCreatureState* CreatureState; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x7];
        UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue_1; // 0x28
        bool CallFunc_IsCreatureCaptured_ReturnValue; // 0x29
        char pad_2a[0x6];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x30
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x38
        UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue_2; // 0x48
        bool CallFunc_GetCanBeCaptured_ReturnValue; // 0x49
        bool CallFunc_IsValid_ReturnValue_3; // 0x4a
    }; // Size: 0x4b
    Params_CreatureInfo params{};
    params.InCreature = (AActor*)InCreature;
    params.NurtureComponent = (UCreature_NurtureComponent*)NurtureComponent;
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_NurtureComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsCreatureCaptured_ReturnValue = (bool)CallFunc_IsCreatureCaptured_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    params.CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue = (UCreatureDefinition*)CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_GetCanBeCaptured_ReturnValue = (bool)CallFunc_GetCanBeCaptured_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::CanStealthKill(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.CanStealthKill"));
    struct Params_CanStealthKill {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_CanStealthKill params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::UpdateTarget(AActor* Target, bool ShowName, bool ShowHealthBar, float CurAnimTime, bool L_ShowBadge, bool L_ShowName, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, bool Temp_bool_Variable, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetLevel_ReturnValue, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue) {}
void UUI_BP_NPCHealthMeter_C::SetupWildCreature(UCreature_NurtureComponent* NurtureComponent, UCreatureState* CreatureState, bool CallFunc_GetIsAlbino_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, FSlateBrush K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetupWildCreature"));
    struct Params_SetupWildCreature {
        UCreature_NurtureComponent* NurtureComponent; // 0x0
        UCreatureState* CreatureState; // 0x8
        bool CallFunc_GetIsAlbino_ReturnValue; // 0x10
        char pad_11[0x7];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue; // 0x18
        bool CallFunc_GetIsMale_ReturnValue; // 0xa0
        char pad_a1[0x7];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1; // 0xa8
        bool CallFunc_IsValid_ReturnValue; // 0x130
        bool Temp_bool_Variable; // 0x131
        char pad_132[0x6];
        FSlateBrush K2Node_Select_Default; // 0x138
        bool CallFunc_IsValid_ReturnValue_1; // 0x1c0
        char pad_1c1[0x7];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x1c8
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x1d0
    }; // Size: 0x1d8
    Params_SetupWildCreature params{};
    params.NurtureComponent = (UCreature_NurtureComponent*)NurtureComponent;
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CallFunc_GetIsAlbino_ReturnValue = (bool)CallFunc_GetIsAlbino_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue_1 = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (FSlateBrush)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetupTamedCreature(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool Temp_bool_Variable, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetupTamedCreature"));
    struct Params_SetupTamedCreature {
        UCreatureState* CreatureState; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        bool CallFunc_GetIsMale_ReturnValue; // 0x9
        bool CallFunc_IsAlbino_ReturnValue; // 0xa
        bool Temp_bool_Variable; // 0xb
        char pad_c[0x4];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue; // 0x10
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1; // 0x98
        FSlateBrush K2Node_Select_Default; // 0x120
    }; // Size: 0x1a8
    Params_SetupTamedCreature params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_IsAlbino_ReturnValue = (bool)CallFunc_IsAlbino_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_MakeBrushFromTexture_ReturnValue = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue_1 = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue_1;
    params.K2Node_Select_Default = (FSlateBrush)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetDummyHealthBarColor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetDummyHealthBarColor"));
    struct Params_SetDummyHealthBarColor {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SetDummyHealthBarColor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::RestoreEnemyHealthBarColor(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.RestoreEnemyHealthBarColor"));
    struct Params_RestoreEnemyHealthBarColor {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RestoreEnemyHealthBarColor params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::TargetLost() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.TargetLost"));
    struct Params_TargetLost {
    }; // Size: 0x0
    Params_TargetLost params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::SetColorBlindMode(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.SetColorBlindMode"));
    struct Params_SetColorBlindMode {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SetColorBlindMode params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::On_FadeOut_Complete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/NPCHealthMeter/UI_BP_NPCHealthMeter.UI_BP_NPCHealthMeter_C.On FadeOut Complete"));
    struct Params_On_FadeOut_Complete {
    }; // Size: 0x0
    Params_On_FadeOut_Complete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_NPCHealthMeter_C::ExecuteUbergraph_UI_BP_NPCHealthMeter(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UObject* K2Node_CustomEvent_Caller_3, UObject* K2Node_CustomEvent_Caller_2) {}
