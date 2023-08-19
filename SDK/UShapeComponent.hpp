#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UPrimitiveComponent.hpp"
class UBodySetup;
class UClass;
#pragma pack(push, 1)
class UShapeComponent : public UPrimitiveComponent {
public:
    UBodySetup* ShapeBodySetup; // 0x480
    UClass* AreaClass; // 0x488
    FColor ShapeColor; // 0x490
    uint8_t bDrawOnlyIfSelected : 1; // 0x494
    uint8_t bShouldCollideWhenPlacing : 1; // 0x494
    uint8_t bDynamicObstacle : 1; // 0x494
    uint8_t pad_bitfield_494_3 : 5;
    char pad_495[0xb];
    static UShapeComponent* StaticClass();
}; // Size: 0x4a0
#pragma pack(pop)
