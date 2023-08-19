#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UHoudiniSplineComponent : public USceneComponent {
public:
    char pad_220[0x100];
    static UHoudiniSplineComponent* StaticClass();
}; // Size: 0x320
#pragma pack(pop)
