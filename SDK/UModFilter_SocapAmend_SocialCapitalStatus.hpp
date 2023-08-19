#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UMODFilter_SocapAmend_Base.hpp"
#pragma pack(push, 1)
class UModFilter_SocapAmend_SocialCapitalStatus : public UMODFilter_SocapAmend_Base {
public:
    EValueComparison ComparisonOperator; // 0x30
    SocialCapitalStatusIDs SocialCapitalStatus; // 0x31
    char pad_32[0x6];
    static UModFilter_SocapAmend_SocialCapitalStatus* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
