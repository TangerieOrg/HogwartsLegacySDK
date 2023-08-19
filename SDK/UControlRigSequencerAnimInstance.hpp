#pragma once
#include <cstdint>
#include "UAnimSequencerInstance.hpp"
#pragma pack(push, 1)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance {
public:
    char pad_2c0[0x10];
    static UControlRigSequencerAnimInstance* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
