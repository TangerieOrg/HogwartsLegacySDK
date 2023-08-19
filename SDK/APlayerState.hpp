#pragma once
#include <cstdint>
#include "AInfo.hpp"
#include "FUniqueNetIdRepl.hpp"
class UClass;
class APawn;
#pragma pack(push, 1)
class APlayerState : public AInfo {
public:
    float Score; // 0x248
    int32_t PlayerId; // 0x24c
    uint8_t Ping; // 0x250
    char pad_251[0x1];
    uint8_t bShouldUpdateReplicatedPing : 1; // 0x252
    uint8_t bIsSpectator : 1; // 0x252
    uint8_t bOnlySpectator : 1; // 0x252
    uint8_t bIsABot : 1; // 0x252
    uint8_t pad_bitfield_252_4 : 1;
    uint8_t bIsInactive : 1; // 0x252
    uint8_t bFromPreviousLevel : 1; // 0x252
    uint8_t pad_bitfield_252_7 : 1;
    char pad_253[0x1];
    int32_t StartTime; // 0x254
    UClass* EngineMessageClass; // 0x258
    char pad_260[0x8];
    FString SavedNetworkAddress; // 0x268
    FUniqueNetIdRepl UniqueId; // 0x278
    char pad_2a0[0x8];
    APawn* PawnPrivate; // 0x2a8
    char pad_2b0[0x78];
    FString PlayerNamePrivate; // 0x328
    char pad_338[0x10];
    static APlayerState* StaticClass();
    void ReceiveOverrideWith(APlayerState* OldPlayerState);
    void ReceiveCopyProperties(APlayerState* NewPlayerState);
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_PlayerId();
    void OnRep_bIsInactive();
    bool IsOnlyASpectator();
    FString GetPlayerName();
}; // Size: 0x348
#pragma pack(pop)
