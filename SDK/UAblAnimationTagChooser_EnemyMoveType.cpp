#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyMoveType.hpp"
UAblAnimationTagChooser_EnemyMoveType* UAblAnimationTagChooser_EnemyMoveType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyMoveType");
    return (UAblAnimationTagChooser_EnemyMoveType*)res;
}
