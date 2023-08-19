#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_OR : public UBoolProvider {
public:
    TArray<UBoolProvider*> Children; // 0x28
    static UBool_OR* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
