#include "FCreatureGaitMotionData.hpp"
#include "UCreature_MotionTable.hpp"
#include "UDataAsset.hpp"
UCreature_MotionTable* UCreature_MotionTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_MotionTable");
    return (UCreature_MotionTable*)res;
}
