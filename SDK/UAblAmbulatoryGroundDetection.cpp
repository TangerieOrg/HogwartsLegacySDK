#include "UAblAmbulatoryGroundDetection.hpp"
#include "UAblTaskCondition.hpp"
UAblAmbulatoryGroundDetection* UAblAmbulatoryGroundDetection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAmbulatoryGroundDetection");
    return (UAblAmbulatoryGroundDetection*)res;
}
