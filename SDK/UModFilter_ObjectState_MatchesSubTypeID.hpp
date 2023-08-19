#pragma once
#include <cstdint>
#include "UModFilter_ObjectState_Base.hpp"
#pragma pack(push, 1)
class UModFilter_ObjectState_MatchesSubTypeID : public UModFilter_ObjectState_Base {
public:
    bool bMatchWholeWord; // 0x30
    char pad_31[0x7];
    FString MatchingSubTypeID; // 0x38
    static UModFilter_ObjectState_MatchesSubTypeID* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
