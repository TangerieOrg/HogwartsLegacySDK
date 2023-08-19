#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyCounterAttack.hpp"
#include "UClass.hpp"
UAblAnimationTagChooser_EnemyCounterAttack* UAblAnimationTagChooser_EnemyCounterAttack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyCounterAttack");
    return (UAblAnimationTagChooser_EnemyCounterAttack*)res;
}
