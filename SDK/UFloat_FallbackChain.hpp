#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_FallbackChain : public UFloatProvider {
public:
    TArray<UFloatProvider*> Entries; // 0x28
    static UFloat_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
