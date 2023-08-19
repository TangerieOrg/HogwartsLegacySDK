#include "FGuid.hpp"
#include "FRecordedTransformTrack.hpp"
#include "UGeometryCollection.hpp"
#include "UGeometryCollectionCache.hpp"
#include "UObject.hpp"
UGeometryCollectionCache* UGeometryCollectionCache::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionCache");
    return (UGeometryCollectionCache*)res;
}
