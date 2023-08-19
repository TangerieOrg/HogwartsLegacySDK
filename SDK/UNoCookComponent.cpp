#include "FPerPlatformBool.hpp"
#include "UActorComponent.hpp"
#include "UNoCookComponent.hpp"
UNoCookComponent* UNoCookComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NoCookComponent");
    return (UNoCookComponent*)res;
}
