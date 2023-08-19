#pragma once
#include <cstdint>
#include "FOverlayItem.hpp"
#include "UOverlays.hpp"
#pragma pack(push, 1)
class UBasicOverlays : public UOverlays {
public:
    TArray<FOverlayItem> Overlays; // 0x28
    static UBasicOverlays* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
