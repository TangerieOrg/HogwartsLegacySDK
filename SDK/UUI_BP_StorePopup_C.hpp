#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FMissionLogData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
class UWidgetAnimation;
class UUI_BP_LegendItem_C;
class UPhoenixTextBlock;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BP_StorePopup_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnUnhoverAnimation; // 0x330
    UWidgetAnimation* OnHoverAnimation; // 0x338
    UWidgetAnimation* hideFocus; // 0x340
    UWidgetAnimation* showFocus; // 0x348
    UUI_BP_LegendItem_C* continueCallout; // 0x350
    UPhoenixTextBlock* popupMessage; // 0x358
    bool isCalloutShowing; // 0x360
    char pad_361[0x7];
    static UUI_BP_StorePopup_C* StaticClass();
    void I_GetMissionData(FMissionLogData& MissionData);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetMessageInfo(FString EmptyMessage, bool ShowCallout, FString TempIcon, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void I_SetMissionFocus(bool IsFocus);
    void I_SetOwner(UUserWidget* Owner);
    void I_SetMissionData(FMissionLogData MissionData);
    void Construct();
    void ExecuteUbergraph_UI_BP_StorePopup(int32_t EntryPoint, bool K2Node_Event_IsFocus, UUserWidget* K2Node_Event_Owner, FMissionLogData K2Node_Event_MissionData);
}; // Size: 0x368
#pragma pack(pop)
