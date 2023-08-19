#include "USceneComponent.hpp"
#include "UWindSourceComponentBase.hpp"
UWindSourceComponentBase* UWindSourceComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindSourceComponentBase");
    return (UWindSourceComponentBase*)res;
}
