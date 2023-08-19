#include "FSoftClassPath.hpp"
#include "UAISystemBase.hpp"
#include "UObject.hpp"
UAISystemBase* UAISystemBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AISystemBase");
    return (UAISystemBase*)res;
}
