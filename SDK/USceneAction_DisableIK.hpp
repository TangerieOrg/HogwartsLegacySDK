#pragma once
#include <cstdint>
#include "EAnimationDirectionSource.hpp"
#include "EStandardManagedPriority.hpp"
#include "USceneRigObjectActionBase.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_DisableIK : public USceneRigObjectActionBase {
public:
    bool bDisableIK; // 0xa0
    bool bDisableFloorContact; // 0xa1
    bool bDisableLookAt; // 0xa2
    bool bDisablePoseFixup; // 0xa3
    EStandardManagedPriority IKPriority; // 0xa4
    char pad_a5[0x3];
    UFloatProvider* BlendOutDuration; // 0xa8
    UFloatProvider* BlendInDuration; // 0xb0
    EAnimationDirectionSource LowestAllowedLookAtPriority; // 0xb8
    char pad_b9[0x7];
    static USceneAction_DisableIK* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
