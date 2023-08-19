#include "USkeletalMesh.hpp"
#include "UStationStoryProp.hpp"
#include "UStationStorySkeletalMeshProp.hpp"
UStationStorySkeletalMeshProp* UStationStorySkeletalMeshProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStorySkeletalMeshProp");
    return (UStationStorySkeletalMeshProp*)res;
}
