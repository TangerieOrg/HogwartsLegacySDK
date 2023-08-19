#pragma once
#include <cstdint>
#include "ESceneRigCategory.hpp"
#include "EStandardManagedPriority.hpp"
#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "USceneRigActionBase.hpp"
class USceneRigGameOptionsAsset;
#pragma pack(push, 1)
class USceneAction_GameOptions : public USceneRigActionBase {
public:
    char pad_88[0x8];
    USceneRigGameOptionsAsset* Settings; // 0x90
    ESceneRigCategory ExperienceCategory; // 0x98
    bool bDisableAllIK; // 0x99
    bool bDisableCameraTransparency; // 0x9a
    bool bDisablePlayerControl; // 0x9b
    bool bPauseStreaming; // 0x9c
    bool bDisableInteriorExterior; // 0x9d
    bool bDisableCognitionHilighting; // 0x9e
    bool bDisableCharactersInSceneTargetableByAi; // 0x9f
    EStandardManagedPriority CharactersInSceneTargetableByAiPriority; // 0xa0
    EStandardManagedPriority MuteMissionGossipPriority; // 0xa1
    bool bMuteMissionGossip; // 0xa2
    bool bUntetherSeatFillerFillRate; // 0xa3
    bool bDisablePauseMenu; // 0xa4
    bool bDisableCameraShake; // 0xa5
    bool bHideNonCinematicElements; // 0xa6
    bool bPauseComboTimeout; // 0xa7
    bool bDisablePhotoMode; // 0xa8
    bool bPauseNotifications; // 0xa9
    char pad_aa[0x2];
    int32_t AudioPriorityCutoffOverride; // 0xac
    int32_t AudioPrioritySuppressOverride; // 0xb0
    int32_t PauseStreamingPlatforms; // 0xb4
    int32_t PausePopulationManager; // 0xb8
    int32_t PauseKnowledgeSavings; // 0xbc
    int32_t PauseInteractionSystem; // 0xc0
    int32_t PauseWorldEvents; // 0xc4
    int32_t PauseBeaconSystem; // 0xc8
    int32_t PauseFootPlantEffects; // 0xcc
    int32_t PauseEnemyAIComponent; // 0xd0
    FWeatherSurfaceCharacterFXStateReset PrecipitationState; // 0xd4
    char pad_d6[0x2];
    float PrecipitationPercentage; // 0xd8
    float PrecipitationFadeTime; // 0xdc
    float MaxWindSpeed; // 0xe0
    bool bSetPrecipitationState; // 0xe4
    bool bSetMaxWindSpeed; // 0xe5
    char pad_e6[0x2];
    static USceneAction_GameOptions* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
