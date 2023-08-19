#pragma once
#include <cstdint>
#include "UAkXboxOneGDKInitializationSettings.hpp"
#pragma pack(push, 1)
class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings {
public:
    static UAkXB1InitializationSettings* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
