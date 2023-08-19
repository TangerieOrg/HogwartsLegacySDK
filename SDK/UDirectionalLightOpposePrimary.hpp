#pragma once
#include <cstdint>
#include "UDirectionalLightDirection.hpp"
#pragma pack(push, 1)
class UDirectionalLightOpposePrimary : public UDirectionalLightDirection {
public:
    static UDirectionalLightOpposePrimary* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
