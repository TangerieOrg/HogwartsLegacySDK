#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsSpecificNPC.hpp"
UFXAutoTriggerBoolIsSpecificNPC* UFXAutoTriggerBoolIsSpecificNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolIsSpecificNPC");
    return (UFXAutoTriggerBoolIsSpecificNPC*)res;
}
