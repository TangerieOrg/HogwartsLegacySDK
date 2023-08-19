#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "EStandardManagedPriority.hpp"
#include "FLumosLevelData.hpp"
#include "FVector.hpp"
class UClass;
class ULumosScalabilitySettingsAsset;
class UAkAudioEvent;
class AActor;
class ALumosEmberActor;
class UObject;
#pragma pack(push, 1)
class ALumosSpellTool : public AChannelingSpellTool {
public:
    TArray<FLumosLevelData> LevelDataArray; // 0x960
    UClass* LumosActorClass; // 0x970
    ULumosScalabilitySettingsAsset* LumosScalabilitySettings; // 0x978
    TArray<AActor*> IgnoreActorList; // 0x980
    float ObjectNearVolume; // 0x990
    float ObjectNearTime; // 0x994
    int32_t InterpTimeMS; // 0x998
    FVector CollisionQueryOffset; // 0x99c
    UAkAudioEvent* LumosMotionStartFX; // 0x9a8
    UAkAudioEvent* LumosMotionStopFX; // 0x9b0
    char pad_9b8[0x8];
    ALumosEmberActor* LumosActor; // 0x9c0
    ALumosEmberActor* LastLumosActor; // 0x9c8
    char pad_9d0[0x88];
    static ALumosSpellTool* StaticClass();
    void TurnOffLumos(UObject* i_caller);
    void StopLumos();
    static void SetLumosVolumetricScatteringIntensity(float Intensity);
    static void SetLumosLevelSettingsNew(float IntensityFactor, float Radius, float MinDistance);
    static void SetLumosLevelSettings(float Intensity, float Radius, float MinDistance);
    static void ResetLumosLevelSettings();
    void ObjectNearSound();
    bool IsLumosActive();
    static float GetLumosVolumetricScatteringIntensity();
    static float GetLumosLevelIntensityFactor();
    static int32_t GetLumosDebug();
    ALumosEmberActor* GetLumosActor();
    void DeactivateLumos(EStandardManagedPriority Priority, UObject* InInstigator);
    void ActivateLumos(EStandardManagedPriority Priority, UObject* InInstigator);
}; // Size: 0xa58
#pragma pack(pop)
