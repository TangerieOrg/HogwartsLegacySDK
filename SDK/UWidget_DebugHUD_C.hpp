#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UTextBlock;
#pragma pack(push, 1)
class UWidget_DebugHUD_C : public UUserWidget {
public:
    UTextBlock* TextBlock_1; // 0x268
    char pad_270[0x18];
    static UWidget_DebugHUD_C* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
