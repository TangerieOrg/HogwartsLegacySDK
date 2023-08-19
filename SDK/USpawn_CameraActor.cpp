#include "ESpawnCameraActorType.hpp"
#include "UActorSpawner.hpp"
#include "UClass.hpp"
#include "USpawn_CameraActor.hpp"
USpawn_CameraActor* USpawn_CameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spawn_CameraActor");
    return (USpawn_CameraActor*)res;
}
