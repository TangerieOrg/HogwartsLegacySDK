#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyIdle.hpp"
UAblAnimationTagChooser_EnemyIdle* UAblAnimationTagChooser_EnemyIdle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyIdle");
    return (UAblAnimationTagChooser_EnemyIdle*)res;
}
