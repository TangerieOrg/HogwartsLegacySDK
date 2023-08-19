#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
#pragma pack(push, 1)
class UWidgetSwitcher : public UPanelWidget {
public:
    int32_t ActiveWidgetIndex; // 0x120
    char pad_124[0x14];
    static UWidgetSwitcher* StaticClass();
    void SetActiveWidgetIndex(int32_t Index);
    void SetActiveWidget(UWidget* Widget);
    UWidget* GetWidgetAtIndex(int32_t Index);
    int32_t GetNumWidgets();
    int32_t GetActiveWidgetIndex();
    UWidget* GetActiveWidget();
}; // Size: 0x138
#pragma pack(pop)
