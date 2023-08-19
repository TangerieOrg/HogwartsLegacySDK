#pragma once
#include <cstdint>
class UFunction;
#pragma pack(push, 1)
struct FEventGraphFastCallPair {
    UFunction* FunctionToPatch; // 0x0
    int32_t EventGraphCallOffset; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
