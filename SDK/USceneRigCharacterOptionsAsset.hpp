#pragma once
#include <cstdint>
#include "EAnimationDirectionSource.hpp"
#include "ECharacterOptionsCollisionResponse.hpp"
#include "EControlBehaviors.hpp"
#include "ELeftArmState\Type.hpp"
#include "EManagedMovementModePriority.hpp"
#include "ERightArmState\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "UDataAsset.hpp"
class UBoolProvider;
class UIntProvider;
#pragma pack(push, 1)
class USceneRigCharacterOptionsAsset : public UDataAsset {
public:
    char pad_30[0x8];
    bool bDisableURO; // 0x38
    EControlBehaviors ControlBehaviors; // 0x39
    bool bCancelAbilities; // 0x3a
    bool bDisableProceduralEyes; // 0x3b
    int32_t LODOverride; // 0x3c
    bool AlwaysTickPoseAndRefreshBones; // 0x40
    char pad_41[0x3];
    float BoundsScale; // 0x44
    bool bEnableReactions; // 0x48
    bool bForceDismount; // 0x49
    EManagedMovementModePriority MovementModePriority; // 0x4a
    bool bUseCustomMovementMode; // 0x4b
    bool bSanityCheckTransforms; // 0x4c
    ECharacterOptionsCollisionResponse CollisionResponse; // 0x4d
    EStandardManagedPriority SocializationPriority; // 0x4e
    bool bDisableSocialization; // 0x4f
    EStandardManagedPriority IKPriority; // 0x50
    bool bEnableIK; // 0x51
    bool bEnableFloorContact; // 0x52
    char pad_53[0x5];
    UBoolProvider* EnableFloorContactProvider; // 0x58
    bool bEnableLookat; // 0x60
    bool bEnablePoseFixup; // 0x61
    char pad_62[0x2];
    float IKBlendDurationOnEnter; // 0x64
    float IKBlendDurationOnExit; // 0x68
    EAnimationDirectionSource LowestAllowedLookAtPriority; // 0x6c
    bool bDisablePostProcessBlueprint; // 0x6d
    EStandardManagedPriority ScalePriority; // 0x6e
    bool ScaleRootMotion; // 0x6f
    bool UnityScale; // 0x70
    bool OverrideRootMotionTranslationScale; // 0x71
    char pad_72[0x2];
    float RootMotionTranslationScale; // 0x74
    char pad_78[0x50];
    bool DisableAudioOcclusion; // 0xc8
    bool bRemoveSpellEffects; // 0xc9
    bool bOverrideDisableSpells; // 0xca
    bool bDisableSpells; // 0xcb
    bool bRemoveGuideSpline; // 0xcc
    EStandardManagedPriority DisableSpellsPriority; // 0xcd
    bool bSetRightArmState; // 0xce
    ERightArmState::Type RightArmState; // 0xcf
    bool bSetLeftArmState; // 0xd0
    ELeftArmState::Type LeftArmState; // 0xd1
    bool bOverrideIsTargetableByAi; // 0xd2
    bool bIsTargetableByAi; // 0xd3
    EStandardManagedPriority TargetableByAiPriority; // 0xd4
    bool bOverrideIsAiSuspended; // 0xd5
    bool bSuspendAi; // 0xd6
    char pad_d7[0x1];
    UIntProvider* SynchronizationMethodProvider; // 0xd8
    bool ReleaseFleshLockOnFinish; // 0xe0
    char pad_e1[0x7];
    static USceneRigCharacterOptionsAsset* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
