#include "ANavMeshBoundsVolume.hpp"
#include "AVolume.hpp"
#include "FNavAgentSelector.hpp"
ANavMeshBoundsVolume* ANavMeshBoundsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavMeshBoundsVolume");
    return (ANavMeshBoundsVolume*)res;
}
