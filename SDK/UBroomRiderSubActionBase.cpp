#include "UBroomRiderActionBase.hpp"
#include "UBroomRiderSubActionBase.hpp"
UBroomRiderSubActionBase* UBroomRiderSubActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderSubActionBase");
    return (UBroomRiderSubActionBase*)res;
}
