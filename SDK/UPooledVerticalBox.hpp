#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FMargin.hpp"
#include "UVerticalBox.hpp"
class UWidget;
#pragma pack(push, 1)
class UPooledVerticalBox : public UVerticalBox {
public:
    ESlateVisibility DesiredChildVisibility; // 0x130
    char pad_131[0x57];
    static UPooledVerticalBox* StaticClass();
    void SetChildWidgetPool(TArray<UWidget*> ChildWidgets, FMargin Padding);
    void SetChildActive(UWidget* ChildWidget, bool IsActive);
    bool IsChildAvailable(UWidget* ChildWidget);
    bool IsChildActive(UWidget* ChildWidget);
    UWidget* GetNextAvailableChild();
}; // Size: 0x188
#pragma pack(pop)
