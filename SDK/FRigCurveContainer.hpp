#pragma once
#include <cstdint>
#include "FRigCurve.hpp"
#pragma pack(push, 1)
struct FRigCurveContainer {
    char pad_0[0x20];
    TArray<FRigCurve> Curves; // 0x20
    char pad_30[0x50];
    TArray<FName> Selection; // 0x80
    char pad_90[0x8];
}; // Size: 0x98
#pragma pack(pop)
