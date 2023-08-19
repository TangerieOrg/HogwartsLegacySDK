#include "AActor.hpp"
#include "ASeasonLevelStreamingActor.hpp"
#include "ULevelStreamingDynamic.hpp"
ASeasonLevelStreamingActor* ASeasonLevelStreamingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SeasonLevelStreamingActor");
    return (ASeasonLevelStreamingActor*)res;
}
