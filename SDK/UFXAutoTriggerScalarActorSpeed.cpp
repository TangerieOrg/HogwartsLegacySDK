#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarActorSpeed.hpp"
UFXAutoTriggerScalarActorSpeed* UFXAutoTriggerScalarActorSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarActorSpeed");
    return (UFXAutoTriggerScalarActorSpeed*)res;
}
