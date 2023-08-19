#include "AActor.hpp"
#include "AGeometryCollectionRenderLevelSetActor.hpp"
#include "UMaterial.hpp"
#include "UVolumeTexture.hpp"
AGeometryCollectionRenderLevelSetActor* AGeometryCollectionRenderLevelSetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
    return (AGeometryCollectionRenderLevelSetActor*)res;
}
