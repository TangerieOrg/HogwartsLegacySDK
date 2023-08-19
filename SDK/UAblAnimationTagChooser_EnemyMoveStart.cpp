#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyMoveStart.hpp"
UAblAnimationTagChooser_EnemyMoveStart* UAblAnimationTagChooser_EnemyMoveStart::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyMoveStart");
    return (UAblAnimationTagChooser_EnemyMoveStart*)res;
}
