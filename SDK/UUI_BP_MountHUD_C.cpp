#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "EMountMovementState.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCharacterStateInfo.hpp"
#include "UCreature_MountComponent.hpp"
#include "UExpandableArea.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UMultiLineEditableText.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UProgressBar.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UUI_BP_MountHUD_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_MountHUD_C* UUI_BP_MountHUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C");
    return (UUI_BP_MountHUD_C*)res;
}
void UUI_BP_MountHUD_C::UpdateVisibilitySetting(bool Show, UCreature_MountComponent* TempMountComp, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCharacterStateInfo* CallFunc_GetCharacterStateInfo_ReturnValue, bool CallFunc_IsMounted_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.UpdateVisibilitySetting"));
    struct Params_UpdateVisibilitySetting {
        bool Show; // 0x0
        char pad_1[0x7];
        UCreature_MountComponent* TempMountComp; // 0x8
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x7];
        UCharacterStateInfo* CallFunc_GetCharacterStateInfo_ReturnValue; // 0x20
        bool CallFunc_IsMounted_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_UpdateVisibilitySetting params{};
    params.Show = (bool)Show;
    params.TempMountComp = (UCreature_MountComponent*)TempMountComp;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetCharacterStateInfo_ReturnValue = (UCharacterStateInfo*)CallFunc_GetCharacterStateInfo_ReturnValue;
    params.CallFunc_IsMounted_ReturnValue = (bool)CallFunc_IsMounted_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::SequenceEvent__ENTRYPOINTUI_BP_MountHUD_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.SequenceEvent__ENTRYPOINTUI_BP_MountHUD_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_MountHUD_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_MountHUD_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ChargeEnabledUpdate(bool bChargeEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeEnabledUpdate"));
    struct Params_ChargeEnabledUpdate {
        bool bChargeEnabled; // 0x0
    }; // Size: 0x1
    Params_ChargeEnabledUpdate params{};
    params.bChargeEnabled = (bool)bChargeEnabled;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::MakeHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.MakeHidden"));
    struct Params_MakeHidden {
    }; // Size: 0x0
    Params_MakeHidden params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ConditionallyShowKeyboardCallouts(ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ConditionallyShowKeyboardCallouts"));
    struct Params_ConditionallyShowKeyboardCallouts {
        ESlateVisibility Temp_byte_Variable; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        ESlateVisibility Temp_byte_Variable_2; // 0x3
        ESlateVisibility Temp_byte_Variable_3; // 0x4
        bool Temp_bool_Variable_1; // 0x5
        char pad_6[0x2];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
        ESlateVisibility K2Node_Select_Default; // 0x12
        ESlateVisibility K2Node_Select_Default_1; // 0x13
    }; // Size: 0x14
    Params_ConditionallyShowKeyboardCallouts params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ToggleExpandableCallouts(bool Expand) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ToggleExpandableCallouts"));
    struct Params_ToggleExpandableCallouts {
        bool Expand; // 0x0
    }; // Size: 0x1
    Params_ToggleExpandableCallouts params{};
    params.Expand = (bool)Expand;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::MakeVisible(bool FromSettingsChange, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetShowBeastControls_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.MakeVisible"));
    struct Params_MakeVisible {
        bool FromSettingsChange; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x10
        bool CallFunc_GetShowBeastControls_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_MakeVisible params{};
    params.FromSettingsChange = (bool)FromSettingsChange;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetShowBeastControls_ReturnValue = (bool)CallFunc_GetShowBeastControls_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ShowControls(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ShowControls"));
    struct Params_ShowControls {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowControls params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::SetMountCallouts(bool ShowCharge, EMountMovementState MovementState, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue, FString CallFunc_SelectString_ReturnValue, FString CallFunc_SelectString_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FString CallFunc_SelectString_ReturnValue_2, FString CallFunc_SelectString_ReturnValue_3, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, FLegendItemData K2Node_MakeStruct_LegendItemData_6, FLegendItemData K2Node_MakeStruct_LegendItemData_7, FLegendItemData K2Node_MakeStruct_LegendItemData_8, FLegendItemData K2Node_MakeStruct_LegendItemData_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.SetMountCallouts"));
    struct Params_SetMountCallouts {
        bool ShowCharge; // 0x0
        EMountMovementState MovementState; // 0x1
        char pad_2[0x6];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x8
        bool K2Node_SwitchEnum_CmpSuccess; // 0x10
        bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue; // 0x11
        char pad_12[0x6];
        FString CallFunc_SelectString_ReturnValue; // 0x18
        FString CallFunc_SelectString_ReturnValue_1; // 0x28
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x38
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0x68
        FString CallFunc_SelectString_ReturnValue_2; // 0x98
        FString CallFunc_SelectString_ReturnValue_3; // 0xa8
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0xb8
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0xe8
        FLegendItemData K2Node_MakeStruct_LegendItemData_4; // 0x118
        FLegendItemData K2Node_MakeStruct_LegendItemData_5; // 0x148
        FLegendItemData K2Node_MakeStruct_LegendItemData_6; // 0x178
        FLegendItemData K2Node_MakeStruct_LegendItemData_7; // 0x1a8
        FLegendItemData K2Node_MakeStruct_LegendItemData_8; // 0x1d8
        FLegendItemData K2Node_MakeStruct_LegendItemData_9; // 0x208
    }; // Size: 0x238
    Params_SetMountCallouts params{};
    params.ShowCharge = (bool)ShowCharge;
    params.MovementState = (EMountMovementState)MovementState;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue = (bool)CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_SelectString_ReturnValue_1 = (FString)CallFunc_SelectString_ReturnValue_1;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.CallFunc_SelectString_ReturnValue_2 = (FString)CallFunc_SelectString_ReturnValue_2;
    params.CallFunc_SelectString_ReturnValue_3 = (FString)CallFunc_SelectString_ReturnValue_3;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeStruct_LegendItemData_4 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_4;
    params.K2Node_MakeStruct_LegendItemData_5 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_5;
    params.K2Node_MakeStruct_LegendItemData_6 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_6;
    params.K2Node_MakeStruct_LegendItemData_7 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_7;
    params.K2Node_MakeStruct_LegendItemData_8 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_8;
    params.K2Node_MakeStruct_LegendItemData_9 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_9;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::SetPlayerHealth(UObjectStateInfo* MountObject, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.SetPlayerHealth"));
    struct Params_SetPlayerHealth {
        UObjectStateInfo* MountObject; // 0x0
        float CallFunc_GetMaxHealth_ReturnValue; // 0x8
        float CallFunc_GetHealth_ReturnValue; // 0xc
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_SetPlayerHealth params{};
    params.MountObject = (UObjectStateInfo*)MountObject;
    params.CallFunc_GetMaxHealth_ReturnValue = (float)CallFunc_GetMaxHealth_ReturnValue;
    params.CallFunc_GetHealth_ReturnValue = (float)CallFunc_GetHealth_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ChargeAmountUpdate(float ChargeAmountNormalized, bool bChargeAvailable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeAmountUpdate"));
    struct Params_ChargeAmountUpdate {
        float ChargeAmountNormalized; // 0x0
        bool bChargeAvailable; // 0x4
    }; // Size: 0x5
    Params_ChargeAmountUpdate params{};
    params.ChargeAmountNormalized = (float)ChargeAmountNormalized;
    params.bChargeAvailable = (bool)bChargeAvailable;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::Show(UCreature_MountComponent* InMountComponent, bool bShowCharge) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.Show"));
    struct Params_Show {
        UCreature_MountComponent* InMountComponent; // 0x0
        bool bShowCharge; // 0x8
    }; // Size: 0x9
    Params_Show params{};
    params.InMountComponent = (UCreature_MountComponent*)InMountComponent;
    params.bShowCharge = (bool)bShowCharge;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::UpdateDebugString() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.UpdateDebugString"));
    struct Params_UpdateDebugString {
    }; // Size: 0x0
    Params_UpdateDebugString params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ChargeRefillDelayUpdate(float ChargeRefillDelayNormalized) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ChargeRefillDelayUpdate"));
    struct Params_ChargeRefillDelayUpdate {
        float ChargeRefillDelayNormalized; // 0x0
    }; // Size: 0x4
    Params_ChargeRefillDelayUpdate params{};
    params.ChargeRefillDelayNormalized = (float)ChargeRefillDelayNormalized;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ChangeRequestUpdate(float ChargeRequestNormalized) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ChangeRequestUpdate"));
    struct Params_ChangeRequestUpdate {
        float ChargeRequestNormalized; // 0x0
    }; // Size: 0x4
    Params_ChangeRequestUpdate params{};
    params.ChargeRequestNormalized = (float)ChargeRequestNormalized;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::HealthAmountUpdate(AActor* Target, float InHealthChange, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.HealthAmountUpdate"));
    struct Params_HealthAmountUpdate {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_HealthAmountUpdate params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::CollapseCallouts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.CollapseCallouts"));
    struct Params_CollapseCallouts {
    }; // Size: 0x0
    Params_CollapseCallouts params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::MovementStateChanged(UCreature_MountComponent* MountComponent, EMountMovementState PrevMovementState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.MovementStateChanged"));
    struct Params_MovementStateChanged {
        UCreature_MountComponent* MountComponent; // 0x0
        EMountMovementState PrevMovementState; // 0x8
    }; // Size: 0x9
    Params_MovementStateChanged params{};
    params.MountComponent = (UCreature_MountComponent*)MountComponent;
    params.PrevMovementState = (EMountMovementState)PrevMovementState;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::BroomSaysShowControls(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.BroomSaysShowControls"));
    struct Params_BroomSaysShowControls {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BroomSaysShowControls params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ExpandCallouts() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_MountHUD.UI_BP_MountHUD_C.ExpandCallouts"));
    struct Params_ExpandCallouts {
    }; // Size: 0x0
    Params_ExpandCallouts params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MountHUD_C::ExecuteUbergraph_UI_BP_MountHUD(int32_t EntryPoint, float K2Node_CustomEvent_ChargeAmountNormalized, bool K2Node_CustomEvent_bChargeAvailable) {}
