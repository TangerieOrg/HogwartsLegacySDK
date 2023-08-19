#include "UFXAutoTriggerPrerequisiteBase.hpp"
#include "UFXAutoTriggerPrerequisitePIEOnly.hpp"
UFXAutoTriggerPrerequisitePIEOnly* UFXAutoTriggerPrerequisitePIEOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerPrerequisitePIEOnly");
    return (UFXAutoTriggerPrerequisitePIEOnly*)res;
}
