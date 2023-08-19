#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateLocalSkinFXVar.hpp"
class UFXAutoTriggerLinearColor;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateLocalSkinFXVarLinearColor : public UFXAutoTriggerUpdateLocalSkinFXVar {
public:
    FName Var; // 0x28
    UFXAutoTriggerLinearColor* Color; // 0x30
    static UFXAutoTriggerUpdateLocalSkinFXVarLinearColor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
