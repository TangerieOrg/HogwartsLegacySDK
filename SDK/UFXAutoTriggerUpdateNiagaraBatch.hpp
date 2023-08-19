#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateBase.hpp"
class UFXAutoTriggerUpdateNiagaraBatchVar;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateNiagaraBatch : public UFXAutoTriggerUpdateBase {
public:
    TArray<UFXAutoTriggerUpdateNiagaraBatchVar*> Vars; // 0x28
    static UFXAutoTriggerUpdateNiagaraBatch* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
