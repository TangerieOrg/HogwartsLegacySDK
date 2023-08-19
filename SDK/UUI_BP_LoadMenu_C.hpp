#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_SavedGameButton_C;
class UUI_BP_LoadSaveDetails_C;
class UWidgetAnimation;
class ULegend;
class UUI_BP_SimpleScrollBox_C;
class UVerticalBox;
class UPhoenixTextBlock;
class UPopupScreen;
class UUIManager;
class UUIOnlineManager;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_LoadMenu_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* showDetailsPanel; // 0x330
    UUI_BP_LoadSaveDetails_C* detailPanel; // 0x338
    UVerticalBox* SaveItems; // 0x340
    UPhoenixTextBlock* Title; // 0x348
    UUI_BP_SimpleScrollBox_C* UI_BP_SimpleScrollBox; // 0x350
    bool IsSaveMenu; // 0x358
    char pad_359[0x17];
    int32_t CharacterID; // 0x370
    int32_t DetailsDirection; // 0x374
    UUI_BP_SavedGameButton_C* ClickedLoadButton; // 0x378
    ULegend* ParentLegend; // 0x380
    static UUI_BP_LoadMenu_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void OnLoadConfirmPopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UUIManager* CallFunc_GetUIManagerPure_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FString CallFunc_GetFileName_FileName);
    void MenuButtonUnhovered(UUI_BP_SavedGameButton_C* Button);
    void MenuButtonHovered(UUI_BP_SavedGameButton_C* Button, FLegendItemData TempLegendData);
    void MenuButtonSelected(UUI_BP_SavedGameButton_C* Button, UUIOnlineManager* CallFunc_GetUIOnlineManagerPure_ReturnValue, bool CallFunc_IsIntroSave_bIsIntroSave, bool CallFunc_IsFullGameInstalled_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsInFrontendLevel_ReturnValue, FString CallFunc_GetFileName_FileName, FString CallFunc_GetSaveWarningString_SaveWarning);
    void SetLoadSaveData(int32_t CharacterID, int32_t NumSaves, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_LoadMenu(int32_t EntryPoint, UUI_BP_SavedGameButton_C* CallFunc_Create_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void OnLoadSave__DelegateSignature(FString Filename, int32_t CharacterID);
}; // Size: 0x388
#pragma pack(pop)
