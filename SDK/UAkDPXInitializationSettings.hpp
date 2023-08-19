#pragma once
#include <cstdint>
#include "UAkPS5InitializationSettings.hpp"
#pragma pack(push, 1)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings {
public:
    static UAkDPXInitializationSettings* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
