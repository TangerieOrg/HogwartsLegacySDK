#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_FromDOV.hpp"
UActor_FromDOV* UActor_FromDOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_FromDOV");
    return (UActor_FromDOV*)res;
}
