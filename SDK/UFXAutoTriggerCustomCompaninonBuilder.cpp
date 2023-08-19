#include "UFXAutoTriggerCustomCompaninonBuilder.hpp"
#include "UObject.hpp"
UFXAutoTriggerCustomCompaninonBuilder* UFXAutoTriggerCustomCompaninonBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCustomCompaninonBuilder");
    return (UFXAutoTriggerCustomCompaninonBuilder*)res;
}
