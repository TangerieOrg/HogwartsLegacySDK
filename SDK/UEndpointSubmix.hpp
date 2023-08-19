#pragma once
#include <cstdint>
#include "USoundSubmixBase.hpp"
class UClass;
class UAudioEndpointSettingsBase;
#pragma pack(push, 1)
class UEndpointSubmix : public USoundSubmixBase {
public:
    FName EndpointType; // 0x38
    UClass* EndpointSettingsClass; // 0x40
    UAudioEndpointSettingsBase* EndpointSettings; // 0x48
    static UEndpointSubmix* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
