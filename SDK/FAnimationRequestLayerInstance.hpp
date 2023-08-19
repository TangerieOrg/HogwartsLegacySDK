#pragma once
#include <cstdint>
#include "FAnimRequest.hpp"
#include "FMoveRequest.hpp"
#pragma pack(push, 1)
struct FAnimationRequestLayerInstance {
    char pad_0[0x18];
    TArray<void*> AnimRequestProviders; // 0x18
    TArray<void*> PlacementRequestProviders; // 0x28
    TArray<void*> RootMotionRequestProviders; // 0x38
    TArray<FAnimRequest> AnimRequests; // 0x48
    TArray<FMoveRequest> PlacementRequests; // 0x58
    TArray<FMoveRequest> RootMotionRequests; // 0x68
    float LayerWeight; // 0x78
    char pad_7c[0x94];
}; // Size: 0x110
#pragma pack(pop)
