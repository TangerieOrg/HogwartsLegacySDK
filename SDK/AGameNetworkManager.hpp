#pragma once
#include <cstdint>
#include "AInfo.hpp"
#pragma pack(push, 1)
class AGameNetworkManager : public AInfo {
public:
    float BadPacketLossThreshold; // 0x248
    float SeverePacketLossThreshold; // 0x24c
    int32_t BadPingThreshold; // 0x250
    int32_t SeverePingThreshold; // 0x254
    int32_t AdjustedNetSpeed; // 0x258
    float LastNetSpeedUpdateTime; // 0x25c
    int32_t TotalNetBandwidth; // 0x260
    int32_t MinDynamicBandwidth; // 0x264
    int32_t MaxDynamicBandwidth; // 0x268
    uint8_t bIsStandbyCheckingEnabled : 1; // 0x26c
    uint8_t bHasStandbyCheatTriggered : 1; // 0x26c
    uint8_t pad_bitfield_26c_2 : 6;
    char pad_26d[0x3];
    float StandbyRxCheatTime; // 0x270
    float StandbyTxCheatTime; // 0x274
    float PercentMissingForRxStandby; // 0x278
    float PercentMissingForTxStandby; // 0x27c
    float PercentForBadPing; // 0x280
    float JoinInProgressStandbyWaitTime; // 0x284
    float MoveRepSize; // 0x288
    float MAXPOSITIONERRORSQUARED; // 0x28c
    float MAXNEARZEROVELOCITYSQUARED; // 0x290
    float CLIENTADJUSTUPDATECOST; // 0x294
    float MAXCLIENTUPDATEINTERVAL; // 0x298
    float MaxClientForcedUpdateDuration; // 0x29c
    float ServerForcedUpdateHitchThreshold; // 0x2a0
    float ServerForcedUpdateHitchCooldown; // 0x2a4
    float MaxMoveDeltaTime; // 0x2a8
    float MaxClientSmoothingDeltaTime; // 0x2ac
    float ClientNetSendMoveDeltaTime; // 0x2b0
    float ClientNetSendMoveDeltaTimeThrottled; // 0x2b4
    float ClientNetSendMoveDeltaTimeStationary; // 0x2b8
    int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x2bc
    int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x2c0
    bool ClientAuthorativePosition; // 0x2c4
    char pad_2c5[0x3];
    float ClientErrorUpdateRateLimit; // 0x2c8
    float ClientNetCamUpdateDeltaTime; // 0x2cc
    float ClientNetCamUpdatePositionLimit; // 0x2d0
    bool bMovementTimeDiscrepancyDetection; // 0x2d4
    bool bMovementTimeDiscrepancyResolution; // 0x2d5
    char pad_2d6[0x2];
    float MovementTimeDiscrepancyMaxTimeMargin; // 0x2d8
    float MovementTimeDiscrepancyMinTimeMargin; // 0x2dc
    float MovementTimeDiscrepancyResolutionRate; // 0x2e0
    float MovementTimeDiscrepancyDriftAllowance; // 0x2e4
    bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2e8
    bool bUseDistanceBasedRelevancy; // 0x2e9
    char pad_2ea[0xe];
    static AGameNetworkManager* StaticClass();
}; // Size: 0x2f8
#pragma pack(pop)
