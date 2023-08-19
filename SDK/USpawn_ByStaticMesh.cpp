#include "UActorSpawner.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#include "USpawn_ByStaticMesh.hpp"
#include "UStaticMesh.hpp"
USpawn_ByStaticMesh* USpawn_ByStaticMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Spawn_ByStaticMesh");
    return (USpawn_ByStaticMesh*)res;
}
