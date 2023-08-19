#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class UTransform_Conditional : public UTransformProvider {
public:
    UBoolProvider* Condition; // 0x28
    UTransformProvider* Transform; // 0x30
    static UTransform_Conditional* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
