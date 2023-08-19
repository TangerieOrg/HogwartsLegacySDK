#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolNotInFrontend : public UFXAutoTriggerBool {
public:
    static UFXAutoTriggerBoolNotInFrontend* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
