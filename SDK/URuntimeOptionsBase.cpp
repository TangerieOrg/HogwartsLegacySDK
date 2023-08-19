#include "UObject.hpp"
#include "URuntimeOptionsBase.hpp"
URuntimeOptionsBase* URuntimeOptionsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RuntimeOptionsBase");
    return (URuntimeOptionsBase*)res;
}
