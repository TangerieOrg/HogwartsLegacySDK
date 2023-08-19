#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_CreatureIdle_NumRestCycles.hpp"
UBTDCustomLoopCount_CreatureIdle_NumRestCycles* UBTDCustomLoopCount_CreatureIdle_NumRestCycles::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_CreatureIdle_NumRestCycles");
    return (UBTDCustomLoopCount_CreatureIdle_NumRestCycles*)res;
}
