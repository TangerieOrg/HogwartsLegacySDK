#include "ALevelStreamingVolume.hpp"
#include "AVolume.hpp"
#include "EStreamingVolumeUsage.hpp"
ALevelStreamingVolume* ALevelStreamingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelStreamingVolume");
    return (ALevelStreamingVolume*)res;
}
