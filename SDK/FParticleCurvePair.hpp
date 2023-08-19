#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FParticleCurvePair {
    FString CurveName; // 0x0
    UObject* CurveObject; // 0x10
}; // Size: 0x18
#pragma pack(pop)
