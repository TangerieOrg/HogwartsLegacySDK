#pragma once
#include <cstdint>
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UAmbientGhost_AnimInstance : public UAnimInstance {
public:
    static UAmbientGhost_AnimInstance* StaticClass();
    void WaveCompleted();
}; // Size: 0x2c0
#pragma pack(pop)
