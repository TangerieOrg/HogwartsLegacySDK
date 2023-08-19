#pragma once
#include <cstdint>
#include "UModFilter_DealDamage_Base.hpp"
class UObject;
struct FDamageInfo;
#pragma pack(push, 1)
class UModFilter_DealDamage_Custom : public UModFilter_DealDamage_Base {
public:
    static UModFilter_DealDamage_Custom* StaticClass();
    bool BlueprintPassesDamageFilter(UObject* InTargetObject, FDamageInfo& DamageInfo);
}; // Size: 0x30
#pragma pack(pop)
