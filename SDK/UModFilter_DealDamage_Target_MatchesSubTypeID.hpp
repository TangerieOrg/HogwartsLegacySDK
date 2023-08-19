#pragma once
#include <cstdint>
#include "UModFilter_DealDamage_Base.hpp"
#pragma pack(push, 1)
class UModFilter_DealDamage_Target_MatchesSubTypeID : public UModFilter_DealDamage_Base {
public:
    bool bMatchWholeWord; // 0x30
    char pad_31[0x7];
    FString MatchingSubTypeID; // 0x38
    static UModFilter_DealDamage_Target_MatchesSubTypeID* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
