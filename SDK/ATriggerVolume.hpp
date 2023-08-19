#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ATriggerVolume : public AVolume {
public:
    static ATriggerVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
