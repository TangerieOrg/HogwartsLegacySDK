#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UFloat_Conditional : public UFloatProvider {
public:
    UBoolProvider* Condition; // 0x28
    UFloatProvider* Value; // 0x30
    static UFloat_Conditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
