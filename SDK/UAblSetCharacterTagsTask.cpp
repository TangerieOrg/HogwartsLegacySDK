#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblSetCharacterTagsTask.hpp"
#include "UAblTaskCondition.hpp"
UAblSetCharacterTagsTask* UAblSetCharacterTagsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetCharacterTagsTask");
    return (UAblSetCharacterTagsTask*)res;
}
