#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FCameraData;
#pragma pack(push, 1)
class UCameraStackBehaviorInterface : public UInterface {
public:
    static UCameraStackBehaviorInterface* StaticClass();
    bool OnWriteCameraDataEvent(FCameraData& CameraData);
    bool OnUpdateEvent(float DeltaSeconds);
    FString OnGetDebugStatsEvent();
    bool OnActivateEvent();
}; // Size: 0x28
#pragma pack(pop)
