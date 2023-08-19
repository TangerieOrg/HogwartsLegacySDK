#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class USafeZoneSlot : public UPanelSlot {
public:
    bool bIsTitleSafe; // 0x38
    char pad_39[0x3];
    FMargin SafeAreaScale; // 0x3c
    EHorizontalAlignment HAlign; // 0x4c
    EVerticalAlignment VAlign; // 0x4d
    char pad_4e[0x2];
    FMargin Padding; // 0x50
    static USafeZoneSlot* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
