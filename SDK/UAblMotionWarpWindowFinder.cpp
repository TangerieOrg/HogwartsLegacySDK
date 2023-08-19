#include "UAblAbilityComponent.hpp"
#include "UAblMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
UAblMotionWarpWindowFinder* UAblMotionWarpWindowFinder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMotionWarpWindowFinder");
    return (UAblMotionWarpWindowFinder*)res;
}
