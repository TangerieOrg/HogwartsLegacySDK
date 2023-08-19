#pragma once
#include <cstdint>
#include "EDynamicBoxType.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FRadialBoxSettings.hpp"
#include "FSlateChildSize.hpp"
#include "FUserWidgetPool.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UDynamicEntryBoxBase : public UWidget {
public:
    EDynamicBoxType EntryBoxType; // 0x108
    char pad_109[0x3];
    FVector2D EntrySpacing; // 0x10c
    char pad_114[0x4];
    TArray<FVector2D> SpacingPattern; // 0x118
    FSlateChildSize EntrySizeRule; // 0x128
    EHorizontalAlignment EntryHorizontalAlignment; // 0x130
    EVerticalAlignment EntryVerticalAlignment; // 0x131
    char pad_132[0x2];
    int32_t MaxElementSize; // 0x134
    FRadialBoxSettings RadialBoxSettings; // 0x138
    char pad_148[0x10];
    FUserWidgetPool EntryWidgetPool; // 0x158
    static UDynamicEntryBoxBase* StaticClass();
    void SetRadialSettings(FRadialBoxSettings& InSettings);
    void SetEntrySpacing(FVector2D& InEntrySpacing);
    int32_t GetNumEntries();
    TArray<UUserWidget*> GetAllEntries();
}; // Size: 0x1d8
#pragma pack(pop)
