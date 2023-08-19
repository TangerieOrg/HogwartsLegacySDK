#include "UAblAnimationTagChooser_EnemyAttack.hpp"
#include "UAblAnimationTagChooser_EnemyContainer.hpp"
UAblAnimationTagChooser_EnemyAttack* UAblAnimationTagChooser_EnemyAttack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyAttack");
    return (UAblAnimationTagChooser_EnemyAttack*)res;
}
