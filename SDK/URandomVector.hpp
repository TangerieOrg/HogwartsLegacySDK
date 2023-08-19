#pragma once
#include <cstdint>
#include "UFieldNodeVector.hpp"
#pragma pack(push, 1)
class URandomVector : public UFieldNodeVector {
public:
    float Magnitude; // 0xc8
    char pad_cc[0x4];
    static URandomVector* StaticClass();
    URandomVector* SetRandomVector(float Magnitude);
}; // Size: 0xd0
#pragma pack(pop)
