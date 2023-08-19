#pragma once
#include <cstdint>
#include "ENetworkFailure\Type.hpp"
#include "ETravelFailure\Type.hpp"
#include "UObject.hpp"
class ULocalPlayer;
class UOnlineSession;
#pragma pack(push, 1)
class UGameInstance : public UObject {
public:
    char pad_28[0x10];
    TArray<ULocalPlayer*> LocalPlayers; // 0x38
    UOnlineSession* OnlineSession; // 0x48
    TArray<UObject*> ReferencedObjects; // 0x50
    char pad_60[0x148];
    static UGameInstance* StaticClass();
    void ReceiveShutdown();
    void ReceiveInit();
    void HandleTravelError(ETravelFailure::Type FailureType);
    void HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer);
    void DebugRemovePlayer(int32_t ControllerId);
    void DebugCreatePlayer(int32_t ControllerId);
}; // Size: 0x1a8
#pragma pack(pop)
