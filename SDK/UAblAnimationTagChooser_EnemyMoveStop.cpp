#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyMoveStop.hpp"
UAblAnimationTagChooser_EnemyMoveStop* UAblAnimationTagChooser_EnemyMoveStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyMoveStop");
    return (UAblAnimationTagChooser_EnemyMoveStop*)res;
}
