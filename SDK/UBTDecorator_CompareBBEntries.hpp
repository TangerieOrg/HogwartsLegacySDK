#pragma once
#include <cstdint>
#include "EBlackBoardEntryComparison\Type.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_CompareBBEntries : public UBTDecorator {
public:
    EBlackBoardEntryComparison::Type Operator; // 0x68
    char pad_69[0x7];
    FBlackboardKeySelector BlackboardKeyA; // 0x70
    FBlackboardKeySelector BlackboardKeyB; // 0x98
    static UBTDecorator_CompareBBEntries* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
