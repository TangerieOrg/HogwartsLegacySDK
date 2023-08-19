#pragma once
#include <cstdint>
#include "EAnimMechanicType\Type.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetAnimMechanicTypeTask : public UAblAbilityTask {
public:
    EAnimMechanicType::Type AnimMechanicType; // 0x70
    char pad_71[0x7];
    static UAblSetAnimMechanicTypeTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
