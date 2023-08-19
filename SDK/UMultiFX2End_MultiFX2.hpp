#pragma once
#include <cstdint>
#include "UFXEnd.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UMultiFX2End_MultiFX2 : public UFXEnd {
public:
    TArray<UMultiFX2_Base*> endFX; // 0x28
    static UMultiFX2End_MultiFX2* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
