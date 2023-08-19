#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
#pragma pack(push, 1)
class UGenericStepWidget : public UUserWidget {
public:
    UImage* checkmark; // 0x268
    static UGenericStepWidget* StaticClass();
    void UntickBox(UImage* Image);
    void TickBox(UImage* Image);
}; // Size: 0x270
#pragma pack(pop)
