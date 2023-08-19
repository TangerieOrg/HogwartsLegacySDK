#include "UAblAbilityTask.hpp"
#include "UablCastSpellTask.hpp"
UablCastSpellTask* UablCastSpellTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCastSpellTask");
    return (UablCastSpellTask*)res;
}
