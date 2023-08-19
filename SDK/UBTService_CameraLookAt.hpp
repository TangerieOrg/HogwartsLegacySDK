#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#pragma pack(push, 1)
class UBTService_CameraLookAt : public UBTService_CameraBase {
public:
    char pad_70[0x8];
    FBlackboardKeySelector LookAtStrengthKey; // 0x78
    char pad_a0[0x8];
    FBlackboardKeySelector UserInputActiveKey; // 0xa8
    static UBTService_CameraLookAt* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
