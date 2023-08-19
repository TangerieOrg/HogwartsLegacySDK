#include "UActorSpawner.hpp"
#include "USkeletalMesh.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#include "USpawn_BySkeletalMesh.hpp"
USpawn_BySkeletalMesh* USpawn_BySkeletalMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Spawn_BySkeletalMesh");
    return (USpawn_BySkeletalMesh*)res;
}
