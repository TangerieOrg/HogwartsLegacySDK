#pragma once
#include <cstdint>
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_MatchingSubtypes : public UCreatureLookAtTargetEvaluation_Bool {
public:
    FName CreatureTypeID; // 0x30
    FName TargetTypeID; // 0x38
    static UCreatureLookAtTargetEvaluation_MatchingSubtypes* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
