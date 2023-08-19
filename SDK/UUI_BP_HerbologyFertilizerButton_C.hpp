#pragma once
#include <cstdint>
#include "FFertilizerEffect.hpp"
#include "FInventoryResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UUI_BP_InventoryIconButton_C;
class UIconButtonWidget;
#pragma pack(push, 1)
class UUI_BP_HerbologyFertilizerButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* descriptionText; // 0x330
    UUI_BP_InventoryIconButton_C* Icon; // 0x338
    UPhoenixTextBlock* NameText; // 0x340
    char pad_348[0x30];
    FName FertilizerName; // 0x378
    static UUI_BP_HerbologyFertilizerButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void InitFertilizer(FInventoryResult FertilizerItem, FFertilizerEffect CallFunc_GetFertilizerEffectStatic_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void ExecuteUbergraph_UI_BP_HerbologyFertilizerButton(int32_t EntryPoint, FInventoryResult K2Node_MakeStruct_InventoryResult, bool K2Node_Event_IsDesignTime, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_2, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_1, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton);
    void OnUnhovered__DelegateSignature(FName FertilizerID);
    void OnHovered__DelegateSignature(FName FertilizerID, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton);
    void OnClicked__DelegateSignature(FName FertilizerID);
}; // Size: 0x380
#pragma pack(pop)
