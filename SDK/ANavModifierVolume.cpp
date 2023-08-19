#include "ANavModifierVolume.hpp"
#include "AVolume.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ANavModifierVolume* ANavModifierVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavModifierVolume");
    return (ANavModifierVolume*)res;
}
void ANavModifierVolume::SetAreaClass(UClass* NewAreaClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass"));
    struct Params_SetAreaClass {
        UClass* NewAreaClass; // 0x0
    }; // Size: 0x8
    Params_SetAreaClass params{};
    params.NewAreaClass = (UClass*)NewAreaClass;
    ProcessEvent(func, &params);
}
