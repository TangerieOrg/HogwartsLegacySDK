#include "UDataAsset.hpp"
#include "UNavMeshCache.hpp"
UNavMeshCache* UNavMeshCache::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavMeshCache");
    return (UNavMeshCache*)res;
}
