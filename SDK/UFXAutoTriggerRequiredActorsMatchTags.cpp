#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#include "UFXAutoTriggerRequiredActorsMatchTags.hpp"
UFXAutoTriggerRequiredActorsMatchTags* UFXAutoTriggerRequiredActorsMatchTags::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsMatchTags");
    return (UFXAutoTriggerRequiredActorsMatchTags*)res;
}
