#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPropertyContainerTestObject : public UObject {
public:
    bool bSomeBool; // 0x28
    char pad_29[0x3];
    uint32_t SomeUInt32; // 0x2c
    float SomeFloat; // 0x30
    FVector SomeVector; // 0x34
    FRotator SomeRotator; // 0x40
    int32_t SomeClampedInt; // 0x4c
    int32_t SomeClampedInt2; // 0x50
    int32_t SomeUIClampedInt; // 0x54
    float SomeClampedFloat; // 0x58
    float SomeUIClampedFloat; // 0x5c
    float SomeClampedFloat2; // 0x60
    char pad_64[0x4];
    FString SomeString; // 0x68
    char pad_78[0x18];
    TArray<float> SomeFloatArray; // 0x90
    static UPropertyContainerTestObject* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
