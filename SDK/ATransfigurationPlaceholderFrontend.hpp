#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#pragma pack(push, 1)
class ATransfigurationPlaceholderFrontend : public AStreamingPlaceholderChildActorBase {
public:
    FString IdentifyingName; // 0x270
    char pad_280[0x28];
    FString OnlySpawnIfKeyPresent; // 0x2a8
    FString OnlySpawnIfKeyNotPresent; // 0x2b8
    static ATransfigurationPlaceholderFrontend* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
