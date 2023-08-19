#pragma once
#include <cstdint>
#include "EBTNodeResult\Type.hpp"
#include "EUtilityTrackedErrorType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_ReportTrackedError : public UBTTaskNode {
public:
    bool bUseCurrentActionAsError; // 0x70
    char pad_71[0x3];
    FName ErrorName; // 0x74
    char pad_7c[0x4];
    FBlackboardKeySelector AccessoryKey; // 0x80
    EUtilityTrackedErrorType ErrorType; // 0xa8
    bool bWaitForReset; // 0xa9
    char pad_aa[0x2];
    float MinTimeout; // 0xac
    bool bUseRangeTimeout; // 0xb0
    char pad_b1[0x3];
    float MaxTimeout; // 0xb4
    EBTNodeResult::Type ReturnType; // 0xb8
    char pad_b9[0x7];
    static UBTTask_ReportTrackedError* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
