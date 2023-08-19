#include "ULODStreamingManager.hpp"
#include "UObject.hpp"
ULODStreamingManager* ULODStreamingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/LODStreamingManager.LODStreamingManager");
    return (ULODStreamingManager*)res;
}
