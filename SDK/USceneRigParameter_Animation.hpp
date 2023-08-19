#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
class UAnimationProvider;
#pragma pack(push, 1)
class USceneRigParameter_Animation : public USceneRigParameter {
public:
    UAnimationProvider* Value; // 0x38
    static USceneRigParameter_Animation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
