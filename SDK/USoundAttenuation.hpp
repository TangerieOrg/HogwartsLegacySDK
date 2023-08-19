#pragma once
#include <cstdint>
#include "FSoundAttenuationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundAttenuation : public UObject {
public:
    FSoundAttenuationSettings Attenuation; // 0x28
    static USoundAttenuation* StaticClass();
}; // Size: 0x3c8
#pragma pack(pop)
