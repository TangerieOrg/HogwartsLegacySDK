#pragma once
#include <cstdint>
class UUserWidget;
#pragma pack(push, 1)
struct FUserWidgetPool {
    TArray<UUserWidget*> ActiveWidgets; // 0x0
    TArray<UUserWidget*> InactiveWidgets; // 0x10
    char pad_20[0x60];
}; // Size: 0x80
#pragma pack(pop)
