#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UFieldNodeVector.hpp"
#pragma pack(push, 1)
class URadialVector : public UFieldNodeVector {
public:
    float Magnitude; // 0xc8
    FVector Position; // 0xcc
    static URadialVector* StaticClass();
    URadialVector* SetRadialVector(float Magnitude, FVector Position);
}; // Size: 0xd8
#pragma pack(pop)
