#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMatchChildOf : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    char pad_28[0x28];
    static UFXAutoTriggerRequiredActorsMatchChildOf* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
