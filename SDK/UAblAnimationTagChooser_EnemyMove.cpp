#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyMove.hpp"
UAblAnimationTagChooser_EnemyMove* UAblAnimationTagChooser_EnemyMove::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyMove");
    return (UAblAnimationTagChooser_EnemyMove*)res;
}
