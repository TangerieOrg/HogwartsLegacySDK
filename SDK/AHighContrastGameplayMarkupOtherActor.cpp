#include "AActor.hpp"
#include "AHighContrastGameplayMarkupOtherActor.hpp"
#include "UHighContrastGameplayMarkupOtherActorComponent.hpp"
AHighContrastGameplayMarkupOtherActor* AHighContrastGameplayMarkupOtherActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HighContrastGameplayMarkupOtherActor");
    return (AHighContrastGameplayMarkupOtherActor*)res;
}
