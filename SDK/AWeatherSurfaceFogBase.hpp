#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESurfaceFogType.hpp"
#pragma pack(push, 1)
class AWeatherSurfaceFogBase : public AActor {
public:
    int32_t SupportedFogTypes; // 0x248
    ESurfaceFogType ShowingFogType; // 0x24c
    char pad_24d[0x13];
    static AWeatherSurfaceFogBase* StaticClass();
    void RecalculateBounds();
    void OnShowSurfaceFog(ESurfaceFogType Type);
    void OnHideSurfaceFog();
}; // Size: 0x260
#pragma pack(pop)
