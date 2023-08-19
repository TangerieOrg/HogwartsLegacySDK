#pragma once
#include <cstdint>
#include "AInsideOutsideOverrideVolume.hpp"
#pragma pack(push, 1)
class AInsideOverrideVolume : public AInsideOutsideOverrideVolume {
public:
    static AInsideOverrideVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
