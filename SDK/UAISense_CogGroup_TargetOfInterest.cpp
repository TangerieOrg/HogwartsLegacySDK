#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_TargetOfInterest.hpp"
UAISense_CogGroup_TargetOfInterest* UAISense_CogGroup_TargetOfInterest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_TargetOfInterest");
    return (UAISense_CogGroup_TargetOfInterest*)res;
}
