#include "UAvaMotionWarpWindowFinder.hpp"
#include "UObject.hpp"
UAvaMotionWarpWindowFinder* UAvaMotionWarpWindowFinder::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaMotionWarpWindowFinder");
    return (UAvaMotionWarpWindowFinder*)res;
}
