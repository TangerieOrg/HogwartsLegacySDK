#include "UInteractionMechanic.hpp"
#include "UObject.hpp"
UInteractionMechanic* UInteractionMechanic::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractionMechanic");
    return (UInteractionMechanic*)res;
}
