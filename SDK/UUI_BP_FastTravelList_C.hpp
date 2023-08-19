#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFastTravelList.hpp"
class UWidgetAnimation;
class UPhoenixTextBlock;
class APlayerController;
class UUI_BP_FastTravelButton_C;
class UVerticalBox;
class UUI_BP_SimpleScrollBox_C;
class UFastTravelManager;
class UWidget;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_FastTravelList_C : public UFastTravelList {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x330
    UWidgetAnimation* showList; // 0x338
    UPhoenixTextBlock* FastTravelListTitle; // 0x340
    UVerticalBox* locationList; // 0x348
    UUI_BP_SimpleScrollBox_C* locationScrollBox; // 0x350
    FString HighlighItemName; // 0x358
    TArray<UUI_BP_FastTravelButton_C*> LocationButtonArray; // 0x368
    UUI_BP_FastTravelButton_C* highlightedLocation; // 0x378
    bool isListShowing; // 0x380
    char pad_381[0x3];
    int32_t listCount; // 0x384
    int32_t expansionCount; // 0x388
    char pad_38c[0x4];
    TArray<FString> LocationListArray; // 0x390
    float expandAnimationFrame; // 0x3a0
    char pad_3a4[0x24];
    static UUI_BP_FastTravelList_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void ClearLocationList();
    void OnLocationUnhovered(UUI_BP_FastTravelButton_C* Button, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void OnLocationHovered(UUI_BP_FastTravelButton_C* Button, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePositionScaledByDPI_LocationX, float CallFunc_GetMousePositionScaledByDPI_LocationY, bool CallFunc_GetMousePositionScaledByDPI_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void OnLocationClicked(UUI_BP_FastTravelButton_C* Button);
    void PopulateLocationList(TArray<FString>& ListArray, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, UFastTravelManager* CallFunc_Get_ReturnValue, bool CallFunc_IsFastTravelUnlockedForLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin);
    void ClearListMenuItems0();
    void SetListTitle0(FString Title);
    void ClearHighlightListMenuItem0(bool bCallUnHovered);
    void HighlightListMenuItem0(FString ItemName, bool bCallUnHovered);
    void AddListMenuItem0(FString ItemName);
    void ShowEvent0();
    void HideEvent0();
    void AddList0(TArray<FString>& ItemList);
    void Construct();
    void DisableItem0(FString ItemName);
    void EnableItem0(FString ItemName);
    void ExecuteUbergraph_UI_BP_FastTravelList(int32_t EntryPoint, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FString CallFunc_Array_Get_Item, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FString CallFunc_Array_Get_Item_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, FString K2Node_Event_Title, bool K2Node_Event_bCallUnHovered_1, FString K2Node_Event_ItemName_3, bool K2Node_Event_bCallUnHovered, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FString K2Node_Event_ItemName_2, TArray<FString>& K2Node_Event_ItemList, bool CallFunc_IsValid_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, UUI_BP_FastTravelButton_C* K2Node_DynamicCast_AsUI_BP_Fast_Travel_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FString K2Node_Event_ItemName_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue_1, FString K2Node_Event_ItemName, UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_2);
    void OnFastTravelButtonUnhovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
    void OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelButton_C* Button);
}; // Size: 0x3c8
#pragma pack(pop)
