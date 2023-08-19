#include "UObject.hpp"
#include "UToolMenuBase.hpp"
UToolMenuBase* UToolMenuBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.ToolMenuBase");
    return (UToolMenuBase*)res;
}
