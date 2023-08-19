#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_NpcReactMunitionCheck.hpp"
#include "UInteractionArchitectAsset.hpp"
UAblAppendToBaseChooser_NpcReactMunitionCheck* UAblAppendToBaseChooser_NpcReactMunitionCheck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_NpcReactMunitionCheck");
    return (UAblAppendToBaseChooser_NpcReactMunitionCheck*)res;
}
