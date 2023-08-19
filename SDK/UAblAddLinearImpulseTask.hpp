#pragma once
#include <cstdint>
#include "EAblAddLinearImpulseDirectionType.hpp"
#include "FVector.hpp"
#include "UAblAddLinearImpulseBaseTask.hpp"
#pragma pack(push, 1)
class UAblAddLinearImpulseTask : public UAblAddLinearImpulseBaseTask {
public:
    FVector ImpulseDirection; // 0x70
    float ImpulseDamping; // 0x7c
    float ImpulseStrengthMin; // 0x80
    float ImpulseStrengthMax; // 0x84
    EAblAddLinearImpulseDirectionType DirectionType; // 0x88
    char pad_89[0x7];
    static UAblAddLinearImpulseTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
