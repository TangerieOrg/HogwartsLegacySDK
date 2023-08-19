#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_FallbackChain : public UBoolProvider {
public:
    TArray<UBoolProvider*> Entries; // 0x28
    static UBool_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
