#include "ULevelStreaming.hpp"
#include "ULevelStreamingAlwaysLoaded.hpp"
ULevelStreamingAlwaysLoaded* ULevelStreamingAlwaysLoaded::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelStreamingAlwaysLoaded");
    return (ULevelStreamingAlwaysLoaded*)res;
}
