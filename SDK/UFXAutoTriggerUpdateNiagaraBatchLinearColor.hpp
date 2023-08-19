#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
class UFXAutoTriggerLinearColor;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateNiagaraBatchLinearColor : public UFXAutoTriggerUpdateNiagaraBatchVar {
public:
    FName Var; // 0x28
    UFXAutoTriggerLinearColor* Color; // 0x30
    static UFXAutoTriggerUpdateNiagaraBatchLinearColor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
