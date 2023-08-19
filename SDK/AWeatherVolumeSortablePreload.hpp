#pragma once
#include <cstdint>
#include "AWeatherVolumeSortable.hpp"
class UObject;
#pragma pack(push, 1)
class AWeatherVolumeSortablePreload : public AWeatherVolumeSortable {
public:
    TArray<UObject*> PreloadedObjects; // 0x288
    char pad_298[0x10];
    static AWeatherVolumeSortablePreload* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
