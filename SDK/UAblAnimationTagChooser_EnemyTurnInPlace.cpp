#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyTurnInPlace.hpp"
UAblAnimationTagChooser_EnemyTurnInPlace* UAblAnimationTagChooser_EnemyTurnInPlace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyTurnInPlace");
    return (UAblAnimationTagChooser_EnemyTurnInPlace*)res;
}
