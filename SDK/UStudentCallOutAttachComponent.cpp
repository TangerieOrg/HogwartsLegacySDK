#include "USceneComponent.hpp"
#include "UStudentCallOutAttachComponent.hpp"
UStudentCallOutAttachComponent* UStudentCallOutAttachComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StudentCallOutAttachComponent");
    return (UStudentCallOutAttachComponent*)res;
}
