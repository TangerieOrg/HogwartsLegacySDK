#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolHasSenseGroup : public UFXAutoTriggerBool {
public:
    TArray<void*> Senses; // 0x28
    static UFXAutoTriggerBoolHasSenseGroup* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
