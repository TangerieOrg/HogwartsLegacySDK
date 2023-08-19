#include "UAIResource_Movement.hpp"
#include "UGameplayTaskResource.hpp"
UAIResource_Movement* UAIResource_Movement::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIResource_Movement");
    return (UAIResource_Movement*)res;
}
