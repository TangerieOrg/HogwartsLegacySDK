#include "UBoxComponent.hpp"
#include "UConjurationSnappingComponentBase.hpp"
UConjurationSnappingComponentBase* UConjurationSnappingComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSnappingComponentBase");
    return (UConjurationSnappingComponentBase*)res;
}
