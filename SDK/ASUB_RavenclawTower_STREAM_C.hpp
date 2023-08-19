#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ANoMountZoneVolume;
class ANoDismountZoneVolume;
class UUIManager;
#pragma pack(push, 1)
class ASUB_RavenclawTower_STREAM_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    ANoMountZoneVolume* NoMountZoneVolume12_RavenclawTower_ExecuteUbergraph_SUB_RavenclawTower_STREAM_RefProperty; // 0x258
    ANoDismountZoneVolume* NoDismountZoneVolume_RavenclawTower2_ExecuteUbergraph_SUB_RavenclawTower_STREAM_RefProperty; // 0x260
    static ASUB_RavenclawTower_STREAM_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SUB_RavenclawTower_STREAM(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
}; // Size: 0x268
#pragma pack(pop)
