#include "FGameplayTag.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_NPCImpactDirection.hpp"
UAblAnimationTagChooser_NPCImpactDirection* UAblAnimationTagChooser_NPCImpactDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_NPCImpactDirection");
    return (UAblAnimationTagChooser_NPCImpactDirection*)res;
}
