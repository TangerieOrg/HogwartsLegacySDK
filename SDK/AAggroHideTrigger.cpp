#include "AAggroHideTrigger.hpp"
#include "AHideTrigger.hpp"
AAggroHideTrigger* AAggroHideTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AggroHideTrigger");
    return (AAggroHideTrigger*)res;
}
