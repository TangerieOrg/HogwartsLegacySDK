#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsDevelopment.hpp"
UFXAutoTriggerBoolIsDevelopment* UFXAutoTriggerBoolIsDevelopment::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolIsDevelopment");
    return (UFXAutoTriggerBoolIsDevelopment*)res;
}
