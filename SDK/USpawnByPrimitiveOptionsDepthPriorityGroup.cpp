#include "ESceneDepthPriorityGroup.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsDepthPriorityGroup.hpp"
USpawnByPrimitiveOptionsDepthPriorityGroup* USpawnByPrimitiveOptionsDepthPriorityGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsDepthPriorityGroup");
    return (USpawnByPrimitiveOptionsDepthPriorityGroup*)res;
}
