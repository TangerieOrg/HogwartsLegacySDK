#pragma once
#include <cstdint>
#include "EAnimationDirectionSource.hpp"
#include "ECharacterOptionsCollisionResponse.hpp"
#include "EControlBehaviors.hpp"
#include "ELeftArmState\Type.hpp"
#include "EManagedMovementModePriority.hpp"
#include "EOverrideNPCStateOnFinish.hpp"
#include "ERightArmState\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "ESynchronizeMethod.hpp"
#include "USceneRigObjectActionBase.hpp"
class USceneRigCharacterOptionsAsset;
class UBoolProvider;
class UIntProvider;
#pragma pack(push, 1)
class USceneAction_CharacterOptions : public USceneRigObjectActionBase {
public:
    char pad_a0[0x8];
    USceneRigCharacterOptionsAsset* OPTIONS; // 0xa8
    bool bDisableURO; // 0xb0
    EControlBehaviors ControlBehaviors; // 0xb1
    bool bCancelAbilities; // 0xb2
    bool bDisableProceduralEyes; // 0xb3
    int32_t LODOverride; // 0xb4
    bool AlwaysTickPoseAndRefreshBones; // 0xb8
    char pad_b9[0x3];
    float BoundsScale; // 0xbc
    bool bEnableReactions; // 0xc0
    bool bForceDismount; // 0xc1
    EManagedMovementModePriority MovementModePriority; // 0xc2
    bool bUseCustomMovementMode; // 0xc3
    bool bSanityCheckTransforms; // 0xc4
    ECharacterOptionsCollisionResponse CollisionResponse; // 0xc5
    EStandardManagedPriority SocializationPriority; // 0xc6
    bool bDisableSocialization; // 0xc7
    EStandardManagedPriority IKPriority; // 0xc8
    bool bEnableIK; // 0xc9
    bool bEnableFloorContact; // 0xca
    char pad_cb[0x5];
    UBoolProvider* EnableFloorContactProvider; // 0xd0
    bool bEnableLookat; // 0xd8
    bool bEnablePoseFixup; // 0xd9
    char pad_da[0x2];
    float IKBlendDurationOnEnter; // 0xdc
    float IKBlendDurationOnExit; // 0xe0
    EAnimationDirectionSource LowestAllowedLookAtPriority; // 0xe4
    bool bDisablePostProcessBlueprint; // 0xe5
    EStandardManagedPriority ScalePriority; // 0xe6
    bool ScaleRootMotion; // 0xe7
    bool UnityScale; // 0xe8
    bool OverrideRootMotionTranslationScale; // 0xe9
    char pad_ea[0x2];
    float RootMotionTranslationScale; // 0xec
    char pad_f0[0x50];
    bool DisableAudioOcclusion; // 0x140
    bool bRemoveSpellEffects; // 0x141
    bool bOverrideDisableSpells; // 0x142
    bool bDisableSpells; // 0x143
    bool bRemoveGuideSpline; // 0x144
    EStandardManagedPriority DisableSpellsPriority; // 0x145
    bool bSetRightArmState; // 0x146
    ERightArmState::Type RightArmState; // 0x147
    bool bSetLeftArmState; // 0x148
    ELeftArmState::Type LeftArmState; // 0x149
    EOverrideNPCStateOnFinish OverrideNPCStateOnFinish; // 0x14a
    bool bOverrideIsTargetableByAi; // 0x14b
    bool bIsTargetableByAi; // 0x14c
    EStandardManagedPriority TargetableByAiPriority; // 0x14d
    bool bOverrideIsAiSuspended; // 0x14e
    bool bSuspendAi; // 0x14f
    UIntProvider* SynchronizationMethodProvider; // 0x150
    bool ReleaseFleshLockOnFinish; // 0x158
    ESynchronizeMethod SynchronizationMethod; // 0x159
    bool bSynchronizeLocation; // 0x15a
    char pad_15b[0x5];
    static USceneAction_CharacterOptions* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
