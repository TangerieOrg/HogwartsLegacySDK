#include "ABiped_Player.hpp"
#include "APlayerController.hpp"
#include "ASceneRigActor.hpp"
#include "EInputDeviceUsed.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UButton.hpp"
#include "UCompanionManager.hpp"
#include "UFastTravelManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPathNavigationManager.hpp"
#include "USceneRigPlayer.hpp"
#include "UScheduler.hpp"
#include "UScreen.hpp"
#include "UStationComponent.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BasicToolTipPopout_C.hpp"
#include "UUI_BP_FastTravelInteraction_Item_C.hpp"
#include "UUI_BP_FastTravelSave_Interaction_C.hpp"
#include "UUI_BP_HUD_CompanionSelection_C.hpp"
#include "UUI_BP_LegendItem_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FastTravelSave_Interaction_C::RefreshShouldShowCursor(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.RefreshShouldShowCursor"));
    struct Params_RefreshShouldShowCursor {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_RefreshShouldShowCursor params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_FastTravelSave_Interaction_C* UUI_BP_FastTravelSave_Interaction_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C");
    return (UUI_BP_FastTravelSave_Interaction_C*)res;
}
void UUI_BP_FastTravelSave_Interaction_C::UpdateEnabledOptions(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_Get_First_Enabled_Option_NumberAvailable, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.UpdateEnabledOptions"));
    struct Params_UpdateEnabledOptions {
        bool CallFunc_AnyOptionsEnabled_OptionsAvailable; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_Get_First_Enabled_Option_NumberAvailable; // 0x4
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_UpdateEnabledOptions params{};
    params.CallFunc_AnyOptionsEnabled_OptionsAvailable = (bool)CallFunc_AnyOptionsEnabled_OptionsAvailable;
    params.CallFunc_Get_First_Enabled_Option_NumberAvailable = (int32_t)CallFunc_Get_First_Enabled_Option_NumberAvailable;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::Get_First_Enabled_Option(int32_t& NumberAvailable, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEnabled_Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Get First Enabled Option"));
    struct Params_Get_First_Enabled_Option {
        int32_t NumberAvailable; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        char pad_14[0x4];
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x20
        bool CallFunc_IsEnabled_Enabled; // 0x21
    }; // Size: 0x22
    Params_Get_First_Enabled_Option params{};
    params.NumberAvailable = (int32_t)NumberAvailable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsEnabled_Enabled = (bool)CallFunc_IsEnabled_Enabled;
    ProcessEvent(func, &params);
    NumberAvailable = params.NumberAvailable;
}
void UUI_BP_FastTravelSave_Interaction_C::SetWaitEnable(bool WaitEnabled, bool CallFunc_GetMissionComplete_ReturnValue, bool CallFunc_GetMissionComplete_ReturnValue_1, UFastTravelManager* CallFunc_Get_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWaitEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.SetWaitEnable"));
    struct Params_SetWaitEnable {
        bool WaitEnabled; // 0x0
        bool CallFunc_GetMissionComplete_ReturnValue; // 0x1
        bool CallFunc_GetMissionComplete_ReturnValue_1; // 0x2
        char pad_3[0x5];
        UFastTravelManager* CallFunc_Get_ReturnValue; // 0x8
        bool CallFunc_BooleanOR_ReturnValue; // 0x10
        bool CallFunc_IsWaitEnabled_ReturnValue; // 0x11
        bool CallFunc_BooleanAND_ReturnValue; // 0x12
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x13
    }; // Size: 0x14
    Params_SetWaitEnable params{};
    params.WaitEnabled = (bool)WaitEnabled;
    params.CallFunc_GetMissionComplete_ReturnValue = (bool)CallFunc_GetMissionComplete_ReturnValue;
    params.CallFunc_GetMissionComplete_ReturnValue_1 = (bool)CallFunc_GetMissionComplete_ReturnValue_1;
    params.CallFunc_Get_ReturnValue = (UFastTravelManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_IsWaitEnabled_ReturnValue = (bool)CallFunc_IsWaitEnabled_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::AnyOptionsEnabled(bool& OptionsAvailable, int32_t CallFunc_GetNumberOfEnabledButtons_NumberAvailable, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.AnyOptionsEnabled"));
    struct Params_AnyOptionsEnabled {
        bool OptionsAvailable; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_GetNumberOfEnabledButtons_NumberAvailable; // 0x4
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AnyOptionsEnabled params{};
    params.OptionsAvailable = (bool)OptionsAvailable;
    params.CallFunc_GetNumberOfEnabledButtons_NumberAvailable = (int32_t)CallFunc_GetNumberOfEnabledButtons_NumberAvailable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    OptionsAvailable = params.OptionsAvailable;
}
void UUI_BP_FastTravelSave_Interaction_C::GetNumberOfEnabledButtons(int32_t& NumberAvailable, int32_t numAvailable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEnabled_Enabled, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.GetNumberOfEnabledButtons"));
    struct Params_GetNumberOfEnabledButtons {
        int32_t NumberAvailable; // 0x0
        int32_t numAvailable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x18
        char pad_1c[0x4];
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        bool CallFunc_IsEnabled_Enabled; // 0x2c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x2d
    }; // Size: 0x2e
    Params_GetNumberOfEnabledButtons params{};
    params.NumberAvailable = (int32_t)NumberAvailable;
    params.numAvailable = (int32_t)numAvailable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_IsEnabled_Enabled = (bool)CallFunc_IsEnabled_Enabled;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    NumberAvailable = params.NumberAvailable;
}
void UUI_BP_FastTravelSave_Interaction_C::MoveToPreviousAvailableOption(int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsEnabled_Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.MoveToPreviousAvailableOption"));
    struct Params_MoveToPreviousAvailableOption {
        int32_t CallFunc_Array_Length_ReturnValue; // 0x0
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x4
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x8
        int32_t Temp_int_Variable; // 0xc
        bool CallFunc_Less_IntInt_ReturnValue; // 0x10
        char pad_11[0x7];
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_IsEnabled_Enabled; // 0x20
    }; // Size: 0x21
    Params_MoveToPreviousAvailableOption params{};
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    params.CallFunc_IsEnabled_Enabled = (bool)CallFunc_IsEnabled_Enabled;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::MoveToNextAvailableOption(int32_t Temp_int_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsEnabled_Enabled, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.MoveToNextAvailableOption"));
    struct Params_MoveToNextAvailableOption {
        int32_t Temp_int_Variable; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x7];
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x10
        bool CallFunc_IsEnabled_Enabled; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_MoveToNextAvailableOption params{};
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    params.CallFunc_IsEnabled_Enabled = (bool)CallFunc_IsEnabled_Enabled;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::On_Button_Hovered(UUI_BP_FastTravelInteraction_Item_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.On Button Hovered"));
    struct Params_On_Button_Hovered {
        UUI_BP_FastTravelInteraction_Item_C* Button; // 0x0
    }; // Size: 0x8
    Params_On_Button_Hovered params{};
    params.Button = (UUI_BP_FastTravelInteraction_Item_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::SelectedOption(UUI_BP_FastTravelInteraction_Item_C* FastTravelButton, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, UCompanionManager* CallFunc_GetCompanionManager_ReturnValue, bool CallFunc_AreSystemicCompanionsDisabled_ReturnValue, FString CallFunc_GetForcedCompanionName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TArray<FName>& CallFunc_GetUnlockedSystemicCompanions_ReturnValue, FCharacterSaveGameInfo CallFunc_GetCurrentPlayableCharacter_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UScheduler* CallFunc_Get_ReturnValue_1, UPathNavigationManager* CallFunc_Get_ReturnValue_2, bool CallFunc_IsClockStopped_ReturnValue, bool CallFunc_ExecuteSave_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, UUI_BP_HUD_CompanionSelection_C* CallFunc_Create_ReturnValue, USceneRigPlayer* CallFunc_Play_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.SelectedOption"));
    struct Params_SelectedOption {
        UUI_BP_FastTravelInteraction_Item_C* FastTravelButton; // 0x0
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x9
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0xa
        bool CallFunc_EqualEqual_StrStr_ReturnValue_3; // 0xb
        bool CallFunc_EqualEqual_StrStr_ReturnValue_4; // 0xc
        char pad_d[0x3];
        UCompanionManager* CallFunc_GetCompanionManager_ReturnValue; // 0x10
        bool CallFunc_AreSystemicCompanionsDisabled_ReturnValue; // 0x18
        char pad_19[0x7];
        FString CallFunc_GetForcedCompanionName_ReturnValue; // 0x20
        bool CallFunc_Not_PreBool_ReturnValue; // 0x30
        bool CallFunc_IsEmpty_ReturnValue; // 0x31
        char pad_32[0x6];
        TArray<FName> CallFunc_GetUnlockedSystemicCompanions_ReturnValue; // 0x38
        FCharacterSaveGameInfo CallFunc_GetCurrentPlayableCharacter_ReturnValue; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x398
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x39c
        char pad_39d[0x3];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x3a0
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x3a8
        char pad_3a9[0x7];
        UScheduler* CallFunc_Get_ReturnValue_1; // 0x3b0
        UPathNavigationManager* CallFunc_Get_ReturnValue_2; // 0x3b8
        bool CallFunc_IsClockStopped_ReturnValue; // 0x3c0
        bool CallFunc_ExecuteSave_ReturnValue; // 0x3c1
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x3c2
        char pad_3c3[0x5];
        UUI_BP_HUD_CompanionSelection_C* CallFunc_Create_ReturnValue; // 0x3c8
        USceneRigPlayer* CallFunc_Play_ReturnValue; // 0x3d0
        UUIManager* CallFunc_Get_ReturnValue_3; // 0x3d8
    }; // Size: 0x3e0
    Params_SelectedOption params{};
    params.FastTravelButton = (UUI_BP_FastTravelInteraction_Item_C*)FastTravelButton;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_3 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_3;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_4 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_4;
    params.CallFunc_GetCompanionManager_ReturnValue = (UCompanionManager*)CallFunc_GetCompanionManager_ReturnValue;
    params.CallFunc_AreSystemicCompanionsDisabled_ReturnValue = (bool)CallFunc_AreSystemicCompanionsDisabled_ReturnValue;
    params.CallFunc_GetForcedCompanionName_ReturnValue = (FString)CallFunc_GetForcedCompanionName_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    params.CallFunc_GetUnlockedSystemicCompanions_ReturnValue = (TArray<FName>)CallFunc_GetUnlockedSystemicCompanions_ReturnValue;
    params.CallFunc_GetCurrentPlayableCharacter_ReturnValue = (FCharacterSaveGameInfo)CallFunc_GetCurrentPlayableCharacter_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Get_ReturnValue_1 = (UScheduler*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_Get_ReturnValue_2 = (UPathNavigationManager*)CallFunc_Get_ReturnValue_2;
    params.CallFunc_IsClockStopped_ReturnValue = (bool)CallFunc_IsClockStopped_ReturnValue;
    params.CallFunc_ExecuteSave_ReturnValue = (bool)CallFunc_ExecuteSave_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_Create_ReturnValue = (UUI_BP_HUD_CompanionSelection_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Play_ReturnValue = (USceneRigPlayer*)CallFunc_Play_ReturnValue;
    params.CallFunc_Get_ReturnValue_3 = (UUIManager*)CallFunc_Get_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_GetUnlockedSystemicCompanions_ReturnValue = params.CallFunc_GetUnlockedSystemicCompanions_ReturnValue;
}
void UUI_BP_FastTravelSave_Interaction_C::BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::Camera(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Camera"));
    struct Params_Camera {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_Camera params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::SetButtonBindings(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
bool UUI_BP_FastTravelSave_Interaction_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_AnyOptionsEnabled_OptionsAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_BooleanOR_ReturnValue; // 0x5
        bool CallFunc_BooleanAND_ReturnValue; // 0x6
        char pad_7[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        bool CallFunc_GetIsEnabled_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xd
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xe
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xf
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x11
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x12
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x13
        bool CallFunc_AnyOptionsEnabled_OptionsAvailable; // 0x14
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x15
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x16
    }; // Size: 0x17
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetIsEnabled_ReturnValue = (bool)CallFunc_GetIsEnabled_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_AnyOptionsEnabled_OptionsAvailable = (bool)CallFunc_AnyOptionsEnabled_OptionsAvailable;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_FastTravelSave_Interaction_C::PreviousOption(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.PreviousOption"));
    struct Params_PreviousOption {
        bool CallFunc_AnyOptionsEnabled_OptionsAvailable; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_PreviousOption params{};
    params.CallFunc_AnyOptionsEnabled_OptionsAvailable = (bool)CallFunc_AnyOptionsEnabled_OptionsAvailable;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::NextOption(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.NextOption"));
    struct Params_NextOption {
        bool CallFunc_AnyOptionsEnabled_OptionsAvailable; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x8
    }; // Size: 0x10
    Params_NextOption params{};
    params.CallFunc_AnyOptionsEnabled_OptionsAvailable = (bool)CallFunc_AnyOptionsEnabled_OptionsAvailable;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::OnButtonHovered(UUI_BP_FastTravelInteraction_Item_C* Button, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.OnButtonHovered"));
    struct Params_OnButtonHovered {
        UUI_BP_FastTravelInteraction_Item_C* Button; // 0x0
        UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        int32_t CallFunc_Array_Find_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_OnButtonHovered params{};
    params.Button = (UUI_BP_FastTravelInteraction_Item_C*)Button;
    params.CallFunc_Array_Get_Item = (UUI_BP_FastTravelInteraction_Item_C*)CallFunc_Array_Get_Item;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::CleanupandLeaveStation() {}
void UUI_BP_FastTravelSave_Interaction_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::ClassLoaded0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.ClassLoaded"));
    struct Params_ClassLoaded {
    }; // Size: 0x0
    Params_ClassLoaded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::StationStoryEnded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.StationStoryEnded"));
    struct Params_StationStoryEnded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationStoryEnded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::CloseStationInteraction(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.CloseStationInteraction"));
    struct Params_CloseStationInteraction {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CloseStationInteraction params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::TriggerHint(FString HintKey) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.TriggerHint"));
    struct Params_TriggerHint {
        FString HintKey; // 0x0
    }; // Size: 0x10
    Params_TriggerHint params{};
    params.HintKey = (FString)HintKey;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::ClearHint() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.ClearHint"));
    struct Params_ClearHint {
    }; // Size: 0x0
    Params_ClearHint params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::On_Button_Clicked(UUI_BP_FastTravelInteraction_Item_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelSave_Interaction.UI_BP_FastTravelSave_Interaction_C.On Button Clicked"));
    struct Params_On_Button_Clicked {
        UUI_BP_FastTravelInteraction_Item_C* Button; // 0x0
    }; // Size: 0x8
    Params_On_Button_Clicked params{};
    params.Button = (UUI_BP_FastTravelInteraction_Item_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelSave_Interaction_C::ExecuteUbergraph_UI_BP_FastTravelSave_Interaction(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
