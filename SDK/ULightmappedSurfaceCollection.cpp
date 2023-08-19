#include "ULightmappedSurfaceCollection.hpp"
#include "UModel.hpp"
#include "UObject.hpp"
ULightmappedSurfaceCollection* ULightmappedSurfaceCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmappedSurfaceCollection");
    return (ULightmappedSurfaceCollection*)res;
}
