#include "AVolume.hpp"
#include "AWorldMapBoundsVolume.hpp"
AWorldMapBoundsVolume* AWorldMapBoundsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldMapBoundsVolume");
    return (AWorldMapBoundsVolume*)res;
}
