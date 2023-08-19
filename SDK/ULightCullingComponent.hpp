#pragma once
#include <cstdint>
#include "FWCullingPlane.hpp"
#include "USceneComponent.hpp"
class ULightCullingProvider;
#pragma pack(push, 1)
class ULightCullingComponent : public USceneComponent {
public:
    TArray<FWCullingPlane> WCullingPlanes; // 0x220
    static ULightCullingComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
