#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_DummyActorInterface_C : public UInterface {
public:
    static UUI_BPI_DummyActorInterface_C* StaticClass();
    void I_EquipDummyGear(FString GearID);
    void I_SyncDummy(FName CharID);
    void I_SetDummyPreset(EAvatarPresetType PresetType, FName PresetName);
    void I_SetDummyFullbody(FName PresetName);
}; // Size: 0x28
#pragma pack(pop)
