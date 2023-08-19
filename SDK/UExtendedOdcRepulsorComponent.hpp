#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UExtendedOdcRepulsorComponent : public USceneComponent {
public:
    float RepulsorDistanceThreshold; // 0x220
    float RepulsorRadius; // 0x224
    float RepulsorOuterCushion; // 0x228
    float RepulsorInnerCushion; // 0x22c
    char pad_230[0x20];
    static UExtendedOdcRepulsorComponent* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
