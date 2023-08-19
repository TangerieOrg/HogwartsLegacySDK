#include "FDbSingleColumnInfo.hpp"
#include "UActorComponent.hpp"
#include "UMissionSpawnComponent.hpp"
UMissionSpawnComponent* UMissionSpawnComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionSpawnComponent");
    return (UMissionSpawnComponent*)res;
}
