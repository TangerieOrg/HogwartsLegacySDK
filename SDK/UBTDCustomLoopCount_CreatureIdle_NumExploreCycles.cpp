#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_CreatureIdle_NumExploreCycles.hpp"
UBTDCustomLoopCount_CreatureIdle_NumExploreCycles* UBTDCustomLoopCount_CreatureIdle_NumExploreCycles::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_CreatureIdle_NumExploreCycles");
    return (UBTDCustomLoopCount_CreatureIdle_NumExploreCycles*)res;
}
