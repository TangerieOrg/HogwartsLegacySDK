#include "UBaseObjectCopyComponent.hpp"
#include "UTransfigurationObjectCopyComponent.hpp"
UTransfigurationObjectCopyComponent* UTransfigurationObjectCopyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationObjectCopyComponent");
    return (UTransfigurationObjectCopyComponent*)res;
}
