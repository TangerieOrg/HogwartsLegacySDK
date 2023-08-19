#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class ULightCullingPerLightInterface : public UInterface {
public:
    static ULightCullingPerLightInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
