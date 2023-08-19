#include "ADoor.hpp"
#include "UShadowBoxComponent.hpp"
#include "UStaticMeshComponent.hpp"
UShadowBoxComponent* UShadowBoxComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ShadowBoxComponent");
    return (UShadowBoxComponent*)res;
}
