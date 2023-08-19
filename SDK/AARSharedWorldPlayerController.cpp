#include "AARSharedWorldPlayerController.hpp"
#include "APlayerController.hpp"
#include "UFunction.hpp"
AARSharedWorldPlayerController* AARSharedWorldPlayerController::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSharedWorldPlayerController");
    return (AARSharedWorldPlayerController*)res;
}
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving"));
    struct Params_ServerMarkReadyForReceiving {
    }; // Size: 0x0
    Params_ServerMarkReadyForReceiving params{};
    ProcessEvent(func, &params);
}
void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, TArray<uint8_t>& Buffer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData"));
    struct Params_ClientUpdatePreviewImageData {
        int32_t Offset; // 0x0
        char pad_4[0x4];
        TArray<uint8_t> Buffer; // 0x8
    }; // Size: 0x18
    Params_ClientUpdatePreviewImageData params{};
    params.Offset = (int32_t)Offset;
    params.Buffer = (TArray<uint8_t>)Buffer;
    ProcessEvent(func, &params);
    Buffer = params.Buffer;
}
void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, TArray<uint8_t>& Buffer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData"));
    struct Params_ClientUpdateARWorldData {
        int32_t Offset; // 0x0
        char pad_4[0x4];
        TArray<uint8_t> Buffer; // 0x8
    }; // Size: 0x18
    Params_ClientUpdateARWorldData params{};
    params.Offset = (int32_t)Offset;
    params.Buffer = (TArray<uint8_t>)Buffer;
    ProcessEvent(func, &params);
    Buffer = params.Buffer;
}
void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld"));
    struct Params_ClientInitSharedWorld {
        int32_t PreviewImageSize; // 0x0
        int32_t ARWorldDataSize; // 0x4
    }; // Size: 0x8
    Params_ClientInitSharedWorld params{};
    params.PreviewImageSize = (int32_t)PreviewImageSize;
    params.ARWorldDataSize = (int32_t)ARWorldDataSize;
    ProcessEvent(func, &params);
}
