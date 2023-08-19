#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_Reparo.hpp"
UAISense_CogGroup_Reparo* UAISense_CogGroup_Reparo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_Reparo");
    return (UAISense_CogGroup_Reparo*)res;
}
