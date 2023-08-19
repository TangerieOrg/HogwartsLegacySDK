#pragma once
#include <cstdint>
#include "ETargetType\Type.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTargetTypeBase : public UObject {
public:
    char pad_28[0x10];
    static UTargetTypeBase* StaticClass();
    void SetExpirationTime(float InExpirationTime);
    void SetComputedPriority(float InPriority);
    ETargetType::Type GetTargetType();
    float GetExpirationTime();
    float GetComputedPriority();
}; // Size: 0x38
#pragma pack(pop)
