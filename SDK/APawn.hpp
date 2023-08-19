#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EAutoPossessAI.hpp"
#include "EAutoReceiveInput\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UClass;
class APlayerState;
class UPawnMovementComponent;
class AController;
#pragma pack(push, 1)
class APawn : public AActor {
public:
    char pad_248[0x8];
    uint8_t bUseControllerRotationPitch : 1; // 0x250
    uint8_t bUseControllerRotationYaw : 1; // 0x250
    uint8_t bUseControllerRotationRoll : 1; // 0x250
    uint8_t bStopMovementOnRestart : 1; // 0x250
    uint8_t bCanAffectNavigationGeneration : 1; // 0x250
    uint8_t pad_bitfield_250_5 : 3;
    char pad_251[0x3];
    float BaseEyeHeight; // 0x254
    EAutoReceiveInput::Type AutoPossessPlayer; // 0x258
    EAutoPossessAI AutoPossessAI; // 0x259
    uint8_t RemoteViewPitch; // 0x25a
    char pad_25b[0x5];
    UClass* AIControllerClass; // 0x260
    APlayerState* PlayerState; // 0x268
    char pad_270[0x8];
    AController* LastHitBy; // 0x278
    AController* Controller; // 0x280
    char pad_288[0x4];
    FVector ControlInputVector; // 0x28c
    FVector LastControlInputVector; // 0x298
    char pad_2a4[0x4];
    static APawn* StaticClass();
    void SpawnDefaultController();
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    void ReceiveUnpossessed(AController* OldController);
    void ReceivePossessed(AController* NewController);
    void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker);
    void OnRep_PlayerState();
    void OnRep_Controller();
    void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    FVector K2_GetMovementInputVector();
    bool IsPlayerControlled();
    bool IsPawnControlled();
    bool IsMoveInputIgnored();
    bool IsLocallyControlled();
    bool IsControlled();
    bool IsBotControlled();
    FVector GetPendingMovementInputVector();
    FVector GetNavAgentLocation();
    UPawnMovementComponent* GetMovementComponent();
    static AActor* GetMovementBaseActor(APawn* Pawn);
    FVector GetLastMovementInputVector();
    FRotator GetControlRotation();
    AController* GetController();
    FRotator GetBaseAimRotation();
    void DetachFromControllerPendingDestroy();
    FVector ConsumeMovementInputVector();
    void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    void AddControllerYawInput(float Val);
    void AddControllerRollInput(float Val);
    void AddControllerPitchInput(float Val);
}; // Size: 0x2a8
#pragma pack(pop)
