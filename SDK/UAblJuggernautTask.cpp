#include "UAblAbilityTask.hpp"
#include "UAblJuggernautTask.hpp"
UAblJuggernautTask* UAblJuggernautTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblJuggernautTask");
    return (UAblJuggernautTask*)res;
}
