#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FUserWidgetPool.hpp"
#include "UWidget.hpp"
class UClass;
class UUserWidget;
#pragma pack(push, 1)
class UListViewBase : public UWidget {
public:
    UClass* EntryWidgetClass; // 0x108
    float WheelScrollMultiplier; // 0x110
    bool bEnableScrollAnimation; // 0x114
    bool bEnableFixedLineOffset; // 0x115
    char pad_116[0x2];
    float FixedLineScrollOffset; // 0x118
    char pad_11c[0x24];
    FUserWidgetPool EntryWidgetPool; // 0x140
    char pad_1c0[0x58];
    static UListViewBase* StaticClass();
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    void SetScrollOffset(float InScrollOffset);
    void SetScrollBarVisibility(ESlateVisibility InVisibility);
    void ScrollToTop();
    void ScrollToBottom();
    void RequestRefresh();
    void RegenerateAllEntries();
    TArray<UUserWidget*> GetDisplayedEntryWidgets();
}; // Size: 0x218
#pragma pack(pop)
