#pragma once
#include <cstdint>
#include "UFieldNodeFloat.hpp"
#pragma pack(push, 1)
class UUniformScalar : public UFieldNodeFloat {
public:
    float Magnitude; // 0xc8
    char pad_cc[0x4];
    static UUniformScalar* StaticClass();
    UUniformScalar* SetUniformScalar(float Magnitude);
}; // Size: 0xd0
#pragma pack(pop)
