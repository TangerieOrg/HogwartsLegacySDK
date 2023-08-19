#pragma once
#include <cstdint>
#include "AFastTravelPort.hpp"
#pragma pack(push, 1)
class AFastTravelStatue : public AFastTravelPort {
public:
    static AFastTravelStatue* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
