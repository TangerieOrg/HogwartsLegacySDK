#include "UBroomRiderActionBase.hpp"
#include "UObject.hpp"
UBroomRiderActionBase* UBroomRiderActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderActionBase");
    return (UBroomRiderActionBase*)res;
}
