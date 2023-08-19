#pragma once
#include <cstdint>
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarConsoleVariable : public UFXAutoTriggerScalar {
public:
    FName ConsoleVariable; // 0x28
    static UFXAutoTriggerScalarConsoleVariable* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
