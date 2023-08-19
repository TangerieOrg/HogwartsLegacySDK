#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_DistanceWithWarp.hpp"
UCogGroupEvaluation_DistanceWithWarp* UCogGroupEvaluation_DistanceWithWarp::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_DistanceWithWarp");
    return (UCogGroupEvaluation_DistanceWithWarp*)res;
}
