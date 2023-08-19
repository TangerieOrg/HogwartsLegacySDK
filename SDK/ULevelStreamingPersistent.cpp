#include "ULevelStreaming.hpp"
#include "ULevelStreamingPersistent.hpp"
ULevelStreamingPersistent* ULevelStreamingPersistent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelStreamingPersistent");
    return (ULevelStreamingPersistent*)res;
}
