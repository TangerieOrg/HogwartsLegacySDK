#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UNavRelevantComponent.hpp"
#include "UObject.hpp"
UNavRelevantComponent* UNavRelevantComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavRelevantComponent");
    return (UNavRelevantComponent*)res;
}
void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy"));
    struct Params_SetNavigationRelevancy {
        bool bRelevant; // 0x0
    }; // Size: 0x1
    Params_SetNavigationRelevancy params{};
    params.bRelevant = (bool)bRelevant;
    ProcessEvent(func, &params);
}
