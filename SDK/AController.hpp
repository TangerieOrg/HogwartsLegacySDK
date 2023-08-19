#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class APlayerState;
class USceneComponent;
class APawn;
class ACharacter;
class UDamageType;
class APlayerController;
#pragma pack(push, 1)
class AController : public AActor {
public:
    char pad_248[0x8];
    APlayerState* PlayerState; // 0x250
    char pad_258[0x18];
    FName StateName; // 0x270
    APawn* Pawn; // 0x278
    char pad_280[0x8];
    ACharacter* Character; // 0x288
    USceneComponent* TransformComponent; // 0x290
    char pad_298[0x18];
    FRotator ControlRotation; // 0x2b0
    uint8_t bAttachToPawn : 1; // 0x2bc
    uint8_t pad_bitfield_2bc_1 : 7;
    char pad_2bd[0x3];
    static AController* StaticClass();
    void UnPossess();
    void StopMovement();
    void SetInitialLocationAndRotation(FVector& NewLocation, FRotator& NewRotation);
    void SetIgnoreMoveInput(bool bNewMoveInput);
    void SetIgnoreLookInput(bool bNewLookInput);
    void SetControlRotation(FRotator& NewRotation);
    void ResetIgnoreMoveInput();
    void ResetIgnoreLookInput();
    void ResetIgnoreInputFlags();
    void ReceiveUnPossess(APawn* UnpossessedPawn);
    void ReceivePossess(APawn* PossessedPawn);
    void ReceiveInstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    void Possess(APawn* InPawn);
    void OnRep_PlayerState();
    void OnRep_Pawn();
    bool LineOfSightTo(AActor* Other, FVector ViewPoint, bool bAlternateChecks);
    APawn* K2_GetPawn();
    bool IsPlayerController();
    bool IsMoveInputIgnored();
    bool IsLookInputIgnored();
    bool IsLocalPlayerController();
    bool IsLocalController();
    AActor* GetViewTarget();
    FRotator GetDesiredRotation();
    FRotator GetControlRotation();
    void ClientSetRotation(FRotator NewRotation, bool bResetCamera);
    void ClientSetLocation(FVector NewLocation, FRotator NewRotation);
    APlayerController* CastToPlayerController();
}; // Size: 0x2c0
#pragma pack(pop)
