#pragma once
#include <cstdint>
#include "FMulticastRecordOptions.hpp"
#include "UNetDriver.hpp"
class APlayerController;
#pragma pack(push, 1)
class UDemoNetDriver : public UNetDriver {
public:
    char pad_760[0x2a4];
    float CheckpointSaveMaxMSPerFrame; // 0xa04
    char pad_a08[0x20];
    TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa28
    bool bIsLocalReplay; // 0xa38
    char pad_a39[0x7];
    TArray<APlayerController*> SpectatorControllers; // 0xa40
    char pad_a50[0x888];
    static UDemoNetDriver* StaticClass();
}; // Size: 0x12d8
#pragma pack(pop)
