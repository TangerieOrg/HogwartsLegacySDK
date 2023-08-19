#include "EFXAutoTriggerZLocation.hpp"
#include "EFXAutoTriggerZType.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarActorWorldZ.hpp"
UFXAutoTriggerScalarActorWorldZ* UFXAutoTriggerScalarActorWorldZ::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarActorWorldZ");
    return (UFXAutoTriggerScalarActorWorldZ*)res;
}
