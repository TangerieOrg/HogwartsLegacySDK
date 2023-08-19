#include "UAIResource_Logic.hpp"
#include "UGameplayTaskResource.hpp"
UAIResource_Logic* UAIResource_Logic::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIResource_Logic");
    return (UAIResource_Logic*)res;
}
