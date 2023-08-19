#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UClass;
class AGameModeBase;
class APlayerState;
class AController;
#pragma pack(push, 1)
class AGameStateBase : public AInfo {
public:
    UClass* GameModeClass; // 0x248
    AGameModeBase* AuthorityGameMode; // 0x250
    UClass* SpectatorClass; // 0x258
    TArray<APlayerState*> PlayerArray; // 0x260
    bool bReplicatedHasBegunPlay; // 0x270
    char pad_271[0x3];
    float ReplicatedWorldTimeSeconds; // 0x274
    float ServerWorldTimeSecondsDelta; // 0x278
    float ServerWorldTimeSecondsUpdateFrequency; // 0x27c
    char pad_280[0x18];
    static AGameStateBase* StaticClass();
    void OnRep_SpectatorClass();
    void OnRep_ReplicatedWorldTimeSeconds();
    void OnRep_ReplicatedHasBegunPlay();
    void OnRep_GameModeClass();
    bool HasMatchStarted();
    bool HasMatchEnded();
    bool HasBegunPlay();
    float GetServerWorldTimeSeconds();
    float GetPlayerStartTime(AController* Controller);
    float GetPlayerRespawnDelay(AController* Controller);
}; // Size: 0x298
#pragma pack(pop)
