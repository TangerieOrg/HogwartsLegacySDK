#pragma once
#include <cstdint>
#include "EMultiFXState.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_State : public UFXFilter {
public:
    EMultiFXState State; // 0x30
    char pad_31[0x7];
    static UFXFilter_State* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
