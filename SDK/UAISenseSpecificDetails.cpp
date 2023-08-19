#include "FVector.hpp"
#include "UAISenseSpecificDetails.hpp"
#include "UCogGroupTargetPoint.hpp"
#include "UObject.hpp"
UAISenseSpecificDetails* UAISenseSpecificDetails::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISenseSpecificDetails");
    return (UAISenseSpecificDetails*)res;
}
