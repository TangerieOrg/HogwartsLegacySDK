#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UHeaderWidget : public UUserWidget {
public:
    char pad_268[0x30];
    UPhoenixTextBlock* Title; // 0x298
    UPhoenixTextBlock* Subtitle; // 0x2a0
    static UHeaderWidget* StaticClass();
    void SetHeaderTitle();
    void SetHeaderSubtitle();
    void OnSynchronizeProperties();
}; // Size: 0x2a8
#pragma pack(pop)
