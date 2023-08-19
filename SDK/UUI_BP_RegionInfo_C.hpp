#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRegionPopuplData.hpp"
#include "UMapRegionInfoWidget.hpp"
class UPhoenixTextBlock;
class UCanvasPanel;
class UImage;
class UVerticalBox;
class APlayerController;
class UUI_BP_RegionInfoItem_C;
class UObject;
class UPanelSlot;
#pragma pack(push, 1)
class UUI_BP_RegionInfo_C : public UMapRegionInfoWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x330
    UPhoenixTextBlock* DividerText; // 0x338
    UPhoenixTextBlock* EnemyLevel; // 0x340
    UCanvasPanel* EnemyPanel; // 0x348
    UPhoenixTextBlock* HeaderText; // 0x350
    UImage* Icon; // 0x358
    UVerticalBox* ItemsContainer; // 0x360
    UPhoenixTextBlock* MaxLevel; // 0x368
    UPhoenixTextBlock* MinLevel; // 0x370
    UCanvasPanel* RegionInfo; // 0x378
    UUI_BP_RegionInfoItem_C* UI_BP_RegionInfoItem; // 0x380
    char pad_388[0x20];
    UObject* Parent; // 0x3a8
    TArray<UUI_BP_RegionInfoItem_C*> ItemArray; // 0x3b0
    static UUI_BP_RegionInfo_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable);
    void SetEnemyData(FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1);
    void SetMapParent(UObject* ParentScreen);
    void SetItemData(FString RegionName, TArray<FRegionPopuplData>& ItemData, FRegionPopuplData Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FRegionPopuplData CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void ShowBP0();
    void HideBP0();
    void SetDataBP0(FString RegionName, FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData);
    void ExecuteUbergraph_UI_BP_RegionInfo(int32_t EntryPoint, FString K2Node_Event_RegionName, FString K2Node_Event_EnemyLevel, int32_t K2Node_Event_MinLevel, int32_t K2Node_Event_MaxLevel, TArray<FRegionPopuplData>& K2Node_Event_RegionData);
    void HideRegionInfoEvent__DelegateSignature();
    void ShowRegionInfoEvent__DelegateSignature();
}; // Size: 0x3c0
#pragma pack(pop)
