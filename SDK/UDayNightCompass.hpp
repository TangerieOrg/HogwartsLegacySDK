#pragma once
#include <cstdint>
#include "FDayNightCompassParams.hpp"
#include "USceneComponent.hpp"
class UMaterialInterface;
class UTextRenderComponent;
#pragma pack(push, 1)
class UDayNightCompass : public USceneComponent {
public:
    UTextRenderComponent* North; // 0x220
    UTextRenderComponent* South; // 0x228
    UTextRenderComponent* East; // 0x230
    UTextRenderComponent* West; // 0x238
    FDayNightCompassParams Params; // 0x240
    static UDayNightCompass* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
