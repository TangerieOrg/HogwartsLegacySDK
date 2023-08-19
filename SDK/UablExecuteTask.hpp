#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UExecuteTask;
#pragma pack(push, 1)
class UablExecuteTask : public UAblAbilityTask {
public:
    UExecuteTask* ExecuteTask; // 0x70
    static UablExecuteTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
