#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyMovePivot.hpp"
UAblAnimationTagChooser_EnemyMovePivot* UAblAnimationTagChooser_EnemyMovePivot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyMovePivot");
    return (UAblAnimationTagChooser_EnemyMovePivot*)res;
}
