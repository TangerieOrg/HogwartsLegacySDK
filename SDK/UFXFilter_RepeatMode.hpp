#pragma once
#include <cstdint>
#include "EMultiFXRepeat.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_RepeatMode : public UFXFilter {
public:
    EMultiFXRepeat RepeatMode; // 0x30
    char pad_31[0x3];
    int32_t MaxCount; // 0x34
    bool bImmediate; // 0x38
    char pad_39[0x7];
    static UFXFilter_RepeatMode* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
