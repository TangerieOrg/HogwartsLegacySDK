#include "EEnemy_TagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Enemy.hpp"
UAblAnimationTagChooser_Enemy* UAblAnimationTagChooser_Enemy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Enemy");
    return (UAblAnimationTagChooser_Enemy*)res;
}
