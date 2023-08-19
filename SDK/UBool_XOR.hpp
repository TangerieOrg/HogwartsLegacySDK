#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_XOR : public UBoolProvider {
public:
    TArray<UBoolProvider*> Children; // 0x28
    static UBool_XOR* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
