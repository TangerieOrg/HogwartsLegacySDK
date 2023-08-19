#include "UNavigationDataChunk.hpp"
#include "URecastNavMeshDataChunk.hpp"
URecastNavMeshDataChunk* URecastNavMeshDataChunk::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.RecastNavMeshDataChunk");
    return (URecastNavMeshDataChunk*)res;
}
