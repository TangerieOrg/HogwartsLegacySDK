#include "UObjectArchitectAsset.hpp"
#include "USpawn_BySkeletalMesh.hpp"
#include "USpawn_BySkeletalMesh_WithCreatureAudio.hpp"
USpawn_BySkeletalMesh_WithCreatureAudio* USpawn_BySkeletalMesh_WithCreatureAudio::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spawn_BySkeletalMesh_WithCreatureAudio");
    return (USpawn_BySkeletalMesh_WithCreatureAudio*)res;
}
