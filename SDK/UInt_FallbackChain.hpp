#pragma once
#include <cstdint>
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_FallbackChain : public UIntProvider {
public:
    TArray<UIntProvider*> Entries; // 0x28
    static UInt_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
