#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolActivePlayerMount.hpp"
UFXAutoTriggerBoolActivePlayerMount* UFXAutoTriggerBoolActivePlayerMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActivePlayerMount");
    return (UFXAutoTriggerBoolActivePlayerMount*)res;
}
