#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderFrontend : public AStreamingPlaceholderChildActorBase {
public:
    FString FrontendStateKey; // 0x270
    FString FrontendStateValue; // 0x280
    char pad_290[0x28];
    bool bShowInEditor; // 0x2b8
    char pad_2b9[0x7];
    FString OnlySpawnIfKeyNotPresent; // 0x2c0
    static AStreamingPlaceholderFrontend* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
