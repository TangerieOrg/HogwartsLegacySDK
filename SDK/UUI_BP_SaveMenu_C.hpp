#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "USaveGameWidget.hpp"
class UUI_BP_SavedGameButton_C;
class UWidgetAnimation;
class UVerticalBox;
class ULegend;
class UPhoenixTextBlock;
class UUIManager;
class UFieldGuideMenu;
#pragma pack(push, 1)
class UUI_BP_SaveMenu_C : public USaveGameWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x338
    UUI_BP_SavedGameButton_C* SavedGameButton0; // 0x340
    UUI_BP_SavedGameButton_C* SavedGameButton1; // 0x348
    UUI_BP_SavedGameButton_C* SavedGameButton2; // 0x350
    UUI_BP_SavedGameButton_C* SavedGameButton3; // 0x358
    UUI_BP_SavedGameButton_C* SavedGameButton4; // 0x360
    UUI_BP_SavedGameButton_C* SavedGameButton5; // 0x368
    UUI_BP_SavedGameButton_C* SavedGameButton6; // 0x370
    UUI_BP_SavedGameButton_C* SavedGameButton7; // 0x378
    UUI_BP_SavedGameButton_C* SavedGameButton8; // 0x380
    UUI_BP_SavedGameButton_C* SavedGameButton9; // 0x388
    UVerticalBox* SaveList; // 0x390
    UPhoenixTextBlock* Title; // 0x398
    char pad_3a0[0x10];
    UWidgetAnimation* DetailsAnimation; // 0x3b0
    int32_t DetailsDirection; // 0x3b8
    char pad_3bc[0x4];
    TArray<UUI_BP_SavedGameButton_C*> Buttons; // 0x3c0
    char pad_3d0[0x10];
    UUI_BP_SavedGameButton_C* HoveredSlot; // 0x3e0
    char pad_3e8[0x40];
    ULegend* ParentLegend; // 0x428
    bool AudioIsHoveredSlotInUse; // 0x430
    char pad_431[0x7];
    static UUI_BP_SaveMenu_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void InitSlotButtons(int32_t Temp_int_Array_Index_Variable, TArray<FSaveGameInfo>& CallFunc_GetUserSavesBySlot_SaveData);
    void SaveToSlot(UUI_BP_SavedGameButton_C* SaveButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_GetFileName_FileName, int32_t CallFunc_ParseSlotNumFromName_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_SaveGameInSlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void RefreshButtons(TArray<FSaveGameInfo>& SaveInfo, UUI_BP_SavedGameButton_C* CurrentButton, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FSaveGameInfo CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUI_BP_SavedGameButton_C* CallFunc_Array_Get_Item_1);
    void OverwriteHoveredSave(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void DeleteHoveredSave(int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FSaveGameInfo>& CallFunc_GetUserSavesBySlot_SaveData, FString CallFunc_GetFileName_FileName, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_ParseSlotNumFromName_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_DeleteGameFromSlot_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void MenuButtonClicked(UUI_BP_SavedGameButton_C* Button, bool CallFunc_Not_PreBool_ReturnValue);
    void MenuButtonUnhovered(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array);
    void MenuButtonHovered(UUI_BP_SavedGameButton_C* Button, FLegendItemData TempLegendData);
    void MenuButtonReleased(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void MenuButtonPressed(UUI_BP_SavedGameButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void Construct();
    void RefreshListAfterSave0(TArray<FSaveGameInfo>& SaveData);
    void BlueprintFocusAcquired();
    void Destruct();
    void RefreshListAfterSaveFailed0();
    void ExecuteUbergraph_UI_BP_SaveMenu(int32_t EntryPoint, TArray<FSaveGameInfo>& K2Node_Event_SaveData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void OnSaveFailed__DelegateSignature();
    void OnSaveStarted__DelegateSignature();
    void StartStopDelete__DelegateSignature(bool Start, int32_t LegendIndex);
    void StartStopOverwrite__DelegateSignature(bool Start, int32_t LegendIndex);
    void OnLegendRequested__DelegateSignature(TArray<FLegendItemData>& LegendData);
    void OnGameSaved__DelegateSignature();
}; // Size: 0x438
#pragma pack(pop)
