#pragma once
#include <cstdint>
#include "EARObjectClassification.hpp"
#include "EARSpatialMeshUsageFlags.hpp"
#include "EARTrackingState.hpp"
#include "FGuid.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class UMRMeshComponent;
#pragma pack(push, 1)
class UARTrackedGeometry : public UObject {
public:
    FGuid UniqueId; // 0x28
    char pad_38[0x8];
    FTransform LocalToTrackingTransform; // 0x40
    FTransform LocalToAlignedTrackingTransform; // 0x70
    EARTrackingState TrackingState; // 0xa0
    char pad_a1[0xf];
    UMRMeshComponent* UnderlyingMesh; // 0xb0
    EARObjectClassification ObjectClassification; // 0xb8
    EARSpatialMeshUsageFlags SpatialMeshUsageFlags; // 0xb9
    char pad_ba[0x16];
    int32_t LastUpdateFrameNumber; // 0xd0
    char pad_d4[0xc];
    FName DebugName; // 0xe0
    char pad_e8[0x18];
    static UARTrackedGeometry* StaticClass();
    bool IsTracked();
    bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);
    UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FString GetName();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32_t GetLastUpdateFrameNumber();
    FName GetDebugName();
}; // Size: 0x100
#pragma pack(pop)
