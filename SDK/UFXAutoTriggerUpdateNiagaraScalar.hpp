#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateBase.hpp"
class UFXAutoTriggerScalar;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateNiagaraScalar : public UFXAutoTriggerUpdateBase {
public:
    FName NiagaraVar; // 0x28
    UFXAutoTriggerScalar* Scalar; // 0x30
    static UFXAutoTriggerUpdateNiagaraScalar* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
