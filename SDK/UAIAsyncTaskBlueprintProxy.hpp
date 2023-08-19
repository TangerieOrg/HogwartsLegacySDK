#pragma once
#include <cstdint>
#include "EPathFollowingResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAIAsyncTaskBlueprintProxy : public UObject {
public:
    char pad_28[0x40];
    static UAIAsyncTaskBlueprintProxy* StaticClass();
    void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type MovementResult);
}; // Size: 0x68
#pragma pack(pop)
