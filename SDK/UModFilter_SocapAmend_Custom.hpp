#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#include "FSocialReasoningComparison.hpp"
#include "FSocialSemanticsComparison.hpp"
#include "UMODFilter_SocapAmend_Base.hpp"
class UObject;
struct FSocapAmendInfo;
#pragma pack(push, 1)
class UModFilter_SocapAmend_Custom : public UMODFilter_SocapAmend_Base {
public:
    bool bUseValueFilter; // 0x30
    EValueComparison ComparisonOperator; // 0x31
    char pad_32[0x2];
    int32_t ComparisonValue; // 0x34
    bool bUseSocialReasoningFilter; // 0x38
    FSocialReasoningComparison SocialReasoningFilter; // 0x39
    bool bUseSocialSemanticsFilter; // 0x3a
    char pad_3b[0x1];
    FSocialSemanticsComparison SocialSemanticsFilter; // 0x3c
    char pad_44[0x4];
    static UModFilter_SocapAmend_Custom* StaticClass();
    bool BlueprintPassesSocapFilter(UObject* InTargetObject, FSocapAmendInfo& SocapInfo);
}; // Size: 0x48
#pragma pack(pop)
