#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FIntVector.hpp"
#pragma pack(push, 1)
class ALevelScriptActor : public AActor {
public:
    uint8_t bInputEnabled : 1; // 0x248
    uint8_t pad_bitfield_248_1 : 7;
    char pad_249[0x7];
    static ALevelScriptActor* StaticClass();
    void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    bool RemoteEvent(FName EventName);
    void LevelReset();
}; // Size: 0x250
#pragma pack(pop)
