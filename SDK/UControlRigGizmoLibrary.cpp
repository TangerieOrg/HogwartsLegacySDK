#include "FControlRigGizmoDefinition.hpp"
#include "UControlRigGizmoLibrary.hpp"
#include "UObject.hpp"
UControlRigGizmoLibrary* UControlRigGizmoLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigGizmoLibrary");
    return (UControlRigGizmoLibrary*)res;
}
