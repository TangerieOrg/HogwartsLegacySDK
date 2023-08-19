#pragma once
#include <cstdint>
#include "UGameplayTask.hpp"
#pragma pack(push, 1)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask {
public:
    char pad_68[0x30];
    static UGameplayTask_TimeLimitedExecution* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
