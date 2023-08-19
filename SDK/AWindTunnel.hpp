#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EDrawDebugTrace\Type.hpp"
class UStaticMeshComponent;
class UArrowComponent;
#pragma pack(push, 1)
class AWindTunnel : public AActor {
public:
    float WindStrength_Objects; // 0x248
    float WindStrength_Pawns; // 0x24c
    float WindDist; // 0x250
    float DoorOpenAngle; // 0x254
    float DoorOpenTime; // 0x258
    float DoorCloseTime; // 0x25c
    float DoorOpenSpeed; // 0x260
    float DoorCloseSpeed; // 0x264
    float StartDelay; // 0x268
    EDrawDebugTrace::Type TunnelTraceVisibility; // 0x26c
    EDrawDebugTrace::Type ObjectTraceVisibility; // 0x26d
    bool bDoorPauseTimeOverride; // 0x26e
    char pad_26f[0x1];
    float DoorPauseTime; // 0x270
    char pad_274[0x4];
    UStaticMeshComponent* RightDoor; // 0x278
    UStaticMeshComponent* LeftDoor; // 0x280
    UArrowComponent* Arrow; // 0x288
    float RaytraceRadius; // 0x290
    float DoorAngle; // 0x294
    char pad_298[0x68];
    static AWindTunnel* StaticClass();
    void StopDoor();
    void OpenDoor();
    void CloseDoor();
    void ApplyWind();
}; // Size: 0x300
#pragma pack(pop)
