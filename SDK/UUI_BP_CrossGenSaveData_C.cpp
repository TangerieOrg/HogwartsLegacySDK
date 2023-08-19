#include "FCharacterSaveGameInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "HouseIds.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UPersistentData.hpp"
#include "UPopupScreen.hpp"
#include "UScreen.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_CharacterSelectButton_C.hpp"
#include "UUI_BP_CrossGenSaveData_C.hpp"
#include "UUI_BP_FrontEnd_Menu_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
UUI_BP_CrossGenSaveData_C* UUI_BP_CrossGenSaveData_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C");
    return (UUI_BP_CrossGenSaveData_C*)res;
}
TArray<FString> UUI_BP_CrossGenSaveData_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_CrossGenSaveData_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::SetFrontend(UUI_BP_FrontEnd_Menu_C* FrontEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.SetFrontend"));
    struct Params_SetFrontend {
        UUI_BP_FrontEnd_Menu_C* FrontEnd; // 0x0
    }; // Size: 0x8
    Params_SetFrontend params{};
    params.FrontEnd = (UUI_BP_FrontEnd_Menu_C*)FrontEnd;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::OnSaveSataTransferComplete_1(bool bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_1"));
    struct Params_OnSaveSataTransferComplete_1 {
        bool bResult; // 0x0
    }; // Size: 0x1
    Params_OnSaveSataTransferComplete_1 params{};
    params.bResult = (bool)bResult;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::OnSaveSataTransferComplete_2(bool bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_2"));
    struct Params_OnSaveSataTransferComplete_2 {
        bool bResult; // 0x0
    }; // Size: 0x1
    Params_OnSaveSataTransferComplete_2 params{};
    params.bResult = (bool)bResult;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::OnSaveSataTransferComplete_3(bool bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_3"));
    struct Params_OnSaveSataTransferComplete_3 {
        bool bResult; // 0x0
    }; // Size: 0x1
    Params_OnSaveSataTransferComplete_3 params{};
    params.bResult = (bool)bResult;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::OnSaveSataTransferComplete_4(bool bResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CrossGenSaveData/UI_BP_CrossGenSaveData.UI_BP_CrossGenSaveData_C.OnSaveSataTransferComplete_4"));
    struct Params_OnSaveSataTransferComplete_4 {
        bool bResult; // 0x0
    }; // Size: 0x1
    Params_OnSaveSataTransferComplete_4 params{};
    params.bResult = (bool)bResult;
    ProcessEvent(func, &params);
}
void UUI_BP_CrossGenSaveData_C::ExecuteUbergraph_UI_BP_CrossGenSaveData(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Variable, int32_t Temp_int_Array_Index_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_1, TArray<FCharacterSaveGameInfo>& CallFunc_GetCrossGenCharacterList_ReturnValue, FCharacterSaveGameInfo CallFunc_Array_Get_Item_2, FString CallFunc_GetCrossGenPlayableCharacterName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_11, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_10, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_9, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_8, UPopupScreen* K2Node_ComponentBoundEvent_PopupScreen, int32_t K2Node_ComponentBoundEvent_CompletionActionIndex, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UPopupScreen* CallFunc_ShowOkPopup_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_7, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_6, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_5, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_4, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_3, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_2, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton, UUI_BP_FrontEnd_Menu_C* K2Node_CustomEvent_Frontend, bool CallFunc_IsValid_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_4, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_2, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_3, int32_t K2Node_Event_IntroType, UPersistentData* CallFunc_GetInstance_ReturnValue, bool K2Node_CustomEvent_bResult_3, bool K2Node_CustomEvent_bResult_2, bool K2Node_CustomEvent_bResult_1, bool K2Node_CustomEvent_bResult) {}
