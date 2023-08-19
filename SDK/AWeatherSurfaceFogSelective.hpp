#pragma once
#include <cstdint>
#include "AWeatherSurfaceFogBase.hpp"
class USceneComponent;
#pragma pack(push, 1)
class AWeatherSurfaceFogSelective : public AWeatherSurfaceFogBase {
public:
    USceneComponent* OnlyShowHide; // 0x260
    bool bOnlyShowHideIncludeChildren; // 0x268
    char pad_269[0x7];
    static AWeatherSurfaceFogSelective* StaticClass();
    void SetComponentToShowHide(USceneComponent* SceneComponent, bool bIncludeChildren);
}; // Size: 0x270
#pragma pack(pop)
