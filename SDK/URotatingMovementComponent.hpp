#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UMovementComponent.hpp"
#pragma pack(push, 1)
class URotatingMovementComponent : public UMovementComponent {
public:
    FRotator RotationRate; // 0x108
    FVector PivotTranslation; // 0x114
    uint8_t bRotationInLocalSpace : 1; // 0x120
    uint8_t pad_bitfield_120_1 : 7;
    char pad_121[0x7];
    static URotatingMovementComponent* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
