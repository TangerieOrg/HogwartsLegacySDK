#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
class UFXAutoTriggerBool;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateNiagaraBatchBool : public UFXAutoTriggerUpdateNiagaraBatchVar {
public:
    FName Var; // 0x28
    UFXAutoTriggerBool* Bool; // 0x30
    static UFXAutoTriggerUpdateNiagaraBatchBool* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
