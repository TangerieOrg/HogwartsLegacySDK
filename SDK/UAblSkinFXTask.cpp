#include "UAblAbilityTask.hpp"
#include "UAblSkinFXTask.hpp"
UAblSkinFXTask* UAblSkinFXTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSkinFXTask");
    return (UAblSkinFXTask*)res;
}
