#include "UBP_ObjectBuoyancyComponent_C.hpp"
#include "UObjectBuoyancyComponent.hpp"
UBP_ObjectBuoyancyComponent_C* UBP_ObjectBuoyancyComponent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Components/BP_ObjectBuoyancyComponent.BP_ObjectBuoyancyComponent_C");
    return (UBP_ObjectBuoyancyComponent_C*)res;
}
