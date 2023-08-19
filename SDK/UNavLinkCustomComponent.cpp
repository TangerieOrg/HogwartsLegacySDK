#include "ECollisionChannel.hpp"
#include "ENavLinkDirection\Type.hpp"
#include "FNavAgentSelector.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UNavLinkCustomComponent.hpp"
#include "UNavRelevantComponent.hpp"
UNavLinkCustomComponent* UNavLinkCustomComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkCustomComponent");
    return (UNavLinkCustomComponent*)res;
}
