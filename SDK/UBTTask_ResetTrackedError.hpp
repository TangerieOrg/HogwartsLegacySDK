#pragma once
#include <cstdint>
#include "EUtilityTrackedErrorType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTTask_ResetTrackedError_Base.hpp"
#pragma pack(push, 1)
class UBTTask_ResetTrackedError : public UBTTask_ResetTrackedError_Base {
public:
    bool bUseName; // 0x70
    char pad_71[0x3];
    FName ErrorName; // 0x74
    bool bUseAccessory; // 0x7c
    char pad_7d[0x3];
    FBlackboardKeySelector AccessoryActorKey; // 0x80
    bool bUseType; // 0xa8
    EUtilityTrackedErrorType ErrorType; // 0xa9
    char pad_aa[0x6];
    static UBTTask_ResetTrackedError* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
