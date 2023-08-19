#pragma once
#include <cstdint>
#include "EUtilityTrackedErrorType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator_IsTrackedErrorReported_Base.hpp"
#pragma pack(push, 1)
class UBTDecorator_IsTrackedErrorReported : public UBTDecorator_IsTrackedErrorReported_Base {
public:
    bool bUseName; // 0x68
    char pad_69[0x3];
    FName ErrorName; // 0x6c
    bool bUseAccessory; // 0x74
    char pad_75[0x3];
    FBlackboardKeySelector AccessoryActorKey; // 0x78
    bool bUseType; // 0xa0
    EUtilityTrackedErrorType ErrorType; // 0xa1
    char pad_a2[0x6];
    static UBTDecorator_IsTrackedErrorReported* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
