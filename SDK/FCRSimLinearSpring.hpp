#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCRSimLinearSpring {
    int32_t SubjectA; // 0x0
    int32_t SubjectB; // 0x4
    float Coefficient; // 0x8
    float Equilibrium; // 0xc
}; // Size: 0x10
#pragma pack(pop)
