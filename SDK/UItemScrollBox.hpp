#pragma once
#include <cstdint>
#include "EDescendantScrollDestination.hpp"
#include "UScrollBox.hpp"
#pragma pack(push, 1)
class UItemScrollBox : public UScrollBox {
public:
    float StickScrollStepSize; // 0x880
    char pad_884[0x4];
    static UItemScrollBox* StaticClass();
    void SetNavigationScrollPadding(float NewNavigationScrollPadding);
    void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);
    void SetAlwaysShowScrollbarTrack(bool NewAlwaysShowScrollbarTrack);
    void OnStickScroll(float AnalogVal);
}; // Size: 0x888
#pragma pack(pop)
