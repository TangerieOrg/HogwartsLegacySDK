#pragma once
#include <cstdint>
#include "UIntProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UInt_Conditional : public UIntProvider {
public:
    UBoolProvider* Condition; // 0x28
    UIntProvider* Value; // 0x30
    static UInt_Conditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
