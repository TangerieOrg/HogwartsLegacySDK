#pragma once
#include <cstdint>
#include "UStringProvider.hpp"
#pragma pack(push, 1)
class UString_Direct : public UStringProvider {
public:
    FString Value; // 0x28
    static UString_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
