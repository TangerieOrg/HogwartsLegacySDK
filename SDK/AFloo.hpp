#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
class UBTService_AvaAITree;
#pragma pack(push, 1)
class AFloo : public AActor {
public:
    char pad_248[0x10];
    FString Name; // 0x258
    FDbSingleColumnInfo RegionId; // 0x268
    FDbSingleColumnInfo ForcedDestination; // 0x2f0
    bool EnterCrouched; // 0x378
    char pad_379[0x3];
    float EnterDistance; // 0x37c
    FDbEditorButtonWidget AddButton; // 0x380
    static AFloo* StaticClass();
    void ShowAvatar(bool bTF);
    void SetFlooSourceAnim();
    void SetAvailable(bool availableIn);
    void ReturnToGameCamera();
    void PlayerSelectedFloo(AActor* ActorUsingFloo);
    void PlayerExitingFloo(AActor* ActorUsingFloo);
    void PlayerExitedFloo(AActor* ActorUsingFloo);
    void PlayerEnteringFloo(AActor* ActorUsingFloo);
    void PlayerEnteredFloo(AActor* ActorUsingFloo);
    void PlayerDroppedFlooPowder(AActor* ActorUsingFloo);
    void PlayerCanceledFloo(AActor* ActorUsingFloo);
    void OnSaveGameLoad();
    bool IsForcedDestination();
    void Interact(UBTService_AvaAITree* AvaService);
    void Handle_SetAvailable(bool availableIn);
    void Handle_PlayerSelectedFloo(AActor* ActorUsingFloo);
    void Handle_PlayerExitingFloo(AActor* ActorUsingFloo);
    void Handle_PlayerExitedFloo(AActor* ActorUsingFloo);
    void Handle_PlayerEnteringFloo(AActor* ActorUsingFloo);
    void Handle_PlayerEnteredFloo(AActor* ActorUsingFloo);
    void Handle_PlayerDroppedFlooPowder(AActor* ActorUsingFloo);
    void Handle_PlayerCanceledFloo(AActor* ActorUsingFloo);
    void Handle_ActivateExitCamera();
    void Handle_ActivateEnterCamera();
    FString GetFlooName();
    bool GetAvailable();
    void ActivateExitCamera();
    void ActivateEnterCamera();
}; // Size: 0x400
#pragma pack(pop)
