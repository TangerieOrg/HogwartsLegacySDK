#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_SpellType : public UFXFilter {
public:
    TArray<FName> SpellNames; // 0x30
    static UFXFilter_SpellType* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
