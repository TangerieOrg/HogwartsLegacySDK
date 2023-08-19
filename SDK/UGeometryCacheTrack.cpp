#include "UGeometryCacheTrack.hpp"
#include "UObject.hpp"
UGeometryCacheTrack* UGeometryCacheTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheTrack");
    return (UGeometryCacheTrack*)res;
}
