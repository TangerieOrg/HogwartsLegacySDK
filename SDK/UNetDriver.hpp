#pragma once
#include <cstdint>
#include "FChannelDefinition.hpp"
#include "UObject.hpp"
class UNetConnection;
class UWorld;
class UPackage;
class UClass;
class UChannel;
class UReplicationDriver;
#pragma pack(push, 1)
class UNetDriver : public UObject {
public:
    char pad_28[0x8];
    FString NetConnectionClassName; // 0x30
    FString ReplicationDriverClassName; // 0x40
    int32_t MaxDownloadSize; // 0x50
    uint8_t bClampListenServerTickRate : 1; // 0x54
    uint8_t pad_bitfield_54_1 : 7;
    char pad_55[0x3];
    int32_t NetServerMaxTickRate; // 0x58
    int32_t MaxNetTickRate; // 0x5c
    int32_t MaxInternetClientRate; // 0x60
    int32_t MaxClientRate; // 0x64
    float ServerTravelPause; // 0x68
    float SpawnPrioritySeconds; // 0x6c
    float RelevantTimeout; // 0x70
    float KeepAliveTime; // 0x74
    float InitialConnectTimeout; // 0x78
    float ConnectionTimeout; // 0x7c
    float TimeoutMultiplierForUnoptimizedBuilds; // 0x80
    bool bNoTimeouts; // 0x84
    bool bNeverApplyNetworkEmulationSettings; // 0x85
    char pad_86[0x2];
    UNetConnection* ServerConnection; // 0x88
    TArray<UNetConnection*> ClientConnections; // 0x90
    char pad_a0[0x60];
    int32_t RecentlyDisconnectedTrackingTime; // 0x100
    char pad_104[0x3c];
    UWorld* World; // 0x140
    UPackage* WorldPackage; // 0x148
    char pad_150[0x20];
    UClass* NetConnectionClass; // 0x170
    UClass* ReplicationDriverClass; // 0x178
    char pad_180[0x10];
    FName NetDriverName; // 0x190
    TArray<FChannelDefinition> ChannelDefinitions; // 0x198
    char pad_1a8[0x50];
    TArray<UChannel*> ActorChannelPool; // 0x1f8
    char pad_208[0x8];
    float Time; // 0x210
    char pad_214[0x4ec];
    UReplicationDriver* ReplicationDriver; // 0x700
    char pad_708[0x58];
    static UNetDriver* StaticClass();
}; // Size: 0x760
#pragma pack(pop)
