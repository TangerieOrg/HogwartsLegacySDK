#pragma once
#include <cstdint>
#include "FStructSerializerBuiltinTestStruct.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FStructSerializerArrayTestStruct {
    TArray<int32_t> Int32Array; // 0x0
    TArray<uint8_t> ByteArray; // 0x10
    int32_t StaticSingleElement; // 0x20
    int32_t StaticInt32Array[3]; // 0x24
    float StaticFloatArray[3]; // 0x30
    char pad_3c[0x4];
    TArray<FVector> VectorArray; // 0x40
    TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x50
}; // Size: 0x60
#pragma pack(pop)
