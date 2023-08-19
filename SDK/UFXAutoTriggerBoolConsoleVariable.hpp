#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolConsoleVariable : public UFXAutoTriggerBool {
public:
    FName ConsoleVariable; // 0x28
    static UFXAutoTriggerBoolConsoleVariable* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
