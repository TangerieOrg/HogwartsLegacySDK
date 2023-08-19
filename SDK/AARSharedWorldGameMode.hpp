#pragma once
#include <cstdint>
#include "AGameMode.hpp"
class AARSharedWorldGameState;
#pragma pack(push, 1)
class AARSharedWorldGameMode : public AGameMode {
public:
    int32_t BufferSizePerChunk; // 0x330
    char pad_334[0x64];
    static AARSharedWorldGameMode* StaticClass();
    void SetPreviewImageData(TArray<uint8_t> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8_t> ARWorldData);
    AARSharedWorldGameState* GetARSharedWorldGameState();
}; // Size: 0x398
#pragma pack(pop)
