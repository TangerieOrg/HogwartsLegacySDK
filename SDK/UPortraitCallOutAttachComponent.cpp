#include "UPortraitCallOutAttachComponent.hpp"
#include "USceneComponent.hpp"
UPortraitCallOutAttachComponent* UPortraitCallOutAttachComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PortraitCallOutAttachComponent");
    return (UPortraitCallOutAttachComponent*)res;
}
