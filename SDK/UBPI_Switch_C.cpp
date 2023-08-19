#include "AActor.hpp"
#include "UBPI_Switch_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBPI_Switch_C* UBPI_Switch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Interfaces/BPI_Switch.BPI_Switch_C");
    return (UBPI_Switch_C*)res;
}
void UBPI_Switch_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Interfaces/BPI_Switch.BPI_Switch_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void UBPI_Switch_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Interfaces/BPI_Switch.BPI_Switch_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
