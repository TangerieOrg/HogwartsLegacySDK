#include "FCreatureTakeoffMotionData.hpp"
#include "UCreature_FlightMotionTable.hpp"
#include "UDataAsset.hpp"
UCreature_FlightMotionTable* UCreature_FlightMotionTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_FlightMotionTable");
    return (UCreature_FlightMotionTable*)res;
}
