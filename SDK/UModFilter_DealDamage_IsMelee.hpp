#pragma once
#include <cstdint>
#include "UModFilter_DealDamage_Base.hpp"
#pragma pack(push, 1)
class UModFilter_DealDamage_IsMelee : public UModFilter_DealDamage_Base {
public:
    static UModFilter_DealDamage_IsMelee* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
