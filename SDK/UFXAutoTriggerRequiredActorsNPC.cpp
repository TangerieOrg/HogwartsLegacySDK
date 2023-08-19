#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsNPC.hpp"
UFXAutoTriggerRequiredActorsNPC* UFXAutoTriggerRequiredActorsNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsNPC");
    return (UFXAutoTriggerRequiredActorsNPC*)res;
}
