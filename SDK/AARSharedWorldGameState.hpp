#pragma once
#include <cstdint>
#include "AGameState.hpp"
#pragma pack(push, 1)
class AARSharedWorldGameState : public AGameState {
public:
    TArray<uint8_t> PreviewImageData; // 0x2b8
    TArray<uint8_t> ARWorldData; // 0x2c8
    int32_t PreviewImageBytesTotal; // 0x2d8
    int32_t ARWorldBytesTotal; // 0x2dc
    int32_t PreviewImageBytesDelivered; // 0x2e0
    int32_t ARWorldBytesDelivered; // 0x2e4
    char pad_2e8[0x8];
    static AARSharedWorldGameState* StaticClass();
    void K2_OnARWorldMapIsReady();
}; // Size: 0x2f0
#pragma pack(pop)
