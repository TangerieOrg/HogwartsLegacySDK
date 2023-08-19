#pragma once
#include <cstdint>
#include "UObject.hpp"
class ULevelStreaming;
class UWWorldCompositionSettings;
#pragma pack(push, 1)
class UWorldComposition : public UObject {
public:
    char pad_28[0x88];
    TArray<ULevelStreaming*> TilesStreaming; // 0xb0
    double TilesStreamingTimeThreshold; // 0xc0
    bool bLoadAllTilesDuringCinematic; // 0xc8
    bool bRebaseOriginIn3DSpace; // 0xc9
    char pad_ca[0x2];
    float RebaseOriginDistance; // 0xcc
    UWWorldCompositionSettings* Settings; // 0xd0
    static UWorldComposition* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
