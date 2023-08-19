#include "ASanctuaryZoneStreamingVolume.hpp"
#include "AVolume.hpp"
ASanctuaryZoneStreamingVolume* ASanctuaryZoneStreamingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryZoneStreamingVolume");
    return (ASanctuaryZoneStreamingVolume*)res;
}
