#include "AActor.hpp"
#include "ABandwidthTestActor.hpp"
#include "FBandwidthTestGenerator.hpp"
ABandwidthTestActor* ABandwidthTestActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BandwidthTestActor");
    return (ABandwidthTestActor*)res;
}
