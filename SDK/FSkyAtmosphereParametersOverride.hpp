#pragma once
#include <cstdint>
#include "FSkyAtmosphereArtDirectionParametersOverride.hpp"
#include "FSkyAtmosphereOverrideDirectionParametersOverride.hpp"
#include "FSkyAtmosphereOzoneParametersOverride.hpp"
#include "FSkyAtmospherePlanetParametersOverride.hpp"
#include "FSkyAtmosphereScatteringParametersOverride.hpp"
#include "FSkyAtmosphereSkyOnlyParametersOverride.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereParametersOverride {
    FSkyAtmospherePlanetParametersOverride Planet; // 0x0
    FSkyAtmosphereScatteringParametersOverride Scattering; // 0x10
    FSkyAtmosphereOzoneParametersOverride Ozone; // 0x60
    char pad_84[0x4];
    FSkyAtmosphereArtDirectionParametersOverride ArtDirection; // 0x88
    FSkyAtmosphereSkyOnlyParametersOverride SkyOnly; // 0xf8
    FSkyAtmosphereOverrideDirectionParametersOverride OverrideDirection; // 0x158
    char pad_174[0x4];
}; // Size: 0x178
#pragma pack(pop)
