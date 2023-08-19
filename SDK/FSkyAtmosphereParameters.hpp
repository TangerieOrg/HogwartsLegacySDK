#pragma once
#include <cstdint>
#include "FSkyAtmosphereArtDirectionParameters.hpp"
#include "FSkyAtmosphereOverrideDirectionParameters.hpp"
#include "FSkyAtmosphereOzoneParameters.hpp"
#include "FSkyAtmospherePlanetParameters.hpp"
#include "FSkyAtmosphereScatteringParameters.hpp"
#include "FSkyAtmosphereSkyOnlyParameters.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereParameters {
    FSkyAtmospherePlanetParameters Planet; // 0x0
    FSkyAtmosphereScatteringParameters Scattering; // 0xc
    FSkyAtmosphereOzoneParameters Ozone; // 0x58
    FSkyAtmosphereArtDirectionParameters ArtDirection; // 0x78
    FSkyAtmosphereSkyOnlyParameters SkyOnly; // 0xe0
    FSkyAtmosphereOverrideDirectionParameters OverrideDirection; // 0x130
}; // Size: 0x148
#pragma pack(pop)
