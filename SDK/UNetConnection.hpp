#pragma once
#include <cstdint>
#include "FUniqueNetIdRepl.hpp"
#include "UPlayer.hpp"
class UChildConnection;
class UNetDriver;
class UClass;
class UPackageMap;
class UChannel;
class AActor;
#pragma pack(push, 1)
class UNetConnection : public UPlayer {
public:
    TArray<UChildConnection*> Children; // 0x48
    UNetDriver* Driver; // 0x58
    UClass* PackageMapClass; // 0x60
    UPackageMap* PackageMap; // 0x68
    TArray<UChannel*> OpenChannels; // 0x70
    TArray<AActor*> SentTemporaries; // 0x80
    AActor* ViewTarget; // 0x90
    AActor* OwningActor; // 0x98
    int32_t MaxPacket; // 0xa0
    uint8_t InternalAck : 1; // 0xa4
    uint8_t pad_bitfield_a4_1 : 7;
    char pad_a5[0xbb];
    FUniqueNetIdRepl PlayerId; // 0x160
    char pad_188[0x48];
    double LastReceiveTime; // 0x1d0
    char pad_1d8[0x1338];
    TArray<UChannel*> ChannelsToTick; // 0x1510
    char pad_1520[0x688];
    static UNetConnection* StaticClass();
}; // Size: 0x1ba8
#pragma pack(pop)
