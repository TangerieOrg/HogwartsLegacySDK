#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UModFilter_DealDamage_Base.hpp"
#pragma pack(push, 1)
class UModFilter_DealDamage_HasTag : public UModFilter_DealDamage_Base {
public:
    FGameplayTag Tag; // 0x30
    static UModFilter_DealDamage_HasTag* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
