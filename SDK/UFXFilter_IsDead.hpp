#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsDead : public UFXFilter {
public:
    bool ConsiderTakeAKneeDead; // 0x30
    char pad_31[0x7];
    static UFXFilter_IsDead* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
