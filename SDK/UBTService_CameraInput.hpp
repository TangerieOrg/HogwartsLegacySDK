#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FInputContextWithType.hpp"
#include "UBTService_CameraBase.hpp"
#pragma pack(push, 1)
class UBTService_CameraInput : public UBTService_CameraBase {
public:
    char pad_70[0x8];
    FBlackboardKeySelector LookingKey; // 0x78
    char pad_a0[0x8];
    FBlackboardKeySelector TargetingKey; // 0xa8
    char pad_d0[0x8];
    FBlackboardKeySelector ResettingKey; // 0xd8
    char pad_100[0x8];
    FBlackboardKeySelector LastInputKey; // 0x108
    char pad_130[0x58];
    FBlackboardKeySelector TransfigIsContextSetKey; // 0x188
    FInputContextWithType TransfigIsContextSetType; // 0x1b0
    char pad_1bc[0x4];
    static UBTService_CameraInput* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
