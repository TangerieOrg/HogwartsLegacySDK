#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UClass;
class AActor;
class AGameSession;
class AGameStateBase;
class AServerStatReplicator;
class AController;
class APawn;
struct FTransform;
class APlayerController;
class APlayerState;
#pragma pack(push, 1)
class AGameModeBase : public AInfo {
public:
    FString OptionsString; // 0x248
    UClass* GameSessionClass; // 0x258
    UClass* GameStateClass; // 0x260
    UClass* PlayerControllerClass; // 0x268
    UClass* PlayerStateClass; // 0x270
    UClass* HUDClass; // 0x278
    UClass* DefaultPawnClass; // 0x280
    UClass* SpectatorClass; // 0x288
    UClass* ReplaySpectatorPlayerControllerClass; // 0x290
    UClass* ServerStatReplicatorClass; // 0x298
    AGameSession* GameSession; // 0x2a0
    AGameStateBase* GameState; // 0x2a8
    AServerStatReplicator* ServerStatReplicator; // 0x2b0
    char pad_2b8[0x18];
    uint8_t bUseSeamlessTravel : 1; // 0x2d0
    uint8_t bStartPlayersAsSpectators : 1; // 0x2d0
    uint8_t bPauseable : 1; // 0x2d0
    uint8_t pad_bitfield_2d0_3 : 5;
    char pad_2d1[0x17];
    static AGameModeBase* StaticClass();
    void StartPlay();
    APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);
    APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform& SpawnTransform);
    bool ShouldReset(AActor* ActorToReset);
    void ReturnToMainMenuHost();
    void RestartPlayerAtTransform(AController* NewPlayer, FTransform& SpawnTransform);
    void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
    void RestartPlayer(AController* NewPlayer);
    void ResetLevel();
    bool PlayerCanRestart(APlayerController* Player);
    bool MustSpectate(APlayerController* NewPlayerController);
    void K2_PostLogin(APlayerController* NewPlayer);
    void K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);
    void K2_OnRestartPlayer(AController* NewPlayer);
    void K2_OnLogout(AController* ExitingController);
    void K2_OnChangeName(AController* Other, FString NewName, bool bNameChange);
    AActor* K2_FindPlayerStart(AController* Player, FString IncomingName);
    void InitStartSpot(AActor* StartSpot, AController* NewPlayer);
    void InitializeHUDForPlayer(APlayerController* NewPlayer);
    bool HasMatchStarted();
    bool HasMatchEnded();
    void HandleStartingNewPlayer(APlayerController* NewPlayer);
    int32_t GetNumSpectators();
    int32_t GetNumPlayers();
    UClass* GetDefaultPawnClassForController(AController* InController);
    AActor* FindPlayerStart(AController* Player, FString IncomingName);
    AActor* ChoosePlayerStart(AController* Player);
    void ChangeName(AController* Controller, FString NewName, bool bNameChange);
    bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget);
}; // Size: 0x2e8
#pragma pack(pop)
