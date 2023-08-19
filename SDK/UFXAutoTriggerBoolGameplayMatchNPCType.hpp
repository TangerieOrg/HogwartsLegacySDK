#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameplayMatchNPCType : public UFXAutoTriggerBool {
public:
    int32_t Types; // 0x28
    int32_t ExcludeTypes; // 0x2c
    static UFXAutoTriggerBoolGameplayMatchNPCType* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
