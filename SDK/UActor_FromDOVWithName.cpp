#include "UActorProvider.hpp"
#include "UActor_FromDOVWithName.hpp"
UActor_FromDOVWithName* UActor_FromDOVWithName::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_FromDOVWithName");
    return (UActor_FromDOVWithName*)res;
}
