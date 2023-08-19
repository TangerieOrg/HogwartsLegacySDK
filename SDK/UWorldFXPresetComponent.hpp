#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FWorldFXAudioEventExtra.hpp"
#include "FWorldFXFull.hpp"
#include "UWorldFXComponentBase.hpp"
class UAkAudioEvent;
class UWorldFXRule;
class UWorldFXNiagaraSystemInitializer;
class UWorldFXCascadeInstanceParametersBase;
#pragma pack(push, 1)
class UWorldFXPresetComponent : public UWorldFXComponentBase {
public:
    char pad_240[0x8];
    UAkAudioEvent* SFXEventOverride; // 0x248
    bool bOverrideExtraEnabled; // 0x250
    char pad_251[0x7];
    FWorldFXAudioEventExtra OverrideExtra; // 0x258
    UWorldFXNiagaraSystemInitializer* NiagaraLocalInitializer; // 0x280
    UWorldFXCascadeInstanceParametersBase* CascadeLocalInstanceParameters; // 0x288
    UWorldFXRule* Rule; // 0x290
    FWorldFXFull WorldFX; // 0x298
    uint8_t bPresetSpawnAttached : 1; // 0x3b8
    uint8_t bSpawnAttached : 1; // 0x3b8
    uint8_t bOverride_SpawnAttached : 1; // 0x3b8
    uint8_t pad_bitfield_3b8_3 : 5;
    char pad_3b9[0x7];
    static UWorldFXPresetComponent* StaticClass();
    void SetSpawnAttachedOverride(bool bNewSpawnAttached);
    void ResetCascadeParameters();
    void RefreshCascadeParameters();
    void GetSpawnAttached(bool& bIsSpawnAttached);
    void ClearSpawnAttachedOverride();
}; // Size: 0x3c0
#pragma pack(pop)
