#pragma once
#include <cstdint>
#include "FCharacterSaveGameInfo.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "HouseIds.hpp"
#include "UScreen.hpp"
class UUI_BP_CharacterSelectButton_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPopupScreen;
class UUIManager;
class ULegendItem;
class UPersistentData;
class UUI_BP_FrontEnd_Menu_C;
#pragma pack(push, 1)
class UUI_BP_CrossGenSaveData_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UUI_BP_CharacterSelectButton_C* characterSlot1; // 0x378
    UUI_BP_CharacterSelectButton_C* characterSlot2; // 0x380
    UUI_BP_CharacterSelectButton_C* characterSlot3; // 0x388
    UUI_BP_CharacterSelectButton_C* characterSlot4; // 0x390
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x398
    TArray<UUI_BP_CharacterSelectButton_C*> Slot_Array; // 0x3a0
    int32_t Temp_Slot_Count; // 0x3b0
    char pad_3b4[0x4];
    TArray<FCharacterSaveGameInfo> PlayableCharacters; // 0x3b8
    HouseIds House; // 0x3c8
    char pad_3c9[0x7];
    UPopupScreen* FailedTransferPopup; // 0x3d0
    ULegendItem* SelectLegendItem; // 0x3d8
    UUI_BP_FrontEnd_Menu_C* FrontEnd; // 0x3e0
    FString Platform_Save_Time; // 0x3e8
    static UUI_BP_CrossGenSaveData_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void Construct();
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_0_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_1_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_2_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_3_OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_NewVar_0_K2Node_ComponentBoundEvent_4_PopupButtonEvent__DelegateSignature(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_5_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_6_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_7_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_8_OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot1_K2Node_ComponentBoundEvent_9_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot2_K2Node_ComponentBoundEvent_10_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot3_K2Node_ComponentBoundEvent_11_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void BndEvt__UI_BP_CrossGenSaveData_characterSlot4_K2Node_ComponentBoundEvent_12_OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton);
    void SetFrontend(UUI_BP_FrontEnd_Menu_C* FrontEnd);
    void OnIntroEnded(int32_t IntroType);
    void OnSaveSataTransferComplete_1(bool bResult);
    void OnSaveSataTransferComplete_2(bool bResult);
    void OnSaveSataTransferComplete_3(bool bResult);
    void OnSaveSataTransferComplete_4(bool bResult);
    void ExecuteUbergraph_UI_BP_CrossGenSaveData(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Variable, int32_t Temp_int_Array_Index_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, TArray<UUI_BP_CharacterSelectButton_C*>& K2Node_MakeArray_Array, UUI_BP_CharacterSelectButton_C* CallFunc_Array_Get_Item_1, TArray<FCharacterSaveGameInfo>& CallFunc_GetCrossGenCharacterList_ReturnValue, FCharacterSaveGameInfo CallFunc_Array_Get_Item_2, FString CallFunc_GetCrossGenPlayableCharacterName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_11, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_10, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_9, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_8, UPopupScreen* K2Node_ComponentBoundEvent_PopupScreen, int32_t K2Node_ComponentBoundEvent_CompletionActionIndex, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, UPopupScreen* CallFunc_ShowOkPopup_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_7, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_6, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_5, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_4, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_3, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_2, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton_1, UUI_BP_CharacterSelectButton_C* K2Node_ComponentBoundEvent_IconButton, UUI_BP_FrontEnd_Menu_C* K2Node_CustomEvent_Frontend, bool CallFunc_IsValid_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_2, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_4, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_2, UPopupScreen* CallFunc_ShowPleaseWaitPopup_ReturnValue_3, int32_t K2Node_Event_IntroType, UPersistentData* CallFunc_GetInstance_ReturnValue, bool K2Node_CustomEvent_bResult_3, bool K2Node_CustomEvent_bResult_2, bool K2Node_CustomEvent_bResult_1, bool K2Node_CustomEvent_bResult);
}; // Size: 0x3f8
#pragma pack(pop)
