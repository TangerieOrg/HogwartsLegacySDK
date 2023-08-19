#include "UInterface.hpp"
#include "ULODSyncInterface.hpp"
ULODSyncInterface* ULODSyncInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LODSyncInterface");
    return (ULODSyncInterface*)res;
}
