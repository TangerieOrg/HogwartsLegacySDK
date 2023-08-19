#include "UActorSpawner.hpp"
#include "USpawn_ByRandomAndTime.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshPoolBaseData.hpp"
USpawn_ByRandomAndTime* USpawn_ByRandomAndTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spawn_ByRandomAndTime");
    return (USpawn_ByRandomAndTime*)res;
}
