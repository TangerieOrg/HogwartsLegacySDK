#include "UAISense_CogGroup.hpp"
#include "UAISense_CogGroup_AutoTarget.hpp"
UAISense_CogGroup_AutoTarget* UAISense_CogGroup_AutoTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_CogGroup_AutoTarget");
    return (UAISense_CogGroup_AutoTarget*)res;
}
