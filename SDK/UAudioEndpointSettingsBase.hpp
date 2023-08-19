#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAudioEndpointSettingsBase : public UObject {
public:
    static UAudioEndpointSettingsBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
