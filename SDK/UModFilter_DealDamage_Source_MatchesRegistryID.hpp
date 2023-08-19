#pragma once
#include <cstdint>
#include "UModFilter_DealDamage_Base.hpp"
#pragma pack(push, 1)
class UModFilter_DealDamage_Source_MatchesRegistryID : public UModFilter_DealDamage_Base {
public:
    bool bMatchWholeWord; // 0x30
    char pad_31[0x7];
    FString MatchingRegistryID; // 0x38
    static UModFilter_DealDamage_Source_MatchesRegistryID* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
