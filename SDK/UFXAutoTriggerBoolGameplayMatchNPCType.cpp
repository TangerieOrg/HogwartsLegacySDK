#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameplayMatchNPCType.hpp"
UFXAutoTriggerBoolGameplayMatchNPCType* UFXAutoTriggerBoolGameplayMatchNPCType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameplayMatchNPCType");
    return (UFXAutoTriggerBoolGameplayMatchNPCType*)res;
}
