#pragma once
#include <cstdint>
#include "AInsideOutsideOverrideVolume.hpp"
#pragma pack(push, 1)
class AOutsideOverrideVolume : public AInsideOutsideOverrideVolume {
public:
    static AOutsideOverrideVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
