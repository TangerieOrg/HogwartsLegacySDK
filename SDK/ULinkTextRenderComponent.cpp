#include "ULinkTextRenderComponent.hpp"
#include "UTextRenderComponent.hpp"
ULinkTextRenderComponent* ULinkTextRenderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.LinkTextRenderComponent");
    return (ULinkTextRenderComponent*)res;
}
