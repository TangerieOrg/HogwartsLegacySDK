#pragma once
#include <cstdint>
#include "ASceneCapture.hpp"
class UPlanarReflectionComponent;
#pragma pack(push, 1)
class APlanarReflection : public ASceneCapture {
public:
    UPlanarReflectionComponent* PlanarReflectionComponent; // 0x258
    bool bShowPreviewPlane; // 0x260
    char pad_261[0x7];
    static APlanarReflection* StaticClass();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x268
#pragma pack(pop)
