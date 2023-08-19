#pragma once
#include <cstdint>
#include "ESceneRigCategory.hpp"
#include "EStandardManagedPriority.hpp"
#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USceneRigGameOptionsAsset : public UDataAsset {
public:
    char pad_30[0x8];
    ESceneRigCategory ExperienceCategory; // 0x38
    bool bDisableAllIK; // 0x39
    bool bDisableCameraTransparency; // 0x3a
    bool bDisablePlayerControl; // 0x3b
    bool bPauseStreaming; // 0x3c
    bool bDisableInteriorExterior; // 0x3d
    bool bDisableCognitionHilighting; // 0x3e
    bool bDisableCharactersInSceneTargetableByAi; // 0x3f
    EStandardManagedPriority CharactersInSceneTargetableByAiPriority; // 0x40
    EStandardManagedPriority MuteMissionGossipPriority; // 0x41
    bool bMuteMissionGossip; // 0x42
    bool bUntetherSeatFillerFillRate; // 0x43
    bool bDisablePauseMenu; // 0x44
    bool bDisableCameraShake; // 0x45
    bool bHideNonCinematicElements; // 0x46
    bool bPauseComboTimeout; // 0x47
    bool bDisablePhotoMode; // 0x48
    bool bPauseNotifications; // 0x49
    char pad_4a[0x2];
    int32_t AudioPriorityCutoffOverride; // 0x4c
    int32_t AudioPrioritySuppressOverride; // 0x50
    int32_t PauseStreamingPlatforms; // 0x54
    int32_t PausePopulationManager; // 0x58
    int32_t PauseKnowledgeSavings; // 0x5c
    int32_t PauseInteractionSystem; // 0x60
    int32_t PauseWorldEvents; // 0x64
    int32_t PauseBeaconSystem; // 0x68
    int32_t PauseFootPlantEffects; // 0x6c
    int32_t PauseEnemyAIComponent; // 0x70
    FWeatherSurfaceCharacterFXStateReset PrecipitationState; // 0x74
    char pad_76[0x2];
    float PrecipitationPercentage; // 0x78
    float PrecipitationFadeTime; // 0x7c
    float MaxWindSpeed; // 0x80
    bool bSetPrecipitationState; // 0x84
    bool bSetMaxWindSpeed; // 0x85
    char pad_86[0x2];
    static USceneRigGameOptionsAsset* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
