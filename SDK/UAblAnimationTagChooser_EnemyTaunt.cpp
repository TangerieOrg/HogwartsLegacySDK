#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyTaunt.hpp"
UAblAnimationTagChooser_EnemyTaunt* UAblAnimationTagChooser_EnemyTaunt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyTaunt");
    return (UAblAnimationTagChooser_EnemyTaunt*)res;
}
