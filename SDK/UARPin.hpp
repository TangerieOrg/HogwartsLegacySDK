#pragma once
#include <cstdint>
#include "EARTrackingState.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class UARTrackedGeometry;
class USceneComponent;
class UWorld;
struct FLinearColor;
#pragma pack(push, 1)
class UARPin : public UObject {
public:
    UARTrackedGeometry* TrackedGeometry; // 0x28
    USceneComponent* PinnedComponent; // 0x30
    char pad_38[0x8];
    FTransform LocalToTrackingTransform; // 0x40
    FTransform LocalToAlignedTrackingTransform; // 0x70
    EARTrackingState TrackingState; // 0xa0
    char pad_a1[0x4f];
    static UARPin* StaticClass();
    EARTrackingState GetTrackingState();
    UARTrackedGeometry* GetTrackedGeometry();
    USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0xf0
#pragma pack(pop)
