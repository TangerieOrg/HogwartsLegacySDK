#pragma once
#include <cstdint>
#include "UNameProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UName_Conditional : public UNameProvider {
public:
    UBoolProvider* Condition; // 0x28
    UNameProvider* Value; // 0x30
    static UName_Conditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
