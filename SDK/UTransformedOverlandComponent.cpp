#include "AActor.hpp"
#include "UStateEffectComponent.hpp"
#include "UTransformationOverlandComponent.hpp"
#include "UTransformedOverlandComponent.hpp"
UTransformedOverlandComponent* UTransformedOverlandComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformedOverlandComponent");
    return (UTransformedOverlandComponent*)res;
}
