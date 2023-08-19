#pragma once
#include <cstdint>
#include "FSkyAtmosphereArtDirectionParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsOverrideArtDirection : public USkyAtmosphereParams {
public:
    FSkyAtmosphereArtDirectionParametersOverride ArtDirection; // 0x28
    static USkyAtmosphereParamsOverrideArtDirection* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
