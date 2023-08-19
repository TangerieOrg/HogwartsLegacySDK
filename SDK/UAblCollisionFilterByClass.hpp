#pragma once
#include <cstdint>
#include "UAblCollisionFilter.hpp"
class UClass;
#pragma pack(push, 1)
class UAblCollisionFilterByClass : public UAblCollisionFilter {
public:
    UClass* m_Class; // 0x28
    bool m_Negate; // 0x30
    char pad_31[0x7];
    static UAblCollisionFilterByClass* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
