#include "AARSharedWorldGameMode.hpp"
#include "AARSharedWorldGameState.hpp"
#include "AGameMode.hpp"
#include "UFunction.hpp"
AARSharedWorldGameMode* AARSharedWorldGameMode::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSharedWorldGameMode");
    return (AARSharedWorldGameMode*)res;
}
void AARSharedWorldGameMode::SetPreviewImageData(TArray<uint8_t> ImageData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData"));
    struct Params_SetPreviewImageData {
        TArray<uint8_t> ImageData; // 0x0
    }; // Size: 0x10
    Params_SetPreviewImageData params{};
    params.ImageData = (TArray<uint8_t>)ImageData;
    ProcessEvent(func, &params);
}
void AARSharedWorldGameMode::SetARWorldSharingIsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady"));
    struct Params_SetARWorldSharingIsReady {
    }; // Size: 0x0
    Params_SetARWorldSharingIsReady params{};
    ProcessEvent(func, &params);
}
void AARSharedWorldGameMode::SetARSharedWorldData(TArray<uint8_t> ARWorldData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData"));
    struct Params_SetARSharedWorldData {
        TArray<uint8_t> ARWorldData; // 0x0
    }; // Size: 0x10
    Params_SetARSharedWorldData params{};
    params.ARWorldData = (TArray<uint8_t>)ARWorldData;
    ProcessEvent(func, &params);
}
AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState"));
    struct Params_GetARSharedWorldGameState {
        AARSharedWorldGameState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetARSharedWorldGameState params{};
    ProcessEvent(func, &params);
    return (AARSharedWorldGameState*)params.ReturnValue;
}
