#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBTCustomAction.hpp"
class UToolEffectData;
class UAkAudioEvent;
class UToolRecord;
class UToolSetComponent;
#pragma pack(push, 1)
class ATool : public AActor {
public:
    bool bUseEffectsOnTool; // 0x248
    char pad_249[0x3];
    float EffectsTimeIn; // 0x24c
    float EffectsTimeOut; // 0x250
    char pad_254[0x4];
    TArray<UToolEffectData*> ActivateEffects; // 0x258
    TArray<UToolEffectData*> DeactivateEffects; // 0x268
    FName AttachSocket; // 0x278
    UAkAudioEvent* EquipSfx; // 0x280
    UAkAudioEvent* UnequipSfx; // 0x288
    FBTCustomAction ToolEquipAction; // 0x290
    char pad_29c[0x44];
    static ATool* StaticClass();
    AActor* GetUltimateOwner();
    UToolRecord* GetToolRecord();
    UToolSetComponent* GetOurToolSetComponent();
    void DeactivationFx();
    void DeactivationComplete();
    void BlueprintDeactivate();
    void BlueprintActivate();
    void ActivateFx();
}; // Size: 0x2e0
#pragma pack(pop)
