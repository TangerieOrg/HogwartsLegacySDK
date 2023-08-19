#pragma once
#include <cstdint>
#include "EFactsheetButtonState.hpp"
#include "UIconButtonWidget.hpp"
#pragma pack(push, 1)
class UFactsheetButtonWidget : public UIconButtonWidget {
public:
    FString FactsheetButtonItemName; // 0x4a8
    FString FactsheetButtonItemDesc; // 0x4b8
    FString FactsheetButtonCharacterAsked; // 0x4c8
    FString FactsheetButtonSuggestedLead; // 0x4d8
    EFactsheetButtonState FactsheetButtonItemState; // 0x4e8
    char pad_4e9[0x3];
    int32_t FactsheetRelativeSocialCapital; // 0x4ec
    int32_t FactsheetSocialNeeded; // 0x4f0
    char pad_4f4[0x4];
    static UFactsheetButtonWidget* StaticClass();
}; // Size: 0x4f8
#pragma pack(pop)
