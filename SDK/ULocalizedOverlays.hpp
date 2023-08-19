#pragma once
#include <cstdint>
#include "UOverlays.hpp"
class UBasicOverlays;
#pragma pack(push, 1)
class ULocalizedOverlays : public UOverlays {
public:
    UBasicOverlays* DefaultOverlays; // 0x28
    char pad_30[0x50];
    static ULocalizedOverlays* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
