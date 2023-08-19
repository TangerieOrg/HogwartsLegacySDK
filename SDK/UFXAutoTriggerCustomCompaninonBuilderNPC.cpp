#include "FDbSingleColumnInfo.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerCustomCompaninonBuilder.hpp"
#include "UFXAutoTriggerCustomCompaninonBuilderNPC.hpp"
UFXAutoTriggerCustomCompaninonBuilderNPC* UFXAutoTriggerCustomCompaninonBuilderNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCustomCompaninonBuilderNPC");
    return (UFXAutoTriggerCustomCompaninonBuilderNPC*)res;
}
