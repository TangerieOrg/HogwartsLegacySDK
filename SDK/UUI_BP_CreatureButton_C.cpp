#include "ECreaturePregnancyState.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimespan.hpp"
#include "UCanvasPanel.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USizeBox.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_CreatureButton_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_CreatureButton_C::ExecuteUbergraph_UI_BP_CreatureButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime) {}
void UUI_BP_CreatureButton_C::SetEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.SetEnabled"));
    struct Params_SetEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
UUI_BP_CreatureButton_C* UUI_BP_CreatureButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C");
    return (UUI_BP_CreatureButton_C*)res;
}
void UUI_BP_CreatureButton_C::PlaySelectedAnimation(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.PlaySelectedAnimation"));
    struct Params_PlaySelectedAnimation {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_PlaySelectedAnimation params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_CreatureButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1) {}
void UUI_BP_CreatureButton_C::OnByproductCooldownEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnByproductCooldownEnded"));
    struct Params_OnByproductCooldownEnded {
    }; // Size: 0x0
    Params_OnByproductCooldownEnded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::ToggleBeastState(int32_t BeastTypeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.ToggleBeastState"));
    struct Params_ToggleBeastState {
        int32_t BeastTypeIndex; // 0x0
    }; // Size: 0x4
    Params_ToggleBeastState params{};
    params.BeastTypeIndex = (int32_t)BeastTypeIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateBeastState(bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateBeastState"));
    struct Params_UpdateBeastState {
        bool K2Node_SwitchInteger_CmpSuccess; // 0x0
    }; // Size: 0x1
    Params_UpdateBeastState params{};
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::Set_Is_Empty(bool ShowEmptySlot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.Set Is Empty"));
    struct Params_Set_Is_Empty {
        bool ShowEmptySlot; // 0x0
    }; // Size: 0x1
    Params_Set_Is_Empty params{};
    params.ShowEmptySlot = (bool)ShowEmptySlot;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::InitPregnantCreature(UTexture2D* Temp_object_Variable, bool CallFunc_GetIsMale_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, UTexture2D* Temp_object_Variable_1, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAlbino_ReturnValue, bool Temp_bool_Variable, UTexture2D* K2Node_Select_Default, FString CallFunc_GetCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitPregnantCreature"));
    struct Params_InitPregnantCreature {
        UTexture2D* Temp_object_Variable; // 0x0
        bool CallFunc_GetIsMale_ReturnValue; // 0x8
        char pad_9[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x10
        UTexture2D* Temp_object_Variable_1; // 0x38
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x40
        bool K2Node_SwitchEnum_CmpSuccess; // 0x41
        bool CallFunc_IsAlbino_ReturnValue; // 0x42
        bool Temp_bool_Variable; // 0x43
        char pad_44[0x4];
        UTexture2D* K2Node_Select_Default; // 0x48
        FString CallFunc_GetCreatureIconTextureName_IconTextureName; // 0x50
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_InitPregnantCreature params{};
    params.Temp_object_Variable = (UTexture2D*)Temp_object_Variable;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.Temp_object_Variable_1 = (UTexture2D*)Temp_object_Variable_1;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_IsAlbino_ReturnValue = (bool)CallFunc_IsAlbino_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (UTexture2D*)K2Node_Select_Default;
    params.CallFunc_GetCreatureIconTextureName_IconTextureName = (FString)CallFunc_GetCreatureIconTextureName_IconTextureName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateReservedSlot(ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateReservedSlot"));
    struct Params_UpdateReservedSlot {
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_UpdateReservedSlot params{};
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdatePregnantCreature(ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdatePregnantCreature"));
    struct Params_UpdatePregnantCreature {
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_UpdatePregnantCreature params{};
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::InitEmptySlot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitEmptySlot"));
    struct Params_InitEmptySlot {
    }; // Size: 0x0
    Params_InitEmptySlot params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateEgg(FName CallFunc_GetTypeID_ReturnValue, FName CallFunc_GetTypeID_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateEgg"));
    struct Params_UpdateEgg {
        FName CallFunc_GetTypeID_ReturnValue; // 0x0
        FName CallFunc_GetTypeID_ReturnValue_1; // 0x8
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UpdateEgg params{};
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_GetTypeID_ReturnValue_1 = (FName)CallFunc_GetTypeID_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateHatchingProgress(FTimespan CallFunc_GetHatchingTimeRemaining_ReturnValue) {}
void UUI_BP_CreatureButton_C::UpdateRegularCreatureStatusLabel(bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable_1, FString Temp_string_Variable_2, bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue, FString K2Node_Select_Default, FString K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateRegularCreatureStatusLabel"));
    struct Params_UpdateRegularCreatureStatusLabel {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        FString Temp_string_Variable; // 0x8
        FString Temp_string_Variable_1; // 0x18
        bool Temp_bool_Variable_1; // 0x28
        char pad_29[0x7];
        FString Temp_string_Variable_2; // 0x30
        bool CallFunc_GetIsByproductReady_ReturnValue; // 0x40
        bool CallFunc_IsByproductOnCooldown_ReturnValue; // 0x41
        char pad_42[0x6];
        FString K2Node_Select_Default; // 0x48
        FString K2Node_Select_Default_1; // 0x58
    }; // Size: 0x68
    Params_UpdateRegularCreatureStatusLabel params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.CallFunc_GetIsByproductReady_ReturnValue = (bool)CallFunc_GetIsByproductReady_ReturnValue;
    params.CallFunc_IsByproductOnCooldown_ReturnValue = (bool)CallFunc_IsByproductOnCooldown_ReturnValue;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FString)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateRegularCreature(FName CallFunc_GetTypeID_ReturnValue, FName CallFunc_GetTypeID_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateRegularCreature"));
    struct Params_UpdateRegularCreature {
        FName CallFunc_GetTypeID_ReturnValue; // 0x0
        FName CallFunc_GetTypeID_ReturnValue_1; // 0x8
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UpdateRegularCreature params{};
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_GetTypeID_ReturnValue_1 = (FName)CallFunc_GetTypeID_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::SetCreatureState(UCreatureState* InCreatureState) {}
void UUI_BP_CreatureButton_C::UpdateUnbornCreature(UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UCreatureState* K2Node_DynamicCast_AsCreature_State, bool K2Node_DynamicCast_bSuccess, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.UpdateUnbornCreature"));
    struct Params_UpdateUnbornCreature {
        UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0
        bool CallFunc_IsValidSoftObjectReference_ReturnValue; // 0x8
        char pad_9[0x7];
        UCreatureState* K2Node_DynamicCast_AsCreature_State; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x19
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_UpdateUnbornCreature params{};
    params.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = (UObject*)CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
    params.CallFunc_IsValidSoftObjectReference_ReturnValue = (bool)CallFunc_IsValidSoftObjectReference_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_State = (UCreatureState*)K2Node_DynamicCast_AsCreature_State;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::UpdateGestationProgress(FTimespan TimeRemaining, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, UCreatureState* K2Node_DynamicCast_AsCreature_State, bool K2Node_DynamicCast_bSuccess, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration_1, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining_1) {}
void UUI_BP_CreatureButton_C::IsHoverable(bool& Result, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsIncubating_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.IsHoverable"));
    struct Params_IsHoverable {
        bool Result; // 0x0
        bool CallFunc_IsEgg_ReturnValue; // 0x1
        bool CallFunc_IsValidSoftObjectReference_ReturnValue; // 0x2
        bool CallFunc_IsIncubating_ReturnValue; // 0x3
        bool CallFunc_IsPregnant_ReturnValue; // 0x4
        bool CallFunc_BooleanOR_ReturnValue; // 0x5
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x6
        bool CallFunc_IsValid_ReturnValue; // 0x7
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsHoverable params{};
    params.Result = (bool)Result;
    params.CallFunc_IsEgg_ReturnValue = (bool)CallFunc_IsEgg_ReturnValue;
    params.CallFunc_IsValidSoftObjectReference_ReturnValue = (bool)CallFunc_IsValidSoftObjectReference_ReturnValue;
    params.CallFunc_IsIncubating_ReturnValue = (bool)CallFunc_IsIncubating_ReturnValue;
    params.CallFunc_IsPregnant_ReturnValue = (bool)CallFunc_IsPregnant_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_CreatureButton_C::ForceUnhover() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.ForceUnhover"));
    struct Params_ForceUnhover {
    }; // Size: 0x0
    Params_ForceUnhover params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::InitEgg(FSlateColor K2Node_MakeStruct_SlateColor, FString CallFunc_GetCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitEgg"));
    struct Params_InitEgg {
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x0
        FString CallFunc_GetCreatureIconTextureName_IconTextureName; // 0x28
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_InitEgg params{};
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.CallFunc_GetCreatureIconTextureName_IconTextureName = (FString)CallFunc_GetCreatureIconTextureName_IconTextureName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::InitRegularCreature(FSlateColor K2Node_MakeStruct_SlateColor) {}
void UUI_BP_CreatureButton_C::InitUnbornCreature(FString Temp_string_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString Temp_string_Variable_1, bool Temp_bool_Variable_2, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsEggLaying_ReturnValue, FString Temp_string_Variable_2, FSlateColor K2Node_Select_Default, FName CallFunc_GetAdultCreatureTypeID_ReturnValue, bool CallFunc_IsEggLaying_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FString CallFunc_GetUnbornCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_IsEggLaying_ReturnValue_2, FName CallFunc_GetEggTypeID_ReturnValue, FName CallFunc_GetOffspringCreatureTypeID_ReturnValue, FName K2Node_Select_Default_1, bool Temp_bool_Variable_3, FString CallFunc_Conv_NameToString_ReturnValue, FString K2Node_Select_Default_2, FString K2Node_Select_Default_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.InitUnbornCreature"));
    struct Params_InitUnbornCreature {
        FString Temp_string_Variable; // 0x0
        bool Temp_bool_Variable; // 0x10
        bool Temp_bool_Variable_1; // 0x11
        char pad_12[0x6];
        FString Temp_string_Variable_1; // 0x18
        bool Temp_bool_Variable_2; // 0x28
        char pad_29[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x30
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x58
        bool CallFunc_IsEggLaying_ReturnValue; // 0x80
        char pad_81[0x7];
        FString Temp_string_Variable_2; // 0x88
        FSlateColor K2Node_Select_Default; // 0x98
        FName CallFunc_GetAdultCreatureTypeID_ReturnValue; // 0xc0
        bool CallFunc_IsEggLaying_ReturnValue_1; // 0xc8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xc9
        bool CallFunc_IsValidSoftObjectReference_ReturnValue; // 0xca
        char pad_cb[0x5];
        FString CallFunc_GetUnbornCreatureIconTextureName_IconTextureName; // 0xd0
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0xe0
        bool CallFunc_IsEggLaying_ReturnValue_2; // 0xe1
        char pad_e2[0x2];
        FName CallFunc_GetEggTypeID_ReturnValue; // 0xe4
        FName CallFunc_GetOffspringCreatureTypeID_ReturnValue; // 0xec
        FName K2Node_Select_Default_1; // 0xf4
        bool Temp_bool_Variable_3; // 0xfc
        char pad_fd[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x100
        FString K2Node_Select_Default_2; // 0x110
        FString K2Node_Select_Default_3; // 0x120
    }; // Size: 0x130
    Params_InitUnbornCreature params{};
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    params.CallFunc_IsEggLaying_ReturnValue = (bool)CallFunc_IsEggLaying_ReturnValue;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.K2Node_Select_Default = (FSlateColor)K2Node_Select_Default;
    params.CallFunc_GetAdultCreatureTypeID_ReturnValue = (FName)CallFunc_GetAdultCreatureTypeID_ReturnValue;
    params.CallFunc_IsEggLaying_ReturnValue_1 = (bool)CallFunc_IsEggLaying_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_IsValidSoftObjectReference_ReturnValue = (bool)CallFunc_IsValidSoftObjectReference_ReturnValue;
    params.CallFunc_GetUnbornCreatureIconTextureName_IconTextureName = (FString)CallFunc_GetUnbornCreatureIconTextureName_IconTextureName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_IsEggLaying_ReturnValue_2 = (bool)CallFunc_IsEggLaying_ReturnValue_2;
    params.CallFunc_GetEggTypeID_ReturnValue = (FName)CallFunc_GetEggTypeID_ReturnValue;
    params.CallFunc_GetOffspringCreatureTypeID_ReturnValue = (FName)CallFunc_GetOffspringCreatureTypeID_ReturnValue;
    params.K2Node_Select_Default_1 = (FName)K2Node_Select_Default_1;
    params.Temp_bool_Variable_3 = (bool)Temp_bool_Variable_3;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.K2Node_Select_Default_2 = (FString)K2Node_Select_Default_2;
    params.K2Node_Select_Default_3 = (FString)K2Node_Select_Default_3;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::GetCreatureState(UCreatureState*& CreatureState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.GetCreatureState"));
    struct Params_GetCreatureState {
        UCreatureState* CreatureState; // 0x0
    }; // Size: 0x8
    Params_GetCreatureState params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    ProcessEvent(func, &params);
    CreatureState = params.CreatureState;
}
void UUI_BP_CreatureButton_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::OnNeedsChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnNeedsChanged"));
    struct Params_OnNeedsChanged {
    }; // Size: 0x0
    Params_OnNeedsChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::OnClicked__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnClicked__DelegateSignature"));
    struct Params_OnClicked__DelegateSignature {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnClicked__DelegateSignature params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::OnHovered__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnHovered__DelegateSignature"));
    struct Params_OnHovered__DelegateSignature {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnHovered__DelegateSignature params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureButton_C::OnUnhovered__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureButton.UI_BP_CreatureButton_C.OnUnhovered__DelegateSignature"));
    struct Params_OnUnhovered__DelegateSignature {
        UUI_BP_CreatureButton_C* CreatureButton; // 0x0
    }; // Size: 0x8
    Params_OnUnhovered__DelegateSignature params{};
    params.CreatureButton = (UUI_BP_CreatureButton_C*)CreatureButton;
    ProcessEvent(func, &params);
}
