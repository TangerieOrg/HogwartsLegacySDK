#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLumosScalabilitySettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UCurveFloat;
class UMaterialSwapMeshStatesFireAndForgetComponent;
class ULumosEmberTrick;
class AAmbulatory_Character;
#pragma pack(push, 1)
class ALumosEmberActor : public AActor {
public:
    FLumosScalabilitySettings CurrentScalabilitySettings; // 0x248
    UCurveFloat* ArcHeightMultiplierCurve; // 0x290
    float DistanceInFrontOfPlayer; // 0x298
    float HeightAbovePlayer; // 0x29c
    float EmberSpeedMultiplierOfDistance; // 0x2a0
    float BreadcrumbHeightModSpeed; // 0x2a4
    float EmberLifeTime; // 0x2a8
    FName FollowBone; // 0x2ac
    float BreadcrumbTrailSegmentLength; // 0x2b4
    int32_t MaxBreadcrumbs; // 0x2b8
    bool bDebug; // 0x2bc
    char pad_2bd[0x3];
    TArray<ULumosEmberTrick*> PossibleEmberTricks; // 0x2c0
    bool bDisconnectedFromWand; // 0x2d0
    char pad_2d1[0x7];
    UCurveFloat* FlickerCurve; // 0x2d8
    int32_t FlickerCurveLoops; // 0x2e0
    char pad_2e4[0x3c];
    ULumosEmberTrick* EmberTrick; // 0x320
    char pad_328[0x28];
    static ALumosEmberActor* StaticClass();
    void UpdateLumosFlicker(float DeltaTime, bool bIsFading);
    void RefreshCurrentScalabilitySettings();
    UMaterialSwapMeshStatesFireAndForgetComponent* GetScalabilityMeshStatesComponent();
    void GetLumosFlicker(float& IntensityMultiplier);
    void ExternallyStartLumosFlickerForActor(AActor* OnlyForOwningActor, bool& bMatchedOwner);
    void ExternallyStartLumosFlicker();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void CacheLerpVolumeLumosVolumetricScatteringIntensity(float Value, bool bSuccess);
    void CacheLerpVolumeLumosEVAdjust(float Value, bool bSuccess);
}; // Size: 0x350
#pragma pack(pop)
