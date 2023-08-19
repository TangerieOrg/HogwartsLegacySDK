#include "AMercunaNavStreamingVolume.hpp"
#include "AVolume.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
AMercunaNavStreamingVolume* AMercunaNavStreamingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavStreamingVolume");
    return (AMercunaNavStreamingVolume*)res;
}
