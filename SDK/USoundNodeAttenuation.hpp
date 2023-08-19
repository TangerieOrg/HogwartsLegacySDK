#pragma once
#include <cstdint>
#include "FSoundAttenuationSettings.hpp"
#include "USoundNode.hpp"
class USoundAttenuation;
#pragma pack(push, 1)
class USoundNodeAttenuation : public USoundNode {
public:
    USoundAttenuation* AttenuationSettings; // 0x48
    FSoundAttenuationSettings AttenuationOverrides; // 0x50
    uint8_t bOverrideAttenuation : 1; // 0x3f0
    uint8_t pad_bitfield_3f0_1 : 7;
    char pad_3f1[0x7];
    static USoundNodeAttenuation* StaticClass();
}; // Size: 0x3f8
#pragma pack(pop)
