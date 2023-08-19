#include "UGeometryCacheCodecBase.hpp"
#include "UGeometryCacheCodecRaw.hpp"
UGeometryCacheCodecRaw* UGeometryCacheCodecRaw::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheCodecRaw");
    return (UGeometryCacheCodecRaw*)res;
}
