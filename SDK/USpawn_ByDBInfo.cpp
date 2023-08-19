#include "FDbSingleColumnInfo.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UActorSpawner.hpp"
#include "UClass.hpp"
#include "USpawn_ByDBInfo.hpp"
USpawn_ByDBInfo* USpawn_ByDBInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spawn_ByDBInfo");
    return (USpawn_ByDBInfo*)res;
}
