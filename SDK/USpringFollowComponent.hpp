#pragma once
#include <cstdint>
#include "FAlignToVelocity.hpp"
#include "FSpringFollowComponentSettings.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class USpringFollowComponent : public USceneComponent {
public:
    char pad_220[0x1c];
    bool bAlignToVelocity; // 0x23c
    char pad_23d[0x3];
    FAlignToVelocity AlignToVelocity; // 0x240
    bool bSpringActive; // 0x250
    char pad_251[0xf];
    static USpringFollowComponent* StaticClass();
    void ResetPhysics();
    void RemoveChildOffset();
}; // Size: 0x260
#pragma pack(pop)
