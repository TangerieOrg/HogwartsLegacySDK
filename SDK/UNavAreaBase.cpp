#include "UNavAreaBase.hpp"
#include "UObject.hpp"
UNavAreaBase* UNavAreaBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavAreaBase");
    return (UNavAreaBase*)res;
}
