#include "UClass.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarSkinFXParameter.hpp"
UFXAutoTriggerScalarSkinFXParameter* UFXAutoTriggerScalarSkinFXParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarSkinFXParameter");
    return (UFXAutoTriggerScalarSkinFXParameter*)res;
}
