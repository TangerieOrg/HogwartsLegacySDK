#pragma once
#include <cstdint>
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_FallbackChain : public UNameProvider {
public:
    TArray<UNameProvider*> Entries; // 0x28
    static UName_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
