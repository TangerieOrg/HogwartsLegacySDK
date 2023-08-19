#include "UAvaEmptyMotionWarpWindowFinder.hpp"
#include "UAvaMotionWarpWindowFinder.hpp"
UAvaEmptyMotionWarpWindowFinder* UAvaEmptyMotionWarpWindowFinder::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaEmptyMotionWarpWindowFinder");
    return (UAvaEmptyMotionWarpWindowFinder*)res;
}
