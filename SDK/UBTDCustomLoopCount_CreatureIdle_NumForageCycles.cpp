#include "UBTDCustomLoopCount.hpp"
#include "UBTDCustomLoopCount_CreatureIdle_NumForageCycles.hpp"
UBTDCustomLoopCount_CreatureIdle_NumForageCycles* UBTDCustomLoopCount_CreatureIdle_NumForageCycles::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDCustomLoopCount_CreatureIdle_NumForageCycles");
    return (UBTDCustomLoopCount_CreatureIdle_NumForageCycles*)res;
}
