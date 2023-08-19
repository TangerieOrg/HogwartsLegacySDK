#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Season : public UFXFilter {
public:
    bool bSummer; // 0x30
    bool bFall; // 0x31
    bool bWinter; // 0x32
    bool bSpring; // 0x33
    char pad_34[0x4];
    static UFXFilter_Season* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
