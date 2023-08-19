#include "UAISense.hpp"
#include "UAISense_Cognition.hpp"
UAISense_Cognition* UAISense_Cognition::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISense_Cognition");
    return (UAISense_Cognition*)res;
}
