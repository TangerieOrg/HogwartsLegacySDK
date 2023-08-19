#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateNiagaraBatchFloat : public UFXAutoTriggerUpdateNiagaraBatchVar {
public:
    FName Var; // 0x28
    UFXAutoTriggerScalar* Scalar; // 0x30
    static UFXAutoTriggerUpdateNiagaraBatchFloat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
