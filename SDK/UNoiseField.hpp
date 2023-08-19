#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class UNoiseField : public UFieldNodeFloat {
public:
    float MinRange; // 0xc8
    float MaxRange; // 0xcc
    FTransform Transform; // 0xd0
    static UNoiseField* StaticClass();
    UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
}; // Size: 0x100
#pragma pack(pop)
