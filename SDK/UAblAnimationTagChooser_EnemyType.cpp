#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyType.hpp"
UAblAnimationTagChooser_EnemyType* UAblAnimationTagChooser_EnemyType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyType");
    return (UAblAnimationTagChooser_EnemyType*)res;
}
