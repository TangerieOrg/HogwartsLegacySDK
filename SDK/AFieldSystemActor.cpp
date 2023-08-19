#include "AActor.hpp"
#include "AFieldSystemActor.hpp"
#include "UFieldSystemComponent.hpp"
AFieldSystemActor* AFieldSystemActor::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemActor");
    return (AFieldSystemActor*)res;
}
