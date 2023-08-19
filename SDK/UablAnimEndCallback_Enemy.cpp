#include "UAblAnimationEndCallback.hpp"
#include "UablAnimEndCallback_Enemy.hpp"
UablAnimEndCallback_Enemy* UablAnimEndCallback_Enemy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAnimEndCallback_Enemy");
    return (UablAnimEndCallback_Enemy*)res;
}
