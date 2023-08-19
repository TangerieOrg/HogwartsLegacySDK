#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_FromBlackboardActor.hpp"
UTransform_FromBlackboardActor* UTransform_FromBlackboardActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_FromBlackboardActor");
    return (UTransform_FromBlackboardActor*)res;
}
