#include "AConjurationStreamingVolume.hpp"
#include "AVolume.hpp"
AConjurationStreamingVolume* AConjurationStreamingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationStreamingVolume");
    return (AConjurationStreamingVolume*)res;
}
