#pragma once
#include <cstdint>
#include "FDatasmithPostProcessSettingsTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {
public:
    FDatasmithPostProcessSettingsTemplate Settings; // 0x30
    uint8_t bEnabled : 1; // 0x70
    uint8_t bUnbound : 1; // 0x70
    uint8_t pad_bitfield_70_2 : 6;
    char pad_71[0xf];
    static UDatasmithPostProcessVolumeTemplate* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
