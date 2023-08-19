#include "ETimeOverrideType.hpp"
#include "FTimeInput.hpp"
#include "UTimeOverrideTimeInputRangeSceneRig.hpp"
#include "UTimeOverrideTimeOnly.hpp"
UTimeOverrideTimeInputRangeSceneRig* UTimeOverrideTimeInputRangeSceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TimeOverrideTimeInputRangeSceneRig");
    return (UTimeOverrideTimeInputRangeSceneRig*)res;
}
