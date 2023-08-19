#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EBreakableState.hpp"
#pragma pack(push, 1)
class APersistentBreakable : public AWorldObject {
public:
    static APersistentBreakable* StaticClass();
    bool ResetState(EBreakableState NextState);
}; // Size: 0x2b0
#pragma pack(pop)
