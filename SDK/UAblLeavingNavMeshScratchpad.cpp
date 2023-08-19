#include "UAblLeavingNavMeshScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblLeavingNavMeshScratchpad* UAblLeavingNavMeshScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblLeavingNavMeshScratchpad");
    return (UAblLeavingNavMeshScratchpad*)res;
}
