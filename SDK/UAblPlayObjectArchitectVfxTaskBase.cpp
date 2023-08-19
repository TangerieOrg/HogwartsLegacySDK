#include "EAttachLocation\Type.hpp"
#include "EObjectArchitectVfxWorldLocalType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblObjectArchitectTagChooser.hpp"
#include "UAblPlayObjectArchitectVfxTaskBase.hpp"
#include "UAblTaskCondition.hpp"
UAblPlayObjectArchitectVfxTaskBase* UAblPlayObjectArchitectVfxTaskBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayObjectArchitectVfxTaskBase");
    return (UAblPlayObjectArchitectVfxTaskBase*)res;
}
