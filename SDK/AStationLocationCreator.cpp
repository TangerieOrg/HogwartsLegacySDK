#include "AActor.hpp"
#include "AEncounterCreator.hpp"
#include "AStation.hpp"
#include "AStationLocationCreator.hpp"
AStationLocationCreator* AStationLocationCreator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationLocationCreator");
    return (AStationLocationCreator*)res;
}
