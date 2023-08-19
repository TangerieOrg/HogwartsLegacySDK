#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsPhoenixTier4Characters.hpp"
UFXAutoTriggerRequiredActorsPhoenixTier4Characters* UFXAutoTriggerRequiredActorsPhoenixTier4Characters::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsPhoenixTier4Characters");
    return (UFXAutoTriggerRequiredActorsPhoenixTier4Characters*)res;
}
