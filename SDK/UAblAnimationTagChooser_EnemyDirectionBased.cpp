#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyDirectionBased.hpp"
UAblAnimationTagChooser_EnemyDirectionBased* UAblAnimationTagChooser_EnemyDirectionBased::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyDirectionBased");
    return (UAblAnimationTagChooser_EnemyDirectionBased*)res;
}
