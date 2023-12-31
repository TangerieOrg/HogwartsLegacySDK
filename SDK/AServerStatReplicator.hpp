#pragma once
#include <cstdint>
#include "AInfo.hpp"
#pragma pack(push, 1)
class AServerStatReplicator : public AInfo {
public:
    bool bUpdateStatNet; // 0x248
    bool bOverwriteClientStats; // 0x249
    char pad_24a[0x2];
    uint32_t Channels; // 0x24c
    uint32_t InRate; // 0x250
    uint32_t OutRate; // 0x254
    char pad_258[0x4];
    uint32_t MaxPacketOverhead; // 0x25c
    uint32_t InRateClientMax; // 0x260
    uint32_t InRateClientMin; // 0x264
    uint32_t InRateClientAvg; // 0x268
    uint32_t InPacketsClientMax; // 0x26c
    uint32_t InPacketsClientMin; // 0x270
    uint32_t InPacketsClientAvg; // 0x274
    uint32_t OutRateClientMax; // 0x278
    uint32_t OutRateClientMin; // 0x27c
    uint32_t OutRateClientAvg; // 0x280
    uint32_t OutPacketsClientMax; // 0x284
    uint32_t OutPacketsClientMin; // 0x288
    uint32_t OutPacketsClientAvg; // 0x28c
    uint32_t NetNumClients; // 0x290
    uint32_t InPackets; // 0x294
    uint32_t OutPackets; // 0x298
    uint32_t InBunches; // 0x29c
    uint32_t OutBunches; // 0x2a0
    uint32_t OutLoss; // 0x2a4
    uint32_t InLoss; // 0x2a8
    uint32_t VoiceBytesSent; // 0x2ac
    uint32_t VoiceBytesRecv; // 0x2b0
    uint32_t VoicePacketsSent; // 0x2b4
    uint32_t VoicePacketsRecv; // 0x2b8
    uint32_t PercentInVoice; // 0x2bc
    uint32_t PercentOutVoice; // 0x2c0
    uint32_t NumActorChannels; // 0x2c4
    uint32_t NumConsideredActors; // 0x2c8
    uint32_t PrioritizedActors; // 0x2cc
    uint32_t NumRelevantActors; // 0x2d0
    uint32_t NumRelevantDeletedActors; // 0x2d4
    uint32_t NumReplicatedActorAttempts; // 0x2d8
    uint32_t NumReplicatedActors; // 0x2dc
    uint32_t NumActors; // 0x2e0
    uint32_t NumNetActors; // 0x2e4
    uint32_t NumDormantActors; // 0x2e8
    uint32_t NumInitiallyDormantActors; // 0x2ec
    uint32_t NumNetGUIDsAckd; // 0x2f0
    uint32_t NumNetGUIDsPending; // 0x2f4
    uint32_t NumNetGUIDsUnAckd; // 0x2f8
    uint32_t ObjPathBytes; // 0x2fc
    uint32_t NetGUIDOutRate; // 0x300
    uint32_t NetGUIDInRate; // 0x304
    uint32_t NetSaturated; // 0x308
    char pad_30c[0x4];
    static AServerStatReplicator* StaticClass();
}; // Size: 0x310
#pragma pack(pop)
