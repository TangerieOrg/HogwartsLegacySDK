#pragma once
#include <cstdint>
#include "ALight.hpp"
#pragma pack(push, 1)
class ADirectionalLight : public ALight {
public:
    static ADirectionalLight* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
