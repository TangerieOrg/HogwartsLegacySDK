#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UUI_BP_TraitNote_C : public UAvaUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* traitDesc_1; // 0x330
    UImage* traitIcon; // 0x338
    UPhoenixTextBlock* traitTier; // 0x340
    UPhoenixTextBlock* traitTitle; // 0x348
    bool isInTooltip; // 0x350
    char pad_351[0x7];
    static UUI_BP_TraitNote_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void Set_TraitData(FString traitName);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_TraitNote(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x358
#pragma pack(pop)
