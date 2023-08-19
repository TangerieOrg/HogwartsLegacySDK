#pragma once
#include <cstdint>
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
class UClass;
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_IsClass : public UCreatureLookAtTargetEvaluation_Bool {
public:
    UClass* Class; // 0x30
    static UCreatureLookAtTargetEvaluation_IsClass* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
