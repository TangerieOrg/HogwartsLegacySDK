#pragma once
#include <cstdint>
#include "FTimeRigEventSymbol.hpp"
#pragma pack(push, 1)
struct FTimeRigNamedSymbol : public FTimeRigEventSymbol {
    FName Name; // 0x18
}; // Size: 0x20
#pragma pack(pop)
