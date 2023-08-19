#pragma once
#include <cstdint>
#include "AGameModeBase.hpp"
class UClass;
class APlayerState;
#pragma pack(push, 1)
class AGameMode : public AGameModeBase {
public:
    FName MatchState; // 0x2e8
    uint8_t bDelayedStart : 1; // 0x2f0
    uint8_t pad_bitfield_2f0_1 : 7;
    char pad_2f1[0x3];
    int32_t NumSpectators; // 0x2f4
    int32_t NumPlayers; // 0x2f8
    int32_t NumBots; // 0x2fc
    float MinRespawnDelay; // 0x300
    int32_t NumTravellingPlayers; // 0x304
    UClass* EngineMessageClass; // 0x308
    TArray<APlayerState*> InactivePlayerArray; // 0x310
    float InactivePlayerStateLifeSpan; // 0x320
    int32_t MaxInactivePlayers; // 0x324
    bool bHandleDedicatedServerReplays; // 0x328
    char pad_329[0x7];
    static AGameMode* StaticClass();
    void StartMatch();
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    void Say(FString Msg);
    void RestartGame();
    bool ReadyToStartMatch();
    bool ReadyToEndMatch();
    void K2_OnSetMatchState(FName NewState);
    bool IsMatchInProgress();
    FName GetMatchState();
    void EndMatch();
    void AbortMatch();
}; // Size: 0x330
#pragma pack(pop)
