#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateLocalSkinFXVarFloat : public UFXAutoTriggerUpdateLocalSkinFXVar {
public:
    FName Var; // 0x28
    UFXAutoTriggerScalar* Scalar; // 0x30
    static UFXAutoTriggerUpdateLocalSkinFXVarFloat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
