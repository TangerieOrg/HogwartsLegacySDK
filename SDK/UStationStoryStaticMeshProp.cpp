#include "UStaticMesh.hpp"
#include "UStationStoryProp.hpp"
#include "UStationStoryStaticMeshProp.hpp"
UStationStoryStaticMeshProp* UStationStoryStaticMeshProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryStaticMeshProp");
    return (UStationStoryStaticMeshProp*)res;
}
