#pragma once
#include <cstdint>
#include "EMultiFXCompare.hpp"
#include "EMultiFXPropertyOwner.hpp"
#include "EMultiFXVectorExtension.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_ValuePropertyCompare : public UFXFilter {
public:
    EMultiFXPropertyOwner PropertyOwner; // 0x30
    char pad_31[0x3];
    FName Name; // 0x34
    EMultiFXCompare Condition; // 0x3c
    char pad_3d[0x3];
    float Value; // 0x40
    EMultiFXVectorExtension VectorUsage; // 0x44
    char pad_45[0x3];
    static UFXFilter_ValuePropertyCompare* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
