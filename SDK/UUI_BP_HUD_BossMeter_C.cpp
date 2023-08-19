#include "AActor.hpp"
#include "APawn.hpp"
#include "ESlateVisibility.hpp"
#include "FGameplayTag.hpp"
#include "FHealthThreshold.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UCanvasPanel.hpp"
#include "UCharacterStateInfo.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UGameplayModComponent.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UInvalidationBox.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "USlider.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_HUD_BossMeter_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HUD_BossMeter_C::TargetAcquired(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.TargetAcquired"));
    struct Params_TargetAcquired {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_TargetAcquired params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
UUI_BP_HUD_BossMeter_C* UUI_BP_HUD_BossMeter_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C");
    return (UUI_BP_HUD_BossMeter_C*)res;
}
void UUI_BP_HUD_BossMeter_C::TargetLost() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.TargetLost"));
    struct Params_TargetLost {
    }; // Size: 0x0
    Params_TargetLost params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_BossMeter_C::UpdateCreatureInfo(AActor* InCreature, UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.UpdateCreatureInfo"));
    struct Params_UpdateCreatureInfo {
        AActor* InCreature; // 0x0
        UCreatureState* CreatureState; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_GetIsMale_ReturnValue; // 0x11
        bool Temp_bool_Variable; // 0x12
        char pad_13[0x5];
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue; // 0x18
        FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1; // 0xa0
        FSlateBrush K2Node_Select_Default; // 0x128
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x1b0
        bool CallFunc_IsValid_ReturnValue_1; // 0x1b8
        char pad_1b9[0x7];
        UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue; // 0x1c0
    }; // Size: 0x1c8
    Params_UpdateCreatureInfo params{};
    params.InCreature = (AActor*)InCreature;
    params.CreatureState = (UCreatureState*)CreatureState;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_MakeBrushFromTexture_ReturnValue = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue;
    params.CallFunc_MakeBrushFromTexture_ReturnValue_1 = (FSlateBrush)CallFunc_MakeBrushFromTexture_ReturnValue_1;
    params.K2Node_Select_Default = (FSlateBrush)K2Node_Select_Default;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_BP_GetCreatureStateByActor_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByActor_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_BossMeter_C::HealthChanged(AActor* Target, float Health, bool Not_sure, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.HealthChanged"));
    struct Params_HealthChanged {
        AActor* Target; // 0x0
        float Health; // 0x8
        bool Not_sure; // 0xc
        bool CallFunc_IsValid_ReturnValue; // 0xd
        char pad_e[0x2];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
        float CallFunc_GetUIHealthPercent_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_HealthChanged params{};
    params.Target = (AActor*)Target;
    params.Health = (float)Health;
    params.Not_sure = (bool)Not_sure;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetUIHealthPercent_ReturnValue = (float)CallFunc_GetUIHealthPercent_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_BossMeter_C::SetCurrentTargetActor(AActor* TargetActor, bool ShowName, bool ShowHealth) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.SetCurrentTargetActor"));
    struct Params_SetCurrentTargetActor {
        AActor* TargetActor; // 0x0
        bool ShowName; // 0x8
        bool ShowHealth; // 0x9
    }; // Size: 0xa
    Params_SetCurrentTargetActor params{};
    params.TargetActor = (AActor*)TargetActor;
    params.ShowName = (bool)ShowName;
    params.ShowHealth = (bool)ShowHealth;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_BossMeter_C::UpdateBossTarget(AActor* BossTarget, bool ShowBossName, bool ShowBossHealthBar, bool FoundThresholds, bool TempShowBadge, bool TempShowName, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32_t Temp_int_Array_Index_Variable, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, ESlateVisibility Temp_byte_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, USlider* K2Node_DynamicCast_AsSlider, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, UCharacterStateInfo* K2Node_DynamicCast_AsCharacter_State_Info, bool K2Node_DynamicCast_bSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FHealthThreshold>& CallFunc_GetHealthThresholdArray_ReturnValue, FHealthThreshold CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, ESlateVisibility Temp_byte_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UGameplayModComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetModBlackboardValue_OutValue, bool CallFunc_GetModBlackboardValue_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, float CallFunc_GetLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {}
void UUI_BP_HUD_BossMeter_C::BossHealthChanged(AActor* BossTarget, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BossMeter/UI_BP_HUD_BossMeter.UI_BP_HUD_BossMeter_C.BossHealthChanged"));
    struct Params_BossHealthChanged {
        AActor* BossTarget; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x10
        float CallFunc_GetUIHealthPercent_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_BossHealthChanged params{};
    params.BossTarget = (AActor*)BossTarget;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_GetUIHealthPercent_ReturnValue = (float)CallFunc_GetUIHealthPercent_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_BossMeter_C::ExecuteUbergraph_UI_BP_HUD_BossMeter(int32_t EntryPoint, AActor* K2Node_CustomEvent_Target, bool CallFunc_IsValid_ReturnValue) {}
