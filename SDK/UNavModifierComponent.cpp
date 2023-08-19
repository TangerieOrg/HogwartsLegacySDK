#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UNavModifierComponent.hpp"
#include "UNavRelevantComponent.hpp"
UNavModifierComponent* UNavModifierComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavModifierComponent");
    return (UNavModifierComponent*)res;
}
void UNavModifierComponent::SetAreaClass(UClass* NewAreaClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass"));
    struct Params_SetAreaClass {
        UClass* NewAreaClass; // 0x0
    }; // Size: 0x8
    Params_SetAreaClass params{};
    params.NewAreaClass = (UClass*)NewAreaClass;
    ProcessEvent(func, &params);
}
