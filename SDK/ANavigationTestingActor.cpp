#include "AActor.hpp"
#include "ANavigationData.hpp"
#include "ANavigationTestingActor.hpp"
#include "ENavCostDisplay\Type.hpp"
#include "FNavAgentProperties.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UNavigationInvokerComponent.hpp"
ANavigationTestingActor* ANavigationTestingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationTestingActor");
    return (ANavigationTestingActor*)res;
}
