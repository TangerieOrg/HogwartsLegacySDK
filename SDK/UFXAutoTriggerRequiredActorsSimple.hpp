#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsSimple : public UFXAutoTriggerRequiredActorsBase {
public:
    char pad_28[0x28];
    static UFXAutoTriggerRequiredActorsSimple* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
