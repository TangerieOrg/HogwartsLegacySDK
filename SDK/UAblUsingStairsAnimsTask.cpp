#include "UAblAbilityTask.hpp"
#include "UAblUsingStairsAnimsTask.hpp"
UAblUsingStairsAnimsTask* UAblUsingStairsAnimsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblUsingStairsAnimsTask");
    return (UAblUsingStairsAnimsTask*)res;
}
