#include "UObject.hpp"
#include "USequencePlayerProxy.hpp"
USequencePlayerProxy* USequencePlayerProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SequencePlayerProxy");
    return (USequencePlayerProxy*)res;
}
