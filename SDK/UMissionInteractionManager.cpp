#include "UMissionInteractionManager.hpp"
#include "UObject.hpp"
UMissionInteractionManager* UMissionInteractionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionInteractionManager");
    return (UMissionInteractionManager*)res;
}
