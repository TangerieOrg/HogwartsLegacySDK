#include "AInteractiveObjectActor.hpp"
#include "AUIInteractiveActor.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
AUIInteractiveActor* AUIInteractiveActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIInteractiveActor");
    return (AUIInteractiveActor*)res;
}
void AUIInteractiveActor::InteractionInitiated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIInteractiveActor.InteractionInitiated"));
    struct Params_InteractionInitiated {
    }; // Size: 0x0
    Params_InteractionInitiated params{};
    ProcessEvent(func, &params);
}
