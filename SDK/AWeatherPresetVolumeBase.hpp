#pragma once
#include <cstdint>
#include "AWeatherVolumeSortablePreload.hpp"
#pragma pack(push, 1)
class AWeatherPresetVolumeBase : public AWeatherVolumeSortablePreload {
public:
    static AWeatherPresetVolumeBase* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
