#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavCollisionBase : public UObject {
public:
    uint8_t bIsDynamicObstacle : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    char pad_29[0x47];
    static UNavCollisionBase* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
