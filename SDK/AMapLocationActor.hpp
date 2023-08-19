#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "FDbSingleColumnInfo.hpp"
class UMapCameraParameters;
class UArrowComponent;
#pragma pack(push, 1)
class AMapLocationActor : public AStaticMeshActor {
public:
    FDbSingleColumnInfo MyLocationID; // 0x258
    UMapCameraParameters* CameraParameters; // 0x2e0
    bool Visited; // 0x2e8
    bool IsTower; // 0x2e9
    bool HasMaterialInstance; // 0x2ea
    char pad_2eb[0x5];
    FString RegionName; // 0x2f0
    UArrowComponent* TargetFocusPoint; // 0x300
    bool bIsHighlighted; // 0x308
    bool bIsForward; // 0x309
    char pad_30a[0x4e];
    static AMapLocationActor* StaticClass();
    void OnPushBackward_Event();
    void OnPushBackward();
    void OnBringForward_Event();
    void OnBringForward();
    void OnActivateHighlight_Event(bool Activate);
    void OnActivateHighlight(bool Activate);
}; // Size: 0x358
#pragma pack(pop)
