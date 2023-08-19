#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UColorProvider.hpp"
#pragma pack(push, 1)
class UColor_Direct : public UColorProvider {
public:
    FLinearColor Value; // 0x28
    static UColor_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
