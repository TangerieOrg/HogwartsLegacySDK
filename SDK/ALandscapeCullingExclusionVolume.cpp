#include "ALandscapeCullingExclusionVolume.hpp"
#include "AVolume.hpp"
ALandscapeCullingExclusionVolume* ALandscapeCullingExclusionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LandscapeCullingExclusionVolume");
    return (ALandscapeCullingExclusionVolume*)res;
}
