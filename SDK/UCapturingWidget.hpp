#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UHUDElementGroup.hpp"
class ACaptureDeviceItemTool;
class USceneComponent;
#pragma pack(push, 1)
class UCapturingWidget : public UHUDElementGroup {
public:
    ACaptureDeviceItemTool* CaptureDevice; // 0x2e8
    USceneComponent* AttachedComponent; // 0x2f0
    bool bIsProjectedFromOffscreen; // 0x2f8
    char pad_2f9[0x3];
    FVector2D ProjectionDirection; // 0x2fc
    char pad_304[0xc];
    static UCapturingWidget* StaticClass();
    void Show();
    void RemoveFromHUD();
    void HideWhenReady(float HideAfterTime);
}; // Size: 0x310
#pragma pack(pop)
