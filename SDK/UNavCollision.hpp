#pragma once
#include <cstdint>
#include "FNavCollisionBox.hpp"
#include "FNavCollisionCylinder.hpp"
#include "UNavCollisionBase.hpp"
class UClass;
#pragma pack(push, 1)
class UNavCollision : public UNavCollisionBase {
public:
    char pad_70[0x10];
    TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
    TArray<FNavCollisionBox> BoxCollision; // 0x90
    UClass* AreaClass; // 0xa0
    uint8_t bGatherConvexGeometry : 1; // 0xa8
    uint8_t bCreateOnClient : 1; // 0xa8
    uint8_t pad_bitfield_a8_2 : 6;
    char pad_a9[0x2f];
    static UNavCollision* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
