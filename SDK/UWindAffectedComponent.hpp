#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UWindAffectedComponent : public USceneComponent {
public:
    char pad_220[0x4];
    float WindSpeed; // 0x224
    bool bInside; // 0x228
    char pad_229[0x17];
    static UWindAffectedComponent* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
