#pragma once
#include <cstdint>
#include "UAudioEndpointSettingsBase.hpp"
#pragma pack(push, 1)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase {
public:
    static UDummyEndpointSettings* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
