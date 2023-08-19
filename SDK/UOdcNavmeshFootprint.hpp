#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UOdcNavmeshFootprint : public UObject {
public:
    TArray<FVector> Hull; // 0x28
    float Height; // 0x38
    char pad_3c[0x4];
    static UOdcNavmeshFootprint* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
