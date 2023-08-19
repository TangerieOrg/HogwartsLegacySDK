#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UModel;
class UBodySetup;
#pragma pack(push, 1)
class UBrushComponent : public UPrimitiveComponent {
public:
    UModel* Brush; // 0x480
    UBodySetup* BrushBodySetup; // 0x488
    char pad_490[0x20];
    static UBrushComponent* StaticClass();
}; // Size: 0x4b0
#pragma pack(pop)
