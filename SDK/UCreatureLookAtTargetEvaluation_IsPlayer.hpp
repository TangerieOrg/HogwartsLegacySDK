#pragma once
#include <cstdint>
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_IsPlayer : public UCreatureLookAtTargetEvaluation_Bool {
public:
    static UCreatureLookAtTargetEvaluation_IsPlayer* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
