#include "UGeometryCacheCodecBase.hpp"
#include "UObject.hpp"
UGeometryCacheCodecBase* UGeometryCacheCodecBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheCodecBase");
    return (UGeometryCacheCodecBase*)res;
}
