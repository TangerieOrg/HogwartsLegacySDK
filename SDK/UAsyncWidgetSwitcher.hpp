#pragma once
#include <cstdint>
#include "UWidgetSwitcher.hpp"
class UUserWidget;
class UAsyncLoadWrapper;
#pragma pack(push, 1)
class UAsyncWidgetSwitcher : public UWidgetSwitcher {
public:
    bool ShouldPreloadAll; // 0x138
    char pad_139[0x1f];
    static UAsyncWidgetSwitcher* StaticClass();
    void SetParent(UUserWidget* NewParent);
    void OnActiveItemLoaded(UAsyncLoadWrapper* Item);
}; // Size: 0x158
#pragma pack(pop)
