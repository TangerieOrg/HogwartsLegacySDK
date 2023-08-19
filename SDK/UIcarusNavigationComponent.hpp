#pragma once
#include <cstdint>
#include "FMercunaMoveRequest.hpp"
#include "UMercunaNavigationComponent.hpp"
class UMercunaPath;
#pragma pack(push, 1)
class UIcarusNavigationComponent : public UMercunaNavigationComponent {
public:
    float TurningCircleLookAheadTime; // 0x148
    char pad_14c[0xc];
    FMercunaMoveRequest OriginalMoveRequest; // 0x158
    char pad_198[0x40];
    UMercunaPath* CurrentPath; // 0x1d8
    UMercunaPath* NewPath; // 0x1e0
    char pad_1e8[0x10];
    static UIcarusNavigationComponent* StaticClass();
    void SetUseTurnSmoothing(bool bInUseTurnSmoothing);
    bool GetUseTurnSmoothing();
}; // Size: 0x1f8
#pragma pack(pop)
