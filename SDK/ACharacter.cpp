#include "ACharacter.hpp"
#include "APawn.hpp"
#include "EMovementMode.hpp"
#include "FBasedMovementInfo.hpp"
#include "FCharacterMoveResponsePackedBits.hpp"
#include "FCharacterServerMovePackedBits.hpp"
#include "FHitResult.hpp"
#include "FQuat.hpp"
#include "FRepRootMotionMontage.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FRotator.hpp"
#include "FSimulatedRootMotionReplicatedMove.hpp"
#include "FVector.hpp"
#include "FVector_NetQuantize10.hpp"
#include "FVector_NetQuantize100.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#include "UAnimMontage.hpp"
#include "UCapsuleComponent.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void ACharacter::OnRep_ReplayLastTransformUpdateTimeStamp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp"));
    struct Params_OnRep_ReplayLastTransformUpdateTimeStamp {
    }; // Size: 0x0
    Params_OnRep_ReplayLastTransformUpdateTimeStamp params{};
    ProcessEvent(func, &params);
}
ACharacter* ACharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Character");
    return (ACharacter*)res;
}
void ACharacter::ServerMovePacked(FCharacterServerMovePackedBits& PackedBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMovePacked"));
    struct Params_ServerMovePacked {
        FCharacterServerMovePackedBits PackedBits; // 0x0
    }; // Size: 0x98
    Params_ServerMovePacked params{};
    params.PackedBits = (FCharacterServerMovePackedBits)PackedBits;
    ProcessEvent(func, &params);
    PackedBits = params.PackedBits;
}
void ACharacter::UnCrouch(bool bClientSimulation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.UnCrouch"));
    struct Params_UnCrouch {
        bool bClientSimulation; // 0x0
    }; // Size: 0x1
    Params_UnCrouch params{};
    params.bClientSimulation = (bool)bClientSimulation;
    ProcessEvent(func, &params);
}
void ACharacter::ClientAckGoodMove(float Timestamp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientAckGoodMove"));
    struct Params_ClientAckGoodMove {
        float Timestamp; // 0x0
    }; // Size: 0x4
    Params_ClientAckGoodMove params{};
    params.Timestamp = (float)Timestamp;
    ProcessEvent(func, &params);
}
bool ACharacter::IsJumpProvidingForce() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.IsJumpProvidingForce"));
    struct Params_IsJumpProvidingForce {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsJumpProvidingForce params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACharacter::StopAnimMontage(UAnimMontage* AnimMontage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.StopAnimMontage"));
    struct Params_StopAnimMontage {
        UAnimMontage* AnimMontage; // 0x0
    }; // Size: 0x8
    Params_StopAnimMontage params{};
    params.AnimMontage = (UAnimMontage*)AnimMontage;
    ProcessEvent(func, &params);
}
void ACharacter::RootMotionDebugClientPrintOnScreen(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.RootMotionDebugClientPrintOnScreen"));
    struct Params_RootMotionDebugClientPrintOnScreen {
        FString inString; // 0x0
    }; // Size: 0x10
    Params_RootMotionDebugClientPrintOnScreen params{};
    params.inString = (FString)inString;
    ProcessEvent(func, &params);
}
void ACharacter::StopJumping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.StopJumping"));
    struct Params_StopJumping {
    }; // Size: 0x0
    Params_StopJumping params{};
    ProcessEvent(func, &params);
}
void ACharacter::ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint32_t View, uint8_t ClientMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMoveNoBase"));
    struct Params_ServerMoveNoBase {
        float Timestamp; // 0x0
        FVector_NetQuantize10 InAccel; // 0x4
        FVector_NetQuantize100 ClientLoc; // 0x10
        uint8_t CompressedMoveFlags; // 0x1c
        uint8_t ClientRoll; // 0x1d
        char pad_1e[0x2];
        uint32_t View; // 0x20
        uint8_t ClientMovementMode; // 0x24
    }; // Size: 0x25
    Params_ServerMoveNoBase params{};
    params.Timestamp = (float)Timestamp;
    params.InAccel = (FVector_NetQuantize10)InAccel;
    params.ClientLoc = (FVector_NetQuantize100)ClientLoc;
    params.CompressedMoveFlags = (uint8_t)CompressedMoveFlags;
    params.ClientRoll = (uint8_t)ClientRoll;
    params.View = (uint32_t)View;
    params.ClientMovementMode = (uint8_t)ClientMovementMode;
    ProcessEvent(func, &params);
}
void ACharacter::ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8_t OldMoveFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMoveOld"));
    struct Params_ServerMoveOld {
        float OldTimeStamp; // 0x0
        FVector_NetQuantize10 OldAccel; // 0x4
        uint8_t OldMoveFlags; // 0x10
    }; // Size: 0x11
    Params_ServerMoveOld params{};
    params.OldTimeStamp = (float)OldTimeStamp;
    params.OldAccel = (FVector_NetQuantize10)OldAccel;
    params.OldMoveFlags = (uint8_t)OldMoveFlags;
    ProcessEvent(func, &params);
}
void ACharacter::ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, uint8_t ClientMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMoveDualNoBase"));
    struct Params_ServerMoveDualNoBase {
        float TimeStamp0; // 0x0
        FVector_NetQuantize10 InAccel0; // 0x4
        uint8_t PendingFlags; // 0x10
        char pad_11[0x3];
        uint32_t View0; // 0x14
        float Timestamp; // 0x18
        FVector_NetQuantize10 InAccel; // 0x1c
        FVector_NetQuantize100 ClientLoc; // 0x28
        uint8_t NewFlags; // 0x34
        uint8_t ClientRoll; // 0x35
        char pad_36[0x2];
        uint32_t View; // 0x38
        uint8_t ClientMovementMode; // 0x3c
    }; // Size: 0x3d
    Params_ServerMoveDualNoBase params{};
    params.TimeStamp0 = (float)TimeStamp0;
    params.InAccel0 = (FVector_NetQuantize10)InAccel0;
    params.PendingFlags = (uint8_t)PendingFlags;
    params.View0 = (uint32_t)View0;
    params.Timestamp = (float)Timestamp;
    params.InAccel = (FVector_NetQuantize10)InAccel;
    params.ClientLoc = (FVector_NetQuantize100)ClientLoc;
    params.NewFlags = (uint8_t)NewFlags;
    params.ClientRoll = (uint8_t)ClientRoll;
    params.View = (uint32_t)View;
    params.ClientMovementMode = (uint8_t)ClientMovementMode;
    ProcessEvent(func, &params);
}
void ACharacter::ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMoveDualHybridRootMotion"));
    struct Params_ServerMoveDualHybridRootMotion {
        float TimeStamp0; // 0x0
        FVector_NetQuantize10 InAccel0; // 0x4
        uint8_t PendingFlags; // 0x10
        char pad_11[0x3];
        uint32_t View0; // 0x14
        float Timestamp; // 0x18
        FVector_NetQuantize10 InAccel; // 0x1c
        FVector_NetQuantize100 ClientLoc; // 0x28
        uint8_t NewFlags; // 0x34
        uint8_t ClientRoll; // 0x35
        char pad_36[0x2];
        uint32_t View; // 0x38
        char pad_3c[0x4];
        UPrimitiveComponent* ClientMovementBase; // 0x40
        FName ClientBaseBoneName; // 0x48
        uint8_t ClientMovementMode; // 0x50
    }; // Size: 0x51
    Params_ServerMoveDualHybridRootMotion params{};
    params.TimeStamp0 = (float)TimeStamp0;
    params.InAccel0 = (FVector_NetQuantize10)InAccel0;
    params.PendingFlags = (uint8_t)PendingFlags;
    params.View0 = (uint32_t)View0;
    params.Timestamp = (float)Timestamp;
    params.InAccel = (FVector_NetQuantize10)InAccel;
    params.ClientLoc = (FVector_NetQuantize100)ClientLoc;
    params.NewFlags = (uint8_t)NewFlags;
    params.ClientRoll = (uint8_t)ClientRoll;
    params.View = (uint32_t)View;
    params.ClientMovementBase = (UPrimitiveComponent*)ClientMovementBase;
    params.ClientBaseBoneName = (FName)ClientBaseBoneName;
    params.ClientMovementMode = (uint8_t)ClientMovementMode;
    ProcessEvent(func, &params);
}
void ACharacter::ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8_t PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t NewFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMoveDual"));
    struct Params_ServerMoveDual {
        float TimeStamp0; // 0x0
        FVector_NetQuantize10 InAccel0; // 0x4
        uint8_t PendingFlags; // 0x10
        char pad_11[0x3];
        uint32_t View0; // 0x14
        float Timestamp; // 0x18
        FVector_NetQuantize10 InAccel; // 0x1c
        FVector_NetQuantize100 ClientLoc; // 0x28
        uint8_t NewFlags; // 0x34
        uint8_t ClientRoll; // 0x35
        char pad_36[0x2];
        uint32_t View; // 0x38
        char pad_3c[0x4];
        UPrimitiveComponent* ClientMovementBase; // 0x40
        FName ClientBaseBoneName; // 0x48
        uint8_t ClientMovementMode; // 0x50
    }; // Size: 0x51
    Params_ServerMoveDual params{};
    params.TimeStamp0 = (float)TimeStamp0;
    params.InAccel0 = (FVector_NetQuantize10)InAccel0;
    params.PendingFlags = (uint8_t)PendingFlags;
    params.View0 = (uint32_t)View0;
    params.Timestamp = (float)Timestamp;
    params.InAccel = (FVector_NetQuantize10)InAccel;
    params.ClientLoc = (FVector_NetQuantize100)ClientLoc;
    params.NewFlags = (uint8_t)NewFlags;
    params.ClientRoll = (uint8_t)ClientRoll;
    params.View = (uint32_t)View;
    params.ClientMovementBase = (UPrimitiveComponent*)ClientMovementBase;
    params.ClientBaseBoneName = (FName)ClientBaseBoneName;
    params.ClientMovementMode = (uint8_t)ClientMovementMode;
    ProcessEvent(func, &params);
}
void ACharacter::ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8_t CompressedMoveFlags, uint8_t ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8_t ClientMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ServerMove"));
    struct Params_ServerMove {
        float Timestamp; // 0x0
        FVector_NetQuantize10 InAccel; // 0x4
        FVector_NetQuantize100 ClientLoc; // 0x10
        uint8_t CompressedMoveFlags; // 0x1c
        uint8_t ClientRoll; // 0x1d
        char pad_1e[0x2];
        uint32_t View; // 0x20
        char pad_24[0x4];
        UPrimitiveComponent* ClientMovementBase; // 0x28
        FName ClientBaseBoneName; // 0x30
        uint8_t ClientMovementMode; // 0x38
    }; // Size: 0x39
    Params_ServerMove params{};
    params.Timestamp = (float)Timestamp;
    params.InAccel = (FVector_NetQuantize10)InAccel;
    params.ClientLoc = (FVector_NetQuantize100)ClientLoc;
    params.CompressedMoveFlags = (uint8_t)CompressedMoveFlags;
    params.ClientRoll = (uint8_t)ClientRoll;
    params.View = (uint32_t)View;
    params.ClientMovementBase = (UPrimitiveComponent*)ClientMovementBase;
    params.ClientBaseBoneName = (FName)ClientBaseBoneName;
    params.ClientMovementMode = (uint8_t)ClientMovementMode;
    ProcessEvent(func, &params);
}
float ACharacter::PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.PlayAnimMontage"));
    struct Params_PlayAnimMontage {
        UAnimMontage* AnimMontage; // 0x0
        float InPlayRate; // 0x8
        FName StartSectionName; // 0xc
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_PlayAnimMontage params{};
    params.AnimMontage = (UAnimMontage*)AnimMontage;
    params.InPlayRate = (float)InPlayRate;
    params.StartSectionName = (FName)StartSectionName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ACharacter::ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientAdjustRootMotionSourcePosition"));
    struct Params_ClientAdjustRootMotionSourcePosition {
        float Timestamp; // 0x0
        char pad_4[0x4];
        FRootMotionSourceGroup ServerRootMotion; // 0x8
        bool bHasAnimRootMotion; // 0x40
        char pad_41[0x3];
        float ServerMontageTrackPosition; // 0x44
        FVector ServerLoc; // 0x48
        FVector_NetQuantizeNormal ServerRotation; // 0x54
        float ServerVelZ; // 0x60
        char pad_64[0x4];
        UPrimitiveComponent* ServerBase; // 0x68
        FName ServerBoneName; // 0x70
        bool bHasBase; // 0x78
        bool bBaseRelativePosition; // 0x79
        uint8_t ServerMovementMode; // 0x7a
    }; // Size: 0x7b
    Params_ClientAdjustRootMotionSourcePosition params{};
    params.Timestamp = (float)Timestamp;
    params.ServerRootMotion = (FRootMotionSourceGroup)ServerRootMotion;
    params.bHasAnimRootMotion = (bool)bHasAnimRootMotion;
    params.ServerMontageTrackPosition = (float)ServerMontageTrackPosition;
    params.ServerLoc = (FVector)ServerLoc;
    params.ServerRotation = (FVector_NetQuantizeNormal)ServerRotation;
    params.ServerVelZ = (float)ServerVelZ;
    params.ServerBase = (UPrimitiveComponent*)ServerBase;
    params.ServerBoneName = (FName)ServerBoneName;
    params.bHasBase = (bool)bHasBase;
    params.bBaseRelativePosition = (bool)bBaseRelativePosition;
    params.ServerMovementMode = (uint8_t)ServerMovementMode;
    ProcessEvent(func, &params);
}
void ACharacter::OnWalkingOffLedge(FVector& PreviousFloorImpactNormal, FVector& PreviousFloorContactNormal, FVector& PreviousLocation, float TimeDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnWalkingOffLedge"));
    struct Params_OnWalkingOffLedge {
        FVector PreviousFloorImpactNormal; // 0x0
        FVector PreviousFloorContactNormal; // 0xc
        FVector PreviousLocation; // 0x18
        float TimeDelta; // 0x24
    }; // Size: 0x28
    Params_OnWalkingOffLedge params{};
    params.PreviousFloorImpactNormal = (FVector)PreviousFloorImpactNormal;
    params.PreviousFloorContactNormal = (FVector)PreviousFloorContactNormal;
    params.PreviousLocation = (FVector)PreviousLocation;
    params.TimeDelta = (float)TimeDelta;
    ProcessEvent(func, &params);
    PreviousFloorImpactNormal = params.PreviousFloorImpactNormal;
    PreviousLocation = params.PreviousLocation;
    PreviousFloorContactNormal = params.PreviousFloorContactNormal;
}
void ACharacter::OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnLaunched"));
    struct Params_OnLaunched {
        FVector LaunchVelocity; // 0x0
        bool bXYOverride; // 0xc
        bool bZOverride; // 0xd
    }; // Size: 0xe
    Params_OnLaunched params{};
    params.LaunchVelocity = (FVector)LaunchVelocity;
    params.bXYOverride = (bool)bXYOverride;
    params.bZOverride = (bool)bZOverride;
    ProcessEvent(func, &params);
}
void ACharacter::OnRep_RootMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnRep_RootMotion"));
    struct Params_OnRep_RootMotion {
    }; // Size: 0x0
    Params_OnRep_RootMotion params{};
    ProcessEvent(func, &params);
}
void ACharacter::OnRep_ReplicatedBasedMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnRep_ReplicatedBasedMovement"));
    struct Params_OnRep_ReplicatedBasedMovement {
    }; // Size: 0x0
    Params_OnRep_ReplicatedBasedMovement params{};
    ProcessEvent(func, &params);
}
bool ACharacter::HasAnyRootMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.HasAnyRootMotion"));
    struct Params_HasAnyRootMotion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasAnyRootMotion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACharacter::OnRep_IsCrouched() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnRep_IsCrouched"));
    struct Params_OnRep_IsCrouched {
    }; // Size: 0x0
    Params_OnRep_IsCrouched params{};
    ProcessEvent(func, &params);
}
void ACharacter::ClientCheatGhost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientCheatGhost"));
    struct Params_ClientCheatGhost {
    }; // Size: 0x0
    Params_ClientCheatGhost params{};
    ProcessEvent(func, &params);
}
void ACharacter::OnLanded(FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnLanded"));
    struct Params_OnLanded {
        FHitResult Hit; // 0x0
    }; // Size: 0x88
    Params_OnLanded params{};
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ACharacter::OnJumped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.OnJumped"));
    struct Params_OnJumped {
    }; // Size: 0x0
    Params_OnJumped params{};
    ProcessEvent(func, &params);
}
void ACharacter::LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.LaunchCharacter"));
    struct Params_LaunchCharacter {
        FVector LaunchVelocity; // 0x0
        bool bXYOverride; // 0xc
        bool bZOverride; // 0xd
    }; // Size: 0xe
    Params_LaunchCharacter params{};
    params.LaunchVelocity = (FVector)LaunchVelocity;
    params.bXYOverride = (bool)bXYOverride;
    params.bZOverride = (bool)bZOverride;
    ProcessEvent(func, &params);
}
void ACharacter::K2_UpdateCustomMovement(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.K2_UpdateCustomMovement"));
    struct Params_K2_UpdateCustomMovement {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_K2_UpdateCustomMovement params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void ACharacter::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.K2_OnStartCrouch"));
    struct Params_K2_OnStartCrouch {
        float HalfHeightAdjust; // 0x0
        float ScaledHalfHeightAdjust; // 0x4
    }; // Size: 0x8
    Params_K2_OnStartCrouch params{};
    params.HalfHeightAdjust = (float)HalfHeightAdjust;
    params.ScaledHalfHeightAdjust = (float)ScaledHalfHeightAdjust;
    ProcessEvent(func, &params);
}
bool ACharacter::IsPlayingRootMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.IsPlayingRootMotion"));
    struct Params_IsPlayingRootMotion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingRootMotion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACharacter::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8_t PrevCustomMode, uint8_t NewCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.K2_OnMovementModeChanged"));
    struct Params_K2_OnMovementModeChanged {
        EMovementMode PrevMovementMode; // 0x0
        EMovementMode NewMovementMode; // 0x1
        uint8_t PrevCustomMode; // 0x2
        uint8_t NewCustomMode; // 0x3
    }; // Size: 0x4
    Params_K2_OnMovementModeChanged params{};
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.NewMovementMode = (EMovementMode)NewMovementMode;
    params.PrevCustomMode = (uint8_t)PrevCustomMode;
    params.NewCustomMode = (uint8_t)NewCustomMode;
    ProcessEvent(func, &params);
}
void ACharacter::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.K2_OnEndCrouch"));
    struct Params_K2_OnEndCrouch {
        float HalfHeightAdjust; // 0x0
        float ScaledHalfHeightAdjust; // 0x4
    }; // Size: 0x8
    Params_K2_OnEndCrouch params{};
    params.HalfHeightAdjust = (float)HalfHeightAdjust;
    params.ScaledHalfHeightAdjust = (float)ScaledHalfHeightAdjust;
    ProcessEvent(func, &params);
}
void ACharacter::Jump() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.Jump"));
    struct Params_Jump {
    }; // Size: 0x0
    Params_Jump params{};
    ProcessEvent(func, &params);
}
void ACharacter::ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientAdjustPosition"));
    struct Params_ClientAdjustPosition {
        float Timestamp; // 0x0
        FVector NewLoc; // 0x4
        FVector NewVel; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* NewBase; // 0x20
        FName NewBaseBoneName; // 0x28
        bool bHasBase; // 0x30
        bool bBaseRelativePosition; // 0x31
        uint8_t ServerMovementMode; // 0x32
    }; // Size: 0x33
    Params_ClientAdjustPosition params{};
    params.Timestamp = (float)Timestamp;
    params.NewLoc = (FVector)NewLoc;
    params.NewVel = (FVector)NewVel;
    params.NewBase = (UPrimitiveComponent*)NewBase;
    params.NewBaseBoneName = (FName)NewBaseBoneName;
    params.bHasBase = (bool)bHasBase;
    params.bBaseRelativePosition = (bool)bBaseRelativePosition;
    params.ServerMovementMode = (uint8_t)ServerMovementMode;
    ProcessEvent(func, &params);
}
bool ACharacter::IsPlayingNetworkedRootMotionMontage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.IsPlayingNetworkedRootMotionMontage"));
    struct Params_IsPlayingNetworkedRootMotionMontage {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingNetworkedRootMotionMontage params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAnimMontage* ACharacter::GetCurrentMontage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.GetCurrentMontage"));
    struct Params_GetCurrentMontage {
        UAnimMontage* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentMontage params{};
    ProcessEvent(func, &params);
    return (UAnimMontage*)params.ReturnValue;
}
FVector ACharacter::GetBaseTranslationOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.GetBaseTranslationOffset"));
    struct Params_GetBaseTranslationOffset {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBaseTranslationOffset params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FRotator ACharacter::GetBaseRotationOffsetRotator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.GetBaseRotationOffsetRotator"));
    struct Params_GetBaseRotationOffsetRotator {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBaseRotationOffsetRotator params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void ACharacter::ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientAdjustRootMotionPosition"));
    struct Params_ClientAdjustRootMotionPosition {
        float Timestamp; // 0x0
        float ServerMontageTrackPosition; // 0x4
        FVector ServerLoc; // 0x8
        FVector_NetQuantizeNormal ServerRotation; // 0x14
        float ServerVelZ; // 0x20
        char pad_24[0x4];
        UPrimitiveComponent* ServerBase; // 0x28
        FName ServerBoneName; // 0x30
        bool bHasBase; // 0x38
        bool bBaseRelativePosition; // 0x39
        uint8_t ServerMovementMode; // 0x3a
    }; // Size: 0x3b
    Params_ClientAdjustRootMotionPosition params{};
    params.Timestamp = (float)Timestamp;
    params.ServerMontageTrackPosition = (float)ServerMontageTrackPosition;
    params.ServerLoc = (FVector)ServerLoc;
    params.ServerRotation = (FVector_NetQuantizeNormal)ServerRotation;
    params.ServerVelZ = (float)ServerVelZ;
    params.ServerBase = (UPrimitiveComponent*)ServerBase;
    params.ServerBoneName = (FName)ServerBoneName;
    params.bHasBase = (bool)bHasBase;
    params.bBaseRelativePosition = (bool)bBaseRelativePosition;
    params.ServerMovementMode = (uint8_t)ServerMovementMode;
    ProcessEvent(func, &params);
}
float ACharacter::GetAnimRootMotionTranslationScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.GetAnimRootMotionTranslationScale"));
    struct Params_GetAnimRootMotionTranslationScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAnimRootMotionTranslationScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ACharacter::Crouch(bool bClientSimulation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.Crouch"));
    struct Params_Crouch {
        bool bClientSimulation; // 0x0
    }; // Size: 0x1
    Params_Crouch params{};
    params.bClientSimulation = (bool)bClientSimulation;
    ProcessEvent(func, &params);
}
void ACharacter::ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8_t ServerMovementMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientVeryShortAdjustPosition"));
    struct Params_ClientVeryShortAdjustPosition {
        float Timestamp; // 0x0
        FVector NewLoc; // 0x4
        UPrimitiveComponent* NewBase; // 0x10
        FName NewBaseBoneName; // 0x18
        bool bHasBase; // 0x20
        bool bBaseRelativePosition; // 0x21
        uint8_t ServerMovementMode; // 0x22
    }; // Size: 0x23
    Params_ClientVeryShortAdjustPosition params{};
    params.Timestamp = (float)Timestamp;
    params.NewLoc = (FVector)NewLoc;
    params.NewBase = (UPrimitiveComponent*)NewBase;
    params.NewBaseBoneName = (FName)NewBaseBoneName;
    params.bHasBase = (bool)bHasBase;
    params.bBaseRelativePosition = (bool)bBaseRelativePosition;
    params.ServerMovementMode = (uint8_t)ServerMovementMode;
    ProcessEvent(func, &params);
}
bool ACharacter::CanJumpInternal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.CanJumpInternal"));
    struct Params_CanJumpInternal {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanJumpInternal params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACharacter::ClientMoveResponsePacked(FCharacterMoveResponsePackedBits& PackedBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientMoveResponsePacked"));
    struct Params_ClientMoveResponsePacked {
        FCharacterMoveResponsePackedBits PackedBits; // 0x0
    }; // Size: 0x98
    Params_ClientMoveResponsePacked params{};
    params.PackedBits = (FCharacterMoveResponsePackedBits)PackedBits;
    ProcessEvent(func, &params);
    PackedBits = params.PackedBits;
}
void ACharacter::ClientCheatWalk() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientCheatWalk"));
    struct Params_ClientCheatWalk {
    }; // Size: 0x0
    Params_ClientCheatWalk params{};
    ProcessEvent(func, &params);
}
void ACharacter::ClientCheatFly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.ClientCheatFly"));
    struct Params_ClientCheatFly {
    }; // Size: 0x0
    Params_ClientCheatFly params{};
    ProcessEvent(func, &params);
}
bool ACharacter::CanJump() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.CanJump"));
    struct Params_CanJump {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanJump params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACharacter::CanCrouch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.CanCrouch"));
    struct Params_CanCrouch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanCrouch params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACharacter::CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Character.CacheInitialMeshOffset"));
    struct Params_CacheInitialMeshOffset {
        FVector MeshRelativeLocation; // 0x0
        FRotator MeshRelativeRotation; // 0xc
    }; // Size: 0x18
    Params_CacheInitialMeshOffset params{};
    params.MeshRelativeLocation = (FVector)MeshRelativeLocation;
    params.MeshRelativeRotation = (FRotator)MeshRelativeRotation;
    ProcessEvent(func, &params);
}
