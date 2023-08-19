#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UFieldNodeVector.hpp"
#pragma pack(push, 1)
class UUniformVector : public UFieldNodeVector {
public:
    float Magnitude; // 0xc8
    FVector Direction; // 0xcc
    static UUniformVector* StaticClass();
    UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
}; // Size: 0xd8
#pragma pack(pop)
