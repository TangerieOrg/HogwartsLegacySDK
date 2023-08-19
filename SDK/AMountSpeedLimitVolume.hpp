#pragma once
#include <cstdint>
#include "AMountZoneVolumeBase.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "EMountFlyingGait.hpp"
#include "EMountFlyingSpeedLimit.hpp"
#include "EMountGroundSpeedLimit.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class AMountSpeedLimitVolume : public AMountZoneVolumeBase {
public:
    bool bEnforceGroundGait; // 0x3b8
    EMountGroundSpeedLimit GroundGaitLimit; // 0x3b9
    ECreatureMovementSpeed EnforcedGroundGait; // 0x3ba
    bool bEnforceFlyingGait; // 0x3bb
    EMountFlyingSpeedLimit FlyingGaitLimit; // 0x3bc
    EMountFlyingGait EnforcedFlyingGait; // 0x3bd
    char pad_3be[0x2];
    static AMountSpeedLimitVolume* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x3c0
#pragma pack(pop)
