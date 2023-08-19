#include "AActor.hpp"
#include "UActorSpawner.hpp"
#include "UClass.hpp"
#include "USpawn_ByClass.hpp"
USpawn_ByClass* USpawn_ByClass::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Spawn_ByClass");
    return (USpawn_ByClass*)res;
}
