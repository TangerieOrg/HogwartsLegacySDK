#include "UAISense_CogGroup.hpp"
#include "UAISense_Cognition.hpp"
UAISense_CogGroup* UAISense_CogGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISense_CogGroup");
    return (UAISense_CogGroup*)res;
}
