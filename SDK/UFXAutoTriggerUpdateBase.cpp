#include "UFXAutoTriggerUpdateBase.hpp"
#include "UObject.hpp"
UFXAutoTriggerUpdateBase* UFXAutoTriggerUpdateBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateBase");
    return (UFXAutoTriggerUpdateBase*)res;
}
