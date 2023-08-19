#pragma once
#include <cstdint>
#include "FStructSerializerArrayTestStruct.hpp"
#include "FStructSerializerBooleanTestStruct.hpp"
#include "FStructSerializerBuiltinTestStruct.hpp"
#include "FStructSerializerMapTestStruct.hpp"
#include "FStructSerializerNumericTestStruct.hpp"
#include "FStructSerializerObjectTestStruct.hpp"
#include "FStructSerializerSetTestStruct.hpp"
#pragma pack(push, 1)
struct FStructSerializerTestStruct {
    FStructSerializerNumericTestStruct Numerics; // 0x0
    FStructSerializerBooleanTestStruct Booleans; // 0x30
    char pad_33[0x5];
    FStructSerializerObjectTestStruct Objects; // 0x38
    char pad_d8[0x8];
    FStructSerializerBuiltinTestStruct Builtins; // 0xe0
    FStructSerializerArrayTestStruct Arrays; // 0x170
    FStructSerializerMapTestStruct Maps; // 0x1d0
    FStructSerializerSetTestStruct Sets; // 0x310
}; // Size: 0x450
#pragma pack(pop)
