#include "FVector.hpp"
#include "UAISenseFOVDetails.hpp"
#include "UObject.hpp"
UAISenseFOVDetails* UAISenseFOVDetails::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISenseFOVDetails");
    return (UAISenseFOVDetails*)res;
}
