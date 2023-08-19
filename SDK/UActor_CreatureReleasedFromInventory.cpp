#include "FDbSingleColumnInfo.hpp"
#include "UActorProvider.hpp"
#include "UActor_CreatureReleasedFromInventory.hpp"
UActor_CreatureReleasedFromInventory* UActor_CreatureReleasedFromInventory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_CreatureReleasedFromInventory");
    return (UActor_CreatureReleasedFromInventory*)res;
}
