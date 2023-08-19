#include "UActorSpawner.hpp"
#include "USpawn_ByStationStoryContent.hpp"
USpawn_ByStationStoryContent* USpawn_ByStationStoryContent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spawn_ByStationStoryContent");
    return (USpawn_ByStationStoryContent*)res;
}
