#pragma once
#include <cstdint>
#include "APlayerController.hpp"
#pragma pack(push, 1)
class AARSharedWorldPlayerController : public APlayerController {
public:
    char pad_5b0[0x8];
    static AARSharedWorldPlayerController* StaticClass();
    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32_t Offset, TArray<uint8_t>& Buffer);
    void ClientUpdateARWorldData(int32_t Offset, TArray<uint8_t>& Buffer);
    void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
}; // Size: 0x5b8
#pragma pack(pop)
