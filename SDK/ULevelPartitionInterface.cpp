#include "UInterface.hpp"
#include "ULevelPartitionInterface.hpp"
ULevelPartitionInterface* ULevelPartitionInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelPartitionInterface");
    return (ULevelPartitionInterface*)res;
}
