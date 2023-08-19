#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPhoenixPhysicalMaterial;
#pragma pack(push, 1)
class UWeatherRemapBase : public UObject {
public:
    UPhoenixPhysicalMaterial* RemapPPM; // 0x28
    static UWeatherRemapBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
