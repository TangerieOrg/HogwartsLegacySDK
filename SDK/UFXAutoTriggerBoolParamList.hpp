#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolParamList : public UFXAutoTriggerBool {
public:
    TArray<UFXAutoTriggerBool*> Conditions; // 0x28
    static UFXAutoTriggerBoolParamList* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
