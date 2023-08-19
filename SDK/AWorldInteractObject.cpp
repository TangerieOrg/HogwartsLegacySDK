#include "AWorldInteractObject.hpp"
#include "AWorldObject.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "URootMotionModProperties_Interact.hpp"
AWorldInteractObject* AWorldInteractObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldInteractObject");
    return (AWorldInteractObject*)res;
}
void AWorldInteractObject::InteractionInitiated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldInteractObject.InteractionInitiated"));
    struct Params_InteractionInitiated {
    }; // Size: 0x0
    Params_InteractionInitiated params{};
    ProcessEvent(func, &params);
}
