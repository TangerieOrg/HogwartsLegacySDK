#include "UGeometryCacheCodecBase.hpp"
#include "UGeometryCacheCodecV1.hpp"
UGeometryCacheCodecV1* UGeometryCacheCodecV1::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheCodecV1");
    return (UGeometryCacheCodecV1*)res;
}
