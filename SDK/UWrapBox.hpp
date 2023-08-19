#pragma once
#include <cstdint>
#include "EOrientation.hpp"
#include "FVector2D.hpp"
#include "UPanelWidget.hpp"
class UWidget;
class UWrapBoxSlot;
#pragma pack(push, 1)
class UWrapBox : public UPanelWidget {
public:
    FVector2D InnerSlotPadding; // 0x120
    float WrapWidth; // 0x128
    float WrapSize; // 0x12c
    bool bExplicitWrapWidth; // 0x130
    bool bExplicitWrapSize; // 0x131
    EOrientation Orientation; // 0x132
    char pad_133[0x15];
    static UWrapBox* StaticClass();
    void SetInnerSlotPadding(FVector2D InPadding);
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
}; // Size: 0x148
#pragma pack(pop)
